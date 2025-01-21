#pragma once
#include <memory>
#include <Audio.h>

using namespace System;

namespace DirectXTK
{
    public enum class AudioEngineFlags : uint32_t
    {
        Default = 0x0,

        EnvironmentalReverb = 0x1,
        ReverbUseFilters = 0x2,
        UseMasteringLimiter = 0x4,

        Debug = 0x10000,
        ThrowOnNoAudioHW = 0x20000,
        DisableVoiceReuse = 0x40000,
    };

    public ref class AudioEngine : IDisposable
    {
    private:
        DirectX::AudioEngine* m_audEngine;

    internal:
        DirectX::AudioEngine* ToNative();

    public:
        AudioEngine(AudioEngineFlags flags);
        ~AudioEngine();

        void Update();
        void Suspend();
        void Resume();
        void Reset();

        bool IsAudioDevicePresent();
        bool IsCriticalError();
    };
}