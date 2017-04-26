package com.littleboat.kalendar;

public interface SystemUIChangeRecipient
{
	public SystemUIChangeRecipient GetSystemUIChangeCallback();
	public void SystemUIChangeOccured();
}
