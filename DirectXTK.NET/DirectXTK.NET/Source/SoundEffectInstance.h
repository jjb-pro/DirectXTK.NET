#pragma once

#include "StdAfx.h"
#include "Audio.h"
#include "AudioListener.h"
#include "AudioEmitter.h"

namespace DirectXTK {
	public ref class SoundEffectInstance
	{
		private:
			DirectX::SoundEffectInstance* m_soundEffectInstance;

		internal:
			SoundEffectInstance(std::unique_ptr<DirectX::SoundEffectInstance> nativeInstance);

		public:
			~SoundEffectInstance();

			void Play(bool loop);
			void SetVolume(float volume);

			void Apply3D(AudioListener^ audioListener, AudioEmitter^ audioEmitter, bool rightHandCoordinateSystem);
	};
}