#include "StdAfx.h"
#include "TextureHelper.h"

HRESULT DirectXTK::TextureHelper::CreateTextureFromFile(Silk::NET::Direct3D11::ID3D11Device* device, System::String^ filePath, Silk::NET::Direct3D11::ID3D11Resource** texture, Silk::NET::Direct3D11::ID3D11ShaderResourceView** textureView)
{
    auto chars = (wchar_t*)System::Runtime::InteropServices::Marshal::StringToHGlobalUni(filePath).ToPointer();
    HRESULT result = DirectX::CreateWICTextureFromFile((ID3D11Device*)device, chars, (ID3D11Resource**)texture, (ID3D11ShaderResourceView**)textureView);
    System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr(chars));
    return result;
}

HRESULT DirectXTK::TextureHelper::SaveDDSTextureToFile(Silk::NET::Direct3D11::ID3D11DeviceContext* deviceContext, Silk::NET::Direct3D11::ID3D11Resource* resource, System::String^ filePath)
{
    auto chars = (wchar_t*)System::Runtime::InteropServices::Marshal::StringToHGlobalUni(filePath).ToPointer();
    HRESULT result = DirectX::SaveDDSTextureToFile((ID3D11DeviceContext*)deviceContext, (ID3D11Resource*)resource, chars);
    System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr(chars));
    return result;
}

HRESULT DirectXTK::TextureHelper::SaveWICTextureToFile(Silk::NET::Direct3D11::ID3D11DeviceContext* deviceContext, Silk::NET::Direct3D11::ID3D11Resource* resource, System::String^ filePath, ContainerFormat containerFormat, [System::Runtime::InteropServices::OptionalAttribute]PixelFormat pixelFormat, [System::Runtime::InteropServices::OptionalAttribute]bool forceSRGB)
{
    auto chars = (wchar_t*)System::Runtime::InteropServices::Marshal::StringToHGlobalUni(filePath).ToPointer();
    auto nativePixelFormat = ToNative(pixelFormat);

    HRESULT result = DirectX::SaveWICTextureToFile((ID3D11DeviceContext*)deviceContext, (ID3D11Resource*)resource, ToNative(containerFormat), chars, pixelFormat == PixelFormat::FormatDontCare ? nullptr : &nativePixelFormat, nullptr, forceSRGB);

    System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr(chars));
    return result;
}