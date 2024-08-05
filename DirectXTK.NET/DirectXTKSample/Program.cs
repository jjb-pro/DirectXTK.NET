using DirectXTK;
using Silk.NET.Core.Native;
using Silk.NET.Direct3D11;
using Silk.NET.DXGI;
using System.Reflection;

ComPtr<IDXGIFactory2> factory = default;
ComPtr<ID3D11Device> device = default;
ComPtr<ID3D11DeviceContext> devCtx = default;

unsafe
{
    Guid guid = typeof(IDXGIFactory2).GetTypeInfo().GUID;
    DXGI.GetApi(null).CreateDXGIFactory2(0, &guid, (void**)&factory);

    D3D11.GetApi(null).CreateDevice(null, D3DDriverType.Hardware, 0, (uint)CreateDeviceFlag.Debug, null, 0, D3D11.SdkVersion, device.GetAddressOf(), null, devCtx.GetAddressOf());

    ComPtr<ID3D11Resource> texture = default;
    ComPtr<ID3D11ShaderResourceView> textureSrv = default;

    // load texture
    SilkMarshal.ThrowHResult(
        TextureHelper.CreateTextureFromFile(device, @"Resources\stone.dds", texture.GetAddressOf(), textureSrv.GetAddressOf())
    );

    // save texture
    SilkMarshal.ThrowHResult(
        TextureHelper.SaveWICTextureToFile(devCtx, texture, @"Resources\stone_out.jpeg", ContainerFormat.Jpeg)
    );

    textureSrv.Dispose();
    texture.Dispose();

    devCtx.Dispose();
    device.Dispose();

    Console.WriteLine("Done.");
}