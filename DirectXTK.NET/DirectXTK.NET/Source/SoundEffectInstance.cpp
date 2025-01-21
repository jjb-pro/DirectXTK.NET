#include "StdAfx.h"
#include "SoundEffectInstance.h"

DirectXTK::SoundEffectInstance::SoundEffectInstance(std::unique_ptr<DirectX::SoundEffectInstance> nativeInstance)
{
	m_soundEffectInstance = nativeInstance.release();
}

DirectXTK::SoundEffectInstance::~SoundEffectInstance()
{
	delete m_soundEffectInstance;
}

void DirectXTK::SoundEffectInstance::Play(bool loop)
{
	if (m_soundEffectInstance)
		(m_soundEffectInstance)->Play(loop);
}

void DirectXTK::SoundEffectInstance::SetVolume(float volume)
{
	if (m_soundEffectInstance)
		(m_soundEffectInstance)->SetVolume(volume);
}

void DirectXTK::SoundEffectInstance::Apply3D(AudioListener^ audioListener, AudioEmitter^ audioEmitter, bool rightHandCoordinateSystem)
{
	DirectX::AudioListener ae;
	m_soundEffectInstance->Apply3D(*audioListener->ToNative(), *audioEmitter->ToNative(), rightHandCoordinateSystem);
}