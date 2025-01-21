#include "StdAfx.h"
#include "AudioEngine.h"

using namespace DirectX;

DirectXTK::AudioEngine::AudioEngine(AudioEngineFlags flags)
{
    m_audEngine = new DirectX::AudioEngine();
}

DirectXTK::AudioEngine::~AudioEngine()
{
    delete m_audEngine;
    m_audEngine = nullptr;
}


DirectX::AudioEngine* DirectXTK::AudioEngine::ToNative()
{
    return m_audEngine;
}


void DirectXTK::AudioEngine::Update()
{
    if (m_audEngine && !(m_audEngine)->Update())
        throw gcnew System::Exception("Audio engine failed to update.");
}

void DirectXTK::AudioEngine::Suspend()
{
    (m_audEngine)->Suspend();
}

void DirectXTK::AudioEngine::Resume()
{
    (m_audEngine)->Resume();
}

void DirectXTK::AudioEngine::Reset()
{
    if (!(m_audEngine)->Reset())
        throw gcnew System::Exception("Audio engine failed to reset.");
}

bool DirectXTK::AudioEngine::IsAudioDevicePresent()
{
    return (m_audEngine)->IsAudioDevicePresent();
}

bool DirectXTK::AudioEngine::IsCriticalError()
{
    return (m_audEngine)->IsCriticalError();
}