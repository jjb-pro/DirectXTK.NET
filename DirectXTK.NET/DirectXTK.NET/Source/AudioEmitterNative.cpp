#include "StdAfx.h"
#include "AudioEmitterNative.h"
#include "Audio.h"

void AudioEmitterNative::Run(DirectX::AudioEmitter* nativeInstance, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float deltaTime)
{
	DirectX::FXMVECTOR nativePosition = DirectX::XMVectorSet(posX, posY, posZ, 0.0f);
	DirectX::FXMVECTOR nativeUpDirection = DirectX::XMVectorSet(dirX, dirY, dirZ, 0.0f);

	nativeInstance->Update(nativePosition, nativeUpDirection, deltaTime);
}