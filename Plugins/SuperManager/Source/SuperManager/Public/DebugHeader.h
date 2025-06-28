#pragma once

#include "Misc/MessageDialog.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"

#define ToText(String) FText::FromString(String)

namespace Debug
{
	static void Print(const FString& Message, const FColor& Color)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 8.f, Color, Message);
		}
	}

	static void Log(const FString& Message)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);
	}

	static EAppReturnType::Type ShowMsgDialog(EAppMsgType::Type MsgType, const FString& Message, bool bShowMsgAsWarning = true)
	{
		if (bShowMsgAsWarning)
		{
			const FText MsgTitle = ToText(TEXT("Warning"));
			return FMessageDialog::Open(MsgType, ToText(Message), MsgTitle);
		}
		else
		{
			return FMessageDialog::Open(MsgType, ToText(Message));
		}
	}

	static void ShowNotifyInfo(const FString& Message)
	{
		FNotificationInfo Info(ToText(Message));
		Info.bUseLargeFont	= true;
		Info.FadeInDuration = 7.f;

		FSlateNotificationManager::Get().AddNotification(Info);
	}
}
