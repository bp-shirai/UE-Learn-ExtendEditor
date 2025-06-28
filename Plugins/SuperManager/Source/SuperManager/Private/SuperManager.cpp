// Copyright Epic Games, Inc. All Rights Reserved.

#include "SuperManager.h"

#include "ContentBrowserModule.h"
#include "EditorAssetLibrary.h"
#include "ObjectTools.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetToolsModule.h"

#include "DebugHeader.h"

#define LOCTEXT_NAMESPACE "FSuperManagerModule"

void FSuperManagerModule::StartupModule()
{
	// Add a Custom Menu Entry
	InitContentBrowserMenuExtention();
}

void FSuperManagerModule::ShutdownModule()
{
}

void FSuperManagerModule::InitContentBrowserMenuExtention()
{
	FContentBrowserModule& ContentBrowser = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");

	// Get hold of all the menu extenders
	TArray<FContentBrowserMenuExtender_SelectedPaths>& ContextMenuExtenders = ContentBrowser.GetAllPathViewContextMenuExtenders();

	// FContentBrowserMenuExtender_SelectedPaths CustomCBMenuDelegate;
	// CustomCBMenuDelegate.BindRaw(this, &ThisClass::CustomContentBrowserMenuExtenter);
	// ContextMenuExtenders.Add(CustomCBMenuDelegate);

	// We add custom delegates to all the existing delegates
	ContextMenuExtenders.Add(
		FContentBrowserMenuExtender_SelectedPaths::CreateRaw(this, &FSuperManagerModule::CustomCBMenuExtenter));
}

// To define the position for inserting menu entry
TSharedRef<FExtender> FSuperManagerModule::CustomCBMenuExtenter(const TArray<FString>& SelectedPaths)
{
	TSharedRef<FExtender> MenuExtender(new FExtender());

	if (0 < SelectedPaths.Num())
	{
		// Define the details for the menu entry
		MenuExtender->AddMenuExtension(
			FName("Delete"),																// Extention hook, position to insert
			EExtensionHook::After,															// Inserting before or after
			TSharedPtr<FUICommandList>(),													// Custom hot keys
			FMenuExtensionDelegate::CreateRaw(this, &FSuperManagerModule::AddCBMenuEntry)); // Second binding, will define details for the menu entry

		FolderPathsSelected = SelectedPaths;
	}

	return MenuExtender;
}

// Define details for the custom menu entry
void FSuperManagerModule::AddCBMenuEntry(FMenuBuilder& MenuBuilder)
{
	// The actual function to execute
	MenuBuilder.AddMenuEntry(
		FText::FromString(TEXT("Delete Unused Assets")),										  // Title text for menu entry
		FText::FromString(TEXT("Safely delete all unused assets under folder")),				  // Tooltip text
		FSlateIcon(),																			  // Custom icon
		FExecuteAction::CreateRaw(this, &FSuperManagerModule::OnDeleteUnusedAssetButtonClicked)); // The actual function to execute

	MenuBuilder.AddMenuEntry(
		FText::FromString(TEXT("Delete Empty Folders")),
		FText::FromString(TEXT("Safely delete all empty folders")),
		FSlateIcon(),
		FExecuteAction::CreateRaw(this, &FSuperManagerModule::OnDeleteEmptyFoldersButtonClicked));
}

// Search and delete unused assets
void FSuperManagerModule::OnDeleteUnusedAssetButtonClicked()
{
	if (1 < FolderPathsSelected.Num())
	{
		Debug::ShowMsgDialog(EAppMsgType::Ok, TEXT("You can only do this to one folder"), false);
		return;
	}

	// Debug::Print(TEXT("Currently selected folder: ") + FolderPathsSelected[0], FColor::Green);

	TArray<FString> AssetsPathNames = UEditorAssetLibrary::ListAssets(FolderPathsSelected[0]);
	// Whether there are assets under the folder
	if (AssetsPathNames.Num() == 0)
	{
		Debug::ShowMsgDialog(EAppMsgType::Ok, TEXT("No asset found under selected folder"), false);
		return;
	}

	EAppReturnType::Type ConfirmResult =
		Debug::ShowMsgDialog(EAppMsgType::YesNo, TEXT("A total of ") + FString::FromInt(AssetsPathNames.Num()) + TEXT(" assets need to be checked.\nWould you like to proceed?"), false);

	if (ConfirmResult == EAppReturnType::No) return;

	// Allow user to safely delete all unused assets
	FixUpRedirectors();

	TArray<FAssetData> UnusedAssetsDataArray;

	for (const FString& AssetPathName : AssetsPathNames)
	{
		// Don't touch root folder
		if (AssetPathName.Contains(TEXT("Developers")) ||
			AssetPathName.Contains(TEXT("Collections")) ||
			AssetPathName.Contains(TEXT("__ExternalActors__")) ||
			AssetPathName.Contains(TEXT("__ExternalObjects__")))
		{
			continue;
		}

		if (!UEditorAssetLibrary::DoesAssetExist(AssetPathName)) continue;

		TArray<FString> AssetReferencers = UEditorAssetLibrary::FindPackageReferencersForAsset(AssetPathName);

		if (AssetReferencers.Num() == 0)
		{
			const FAssetData UnusedAssetData = UEditorAssetLibrary::FindAssetData(AssetPathName);
			UnusedAssetsDataArray.Add(UnusedAssetData);
		}
	}

	if (0 < UnusedAssetsDataArray.Num())
	{
		ObjectTools::DeleteAssets(UnusedAssetsDataArray);
	}
	else
	{
		Debug::ShowMsgDialog(EAppMsgType::Ok, TEXT("No unused asset found under selected folder"), false);
	}
}

void FSuperManagerModule::OnDeleteEmptyFoldersButtonClicked()
{
	TArray<FString> FolderPathArray = UEditorAssetLibrary::ListAssets(FolderPathsSelected[0], true, true);
	uint32 Counter					= 0;

	FString EmptyFolderPathsNames;
	TArray<FString> EmptyFoldersPathsArray;

	// Add currently selected folder
	FolderPathArray.Add(FolderPathsSelected[0]);
	
	for (const FString& FolderPath : FolderPathArray)
	{
		if (FolderPath.Contains(TEXT("Developers")) ||
			FolderPath.Contains(TEXT("Collections")) ||
			FolderPath.Contains(TEXT("__ExternalActors__")) ||
			FolderPath.Contains(TEXT("__ExternalObjects__")))
		{
			continue;
		}

		if (!UEditorAssetLibrary::DoesDirectoryExist(FolderPath))continue;
		

		// DoesDirectoryHaveAssets is not working
		FString Path = FolderPath;
		Path.RemoveFromEnd(TEXT("/"));

		if (!UEditorAssetLibrary::DoesDirectoryHaveAssets(Path))
		{
			EmptyFolderPathsNames.Append(FolderPath);
			EmptyFolderPathsNames.Append(TEXT("\n"));

			EmptyFoldersPathsArray.Add(FolderPath);
		}
	}

	if (EmptyFoldersPathsArray.Num() == 0)
	{
		Debug::ShowMsgDialog(EAppMsgType::Ok, TEXT("No empty folder found under selected folder"), false);
		return;
	}

	EAppReturnType::Type ConfirmResult =
		Debug::ShowMsgDialog(EAppMsgType::OkCancel, TEXT("Empty folders found in:\n") + EmptyFolderPathsNames + TEXT("\nWould you like to delete all?"), false);

	if (ConfirmResult == EAppReturnType::Cancel) return;

	for (const FString& EmptyFolderPath : EmptyFoldersPathsArray)
	{
		if (UEditorAssetLibrary::DeleteDirectory(EmptyFolderPath))
		{
			++Counter;
		}
		else
		{
			Debug::Print(TEXT("Failed to delete " + EmptyFolderPath), FColor::Red);
		}
	}

	if (0 < Counter)
	{
		Debug::ShowNotifyInfo(TEXT("Successfully deleted ") + FString::FromInt(Counter) + TEXT(" folders"));
	}
}

void FSuperManagerModule::FixUpRedirectors()
{
	TArray<UObjectRedirector*> RedirectorsToFixArray;

	FAssetRegistryModule& AssetRegistry = FModuleManager::Get().LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	FARFilter Filter;
	Filter.bRecursivePaths = true;
	Filter.PackagePaths.Emplace("/Game");
	Filter.ClassPaths.Emplace("ObjectRedirector");

	TArray<FAssetData> OutRedirectors;
	AssetRegistry.Get().GetAssets(Filter, OutRedirectors);

	for (const FAssetData& Redirector : OutRedirectors)
	{
		if (UObjectRedirector* RedirectorToFix = Cast<UObjectRedirector>(Redirector.GetAsset()))
		{
			RedirectorsToFixArray.Add(RedirectorToFix);
		}
	}

	FAssetToolsModule& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");

	AssetTools.Get().FixupReferencers(RedirectorsToFixArray);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSuperManagerModule, SuperManager)