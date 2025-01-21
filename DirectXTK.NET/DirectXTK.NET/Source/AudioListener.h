#pragma once

#include "Audio.h"

namespace DirectXTK
{
	public ref class AudioListener
	{
		private:
			DirectX::AudioListener* nativeInstance;

		internal:
			DirectX::AudioListener* ToNative();

		public:
			AudioListener();
			~AudioListener();
	};
}