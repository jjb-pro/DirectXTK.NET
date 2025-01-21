#pragma once
#pragma warning(disable : 4534)

#include "WICTextureLoader.h"
#include "ScreenGrab.h"
#include "Enums.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace DirectXTK
{
	public ref class WICTextureHelper
	{
		public:
			static HRESULT CreateTextureFromFile(
				Silk::NET::Direct3D11::ID3D11Device* device, 
				String^ filePath, 
				Silk::NET::Direct3D11::ID3D11Resource** texture, 
				Silk::NET::Direct3D11::ID3D11ShaderResourceView** textureView
			);
			static HRESULT CreateTextureFromFile(
				Silk::NET::Direct3D11::ID3D11Device* device,
				Silk::NET::Direct3D11::ID3D11DeviceContext* deviceContext,
				String^ filePath, 
				Silk::NET::Direct3D11::ID3D11Resource** texture, 
				Silk::NET::Direct3D11::ID3D11ShaderResourceView** textureView
			);
	
			static HRESULT SaveDDSTextureToFile(
				Silk::NET::Direct3D11::ID3D11DeviceContext* deviceContext, 
				Silk::NET::Direct3D11::ID3D11Resource* texture, 
				String^ filePath
			);
			static HRESULT SaveWICTextureToFile(
				Silk::NET::Direct3D11::ID3D11DeviceContext* deviceContext, 
				Silk::NET::Direct3D11::ID3D11Resource* texture, 
				String^ filePath, 
				ContainerFormat containerFormat, 
				[Optional]PixelFormat pixelFormat,
				[Optional]bool forceSRGB);
	};
}