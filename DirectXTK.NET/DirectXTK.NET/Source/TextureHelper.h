#pragma once

#include "WICTextureLoader.h"
#include "ScreenGrab.h"
#include "Enums.h"

namespace DirectXTK
{
	public ref class TextureHelper
	{
		public:
			static HRESULT CreateTextureFromFile(Silk::NET::Direct3D11::ID3D11Device* device, System::String^ filePath, Silk::NET::Direct3D11::ID3D11Resource** texture, Silk::NET::Direct3D11::ID3D11ShaderResourceView** textureView);
	
			static HRESULT SaveDDSTextureToFile(Silk::NET::Direct3D11::ID3D11DeviceContext* deviceContext, Silk::NET::Direct3D11::ID3D11Resource* resource, System::String^ filePath);
			static HRESULT SaveWICTextureToFile(Silk::NET::Direct3D11::ID3D11DeviceContext* deviceContext, Silk::NET::Direct3D11::ID3D11Resource* resource, System::String^ filePath, ContainerFormat containerFormat, [System::Runtime::InteropServices::OptionalAttribute]PixelFormat pixelFormat, [System::Runtime::InteropServices::OptionalAttribute]bool forceSRGB);
	};
}