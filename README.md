![blue DirectXTK icon](https://github.com/jjb-pro/DirectXTK.NET/DirectXTK.NET/assets/icon.png)
# DirectXTK.NET

[![NuGet](https://img.shields.io/nuget/v/DirectXTK.NET.svg)](https://www.nuget.org/packages/DirectXTK.NET)

DirectXTK.NET is a .NET wrapper for the DirectX Tool Kit, built using C++/CLI for Silk.NET and DirectX 11. 

## Features

Currently only methods are wrapped that allow you to quickly load textures for your Silk.NET DirectX 11 project: 
- **Texture Creation with WICTextureLoader**: Load textures from files and obtain shader resource views.
- **Texture Creation with DDSTextureLoader**: Load textures from \*.dds files and obtain shader resource views.
- **Texture Saving**: Save textures to DDS or WIC formats.

## Usage

To use DirectXTK.NET, follow these steps:

1. **Install via NuGet**: Add the package to your project using the .NET CLI:
   ```bash
   dotnet add package DirectXTK.NET
   ```
   Or, search for `DirectXTK.NET` in the NuGet Package Manager in Visual Studio.
2. **Initialize DirectX**: Create and initialize a DirectX 11 device and context using Silk.NET.
4. **Use the package**: Use the `WICTextureHelper` class to create and save textures or the `DDSTextureHelper` class to load `.dds` textures.

## Example

A simple example that shows how to create and save a texture with DirectXTK.NET:

#### Loading with WICTextureHelper:
```csharp
WICTextureHelper.CreateTextureFromFile(device, @"Resources\stone.dds", texture.GetAddressOf(), textureSrv.GetAddressOf());
```

#### Loading with DDSTextureHelper: 
```csharp
DDSTextureHelper.CreateDDSTextureFromFile(device, devCtx, @"Resources\sky.dds", 0, Usage.Immutable, (uint)BindFlag.ShaderResource, 0, ResourceMiscFlag.Texturecube, DDSLoaderFlag.Default, texture.GetAddressOf(), textureSrv.GetAddressOf(), DDSAlphaMode.Unknown);
```

#### Saving with WICTextureHelper:
```csharp
WICTextureHelper.SaveWICTextureToFile(devCtx, texture, @"Resources\stone_out.png", ContainerFormat.Png, PixelFormat.Format32bppBGRA, true);
```

The sample can also be found in the repository under **DirectXTKSample**. 

## Development

### Feature requests are welcome!

If you have specific feature requests or need additional methods, feel free to open an issue.