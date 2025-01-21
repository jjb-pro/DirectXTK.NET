#pragma once
#include "Audio.h"

class AudioEmitterNative
{
	public:
		static void Run(DirectX::AudioEmitter* nativeInstance, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float deltaTime);
};