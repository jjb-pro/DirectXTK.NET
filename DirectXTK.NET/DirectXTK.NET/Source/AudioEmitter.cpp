#include "StdAfx.h"
#include "AudioEmitter.h"
#include <malloc.h>
#include "AudioEmitterNative.h"

using namespace System::Numerics;

DirectX::AudioEmitter* DirectXTK::AudioEmitter::ToNative()
{
	return nativeInstance;
}


DirectXTK::AudioEmitter::AudioEmitter()
{
	nativeInstance = new DirectX::AudioEmitter();
}

DirectXTK::AudioEmitter::~AudioEmitter()
{
	delete nativeInstance;
}


void DirectXTK::AudioEmitter::Update(Vector3 newPosition, Vector3 upDirection, float deltaTime)
{
	AudioEmitterNative::Run(nativeInstance, newPosition.X, newPosition.Y, newPosition.Z, upDirection.X, upDirection.Y, upDirection.Z, deltaTime);
}