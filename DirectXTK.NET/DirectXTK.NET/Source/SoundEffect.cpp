#include "StdAfx.h"
#include "SoundEffect.h"
#include "SoundEffectInstance.h"

using namespace System::Runtime::InteropServices;

DirectXTK::SoundEffect::SoundEffect(AudioEngine^ audioEngine, String^ filePath)
{
    auto chars = (wchar_t*)Marshal::StringToHGlobalUni(filePath).ToPointer();
    m_soundEffect = new DirectX::SoundEffect(audioEngine->ToNative(), chars);

    Marshal::FreeHGlobal(IntPtr(chars));
}

DirectXTK::SoundEffect::~SoundEffect()
{
    if ((m_soundEffect)->IsInUse())
        throw gcnew System::Exception("The sound effect is still in use.");

    delete m_soundEffect;
    m_soundEffect = nullptr;
}

void DirectXTK::SoundEffect::Play()
{
    (m_soundEffect)->Play();
}

bool DirectXTK::SoundEffect::IsInUse()
{
    return (m_soundEffect)->IsInUse();
}

DirectXTK::SoundEffectInstance^ DirectXTK::SoundEffect::CreateInstance(SoundEffectInstanceFlags flags)
{
    return gcnew SoundEffectInstance((m_soundEffect)->CreateInstance(static_cast<DirectX::SOUND_EFFECT_INSTANCE_FLAGS>(flags)));
}