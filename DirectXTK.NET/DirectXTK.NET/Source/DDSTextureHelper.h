#pragma warning(disable : 4534)

#include "DDSTextureLoader.h"

using namespace System;

namespace DirectXTK
{
    public enum class DDSAlphaMode {
        Unknown,
        Straight,
        Premltiplied,
        Opaque,
        Custom
    };

    public enum class DDSLoaderFlag {
        Default = 0,
        ForceSRGB = 1,
        IgnoreSRGB = 2,
    };

    public ref class DDSTextureHelper
    {
    public:
        static HRESULT CreateDDSTextureFromFile(
            Silk::NET::Direct3D11::ID3D11Device* device,
            String^ filePath,
            Silk::NET::Direct3D11::ID3D11Resource** texture,
            Silk::NET::Direct3D11::ID3D11ShaderResourceView** textureView,
            [Runtime::InteropServices::OptionalAttribute] UINT maxsize,
            [Runtime::InteropServices::OptionalAttribute] DDSAlphaMode alphaMode);

        static HRESULT CreateDDSTextureFromFile(
            Silk::NET::Direct3D11::ID3D11Device* device,
            Silk::NET::Direct3D11::ID3D11DeviceContext* deviceContext,
            String^ filePath,
            Silk::NET::Direct3D11::ID3D11Resource** texture,
            Silk::NET::Direct3D11::ID3D11ShaderResourceView** textureView,
            [Runtime::InteropServices::OptionalAttribute] UINT maxSize,
            [Runtime::InteropServices::OptionalAttribute] DDSAlphaMode alphaMode);

        static HRESULT CreateDDSTextureFromFile(
            Silk::NET::Direct3D11::ID3D11Device* device,
            String^ filePath,
            UINT maxsize,
            Silk::NET::Direct3D11::Usage usage,
            UINT bindFlags,
            UINT cpuAccessFlags,
            Silk::NET::Direct3D11::ResourceMiscFlag miscFlags,
            DDSLoaderFlag loadFlags,
            Silk::NET::Direct3D11::ID3D11Resource** texture,
            Silk::NET::Direct3D11::ID3D11ShaderResourceView** textureView,
            DDSAlphaMode alphaMode);

        static HRESULT CreateDDSTextureFromFile(
            Silk::NET::Direct3D11::ID3D11Device* device,
            Silk::NET::Direct3D11::ID3D11DeviceContext* deviceContext,
            String^ filePath,
            UINT maxsize,
            Silk::NET::Direct3D11::Usage usage,
            UINT bindFlags,
            UINT cpuAccessFlags,
            Silk::NET::Direct3D11::ResourceMiscFlag miscFlags,
            DDSLoaderFlag loadFlags,
            Silk::NET::Direct3D11::ID3D11Resource** texture,
            Silk::NET::Direct3D11::ID3D11ShaderResourceView** textureView,
            DDSAlphaMode alphaMode);

        //static HRESULT CreateDDSTextureFromFileEx(
        //    Silk::NET::Direct3D11::ID3D11Device* d3dDevice,
        //    Silk::NET::Direct3D11::ID3D11DeviceContext* d3dContext,
        //    System::String^ filePath,
        //    size_t maxsize,
        //    D3D11_USAGE usage,
        //    unsigned int bindFlags,
        //    unsigned int cpuAccessFlags,
        //    unsigned int miscFlags,
        //    DDS_LOADER_FLAGS loadFlags,
        //    Silk::NET::Direct3D11::ID3D11Resource** texture,
        //    Silk::NET::Direct3D11::ID3D11ShaderResourceView** textureView,
        //    DDS_ALPHA_MODE* alphaMode = nullptr);
    };
}