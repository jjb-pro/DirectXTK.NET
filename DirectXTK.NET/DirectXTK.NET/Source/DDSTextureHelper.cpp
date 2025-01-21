#include "StdAfx.h"
#include "DDSTextureHelper.h"

using namespace System;
using namespace System::Runtime::InteropServices;

HRESULT DirectXTK::DDSTextureHelper::CreateDDSTextureFromFile(Silk::NET::Direct3D11::ID3D11Device* device, String^ filePath, Silk::NET::Direct3D11::ID3D11Resource** texture, Silk::NET::Direct3D11::ID3D11ShaderResourceView** textureView, UINT maxSize, DDSAlphaMode alphaMode)
{
    auto chars = (wchar_t*)Marshal::StringToHGlobalUni(filePath).ToPointer();
    auto nativeAlphaMode = static_cast<DirectX::DDS_ALPHA_MODE>(alphaMode);

    HRESULT result = DirectX::CreateDDSTextureFromFile((ID3D11Device*)device, chars, (ID3D11Resource**)texture, (ID3D11ShaderResourceView**)textureView, maxSize, &nativeAlphaMode);

    Marshal::FreeHGlobal(IntPtr(chars));
    return result;
}

HRESULT DirectXTK::DDSTextureHelper::CreateDDSTextureFromFile(Silk::NET::Direct3D11::ID3D11Device* device, Silk::NET::Direct3D11::ID3D11DeviceContext* deviceContext, String^ filePath, Silk::NET::Direct3D11::ID3D11Resource** texture, Silk::NET::Direct3D11::ID3D11ShaderResourceView** textureView, UINT maxSize, DDSAlphaMode alphaMode)
{
    auto chars = (wchar_t*)Marshal::StringToHGlobalUni(filePath).ToPointer();
    auto nativeAlphaMode = static_cast<DirectX::DDS_ALPHA_MODE>(alphaMode);

    HRESULT result = DirectX::CreateDDSTextureFromFile((ID3D11Device*)device, (ID3D11DeviceContext*)deviceContext, chars, (ID3D11Resource**)texture, (ID3D11ShaderResourceView**)textureView, maxSize, &nativeAlphaMode);

    Marshal::FreeHGlobal(IntPtr(chars));
    return result;
}

HRESULT DirectXTK::DDSTextureHelper::CreateDDSTextureFromFile(Silk::NET::Direct3D11::ID3D11Device* device, String^ filePath, UINT maxSize, Silk::NET::Direct3D11::Usage usage, UINT bindFlags, UINT cpuAccessFlags, Silk::NET::Direct3D11::ResourceMiscFlag miscFlags, DDSLoaderFlag loadFlags, Silk::NET::Direct3D11::ID3D11Resource** texture, Silk::NET::Direct3D11::ID3D11ShaderResourceView** textureView, DDSAlphaMode alphaMode)
{
    auto chars = (wchar_t*)Marshal::StringToHGlobalUni(filePath).ToPointer();
    auto nativeAlphaMode = static_cast<DirectX::DDS_ALPHA_MODE>(alphaMode);
    auto nativeLoadFlags = static_cast<DirectX::DDS_LOADER_FLAGS>(loadFlags);

    HRESULT result = DirectX::CreateDDSTextureFromFileEx((ID3D11Device*)device, chars, maxSize, (D3D11_USAGE)usage, bindFlags, cpuAccessFlags, (UINT)miscFlags, nativeLoadFlags, (ID3D11Resource**)texture, (ID3D11ShaderResourceView**)textureView, &nativeAlphaMode);

    Marshal::FreeHGlobal(IntPtr(chars));
    return result;
}

HRESULT DirectXTK::DDSTextureHelper::CreateDDSTextureFromFile(Silk::NET::Direct3D11::ID3D11Device* device, Silk::NET::Direct3D11::ID3D11DeviceContext* deviceContext, String^ filePath, UINT maxSize, Silk::NET::Direct3D11::Usage usage, UINT bindFlags, UINT cpuAccessFlags, Silk::NET::Direct3D11::ResourceMiscFlag miscFlags, DDSLoaderFlag loadFlags, Silk::NET::Direct3D11::ID3D11Resource** texture, Silk::NET::Direct3D11::ID3D11ShaderResourceView** textureView, DDSAlphaMode alphaMode)
{
    auto chars = (wchar_t*)Marshal::StringToHGlobalUni(filePath).ToPointer();
    auto nativeAlphaMode = static_cast<DirectX::DDS_ALPHA_MODE>(alphaMode);
    auto nativeLoadFlags = static_cast<DirectX::DDS_LOADER_FLAGS>(loadFlags);

    HRESULT result = DirectX::CreateDDSTextureFromFileEx((ID3D11Device*)device, (ID3D11DeviceContext*)deviceContext, chars, maxSize, (D3D11_USAGE)usage, bindFlags, cpuAccessFlags, (UINT)miscFlags, nativeLoadFlags, (ID3D11Resource**)texture, (ID3D11ShaderResourceView**)textureView, &nativeAlphaMode);

    Marshal::FreeHGlobal(IntPtr(chars));
    return result;
}