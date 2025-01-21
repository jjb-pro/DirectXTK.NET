#include "StdAfx.h"
#include "AudioListener.h"

DirectX::AudioListener* DirectXTK::AudioListener::ToNative()
{
    return nativeInstance;
}

DirectXTK::AudioListener::AudioListener()
{
    DirectX::AudioListener audioListener;
    nativeInstance = &audioListener;
}

DirectXTK::AudioListener::~AudioListener()
{
    delete nativeInstance;
}