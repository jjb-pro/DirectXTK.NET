#pragma once

#include <memory>
#include "Audio.h"
#include "AudioEngine.h"
#include "SoundEffectInstance.h"

using namespace System;

namespace DirectXTK
{
	public enum class SoundEffectInstanceFlags : uint32_t
	{
		Default = 0x0,

		Use3D = 0x1,
		ReverbUseFilters = 0x2,
		NoSetPitch = 0x4,

		UseRedirectLFE = 0x10000,
	};

	public ref class SoundEffect
	{
		private:
			DirectX::SoundEffect* m_soundEffect;

		public:
			SoundEffect(AudioEngine^ audioEngine, String^ filePath);
			~SoundEffect();

			void Play();
			bool IsInUse();

			SoundEffectInstance^ CreateInstance(SoundEffectInstanceFlags flags);
	};
}