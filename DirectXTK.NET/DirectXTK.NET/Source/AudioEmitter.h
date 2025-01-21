#pragma once

#include "Audio.h"

using namespace System::Numerics;

namespace DirectXTK
{
	public ref class AudioEmitter
	{
		private:
			DirectX::AudioEmitter* nativeInstance;

		internal:
			DirectX::AudioEmitter* ToNative();

		public:
			AudioEmitter();
			~AudioEmitter();

			void Update(Vector3 newPosition, Vector3 upDirection, float deltaTime);
	};
}