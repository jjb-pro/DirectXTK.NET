# DirectXTK.NET

DirectXTK.NET is a .NET wrapper for the DirectX Tool Kit, built using C++/CLI for Silk.NET and DirectX 11. 

## Features

Currently only methods are wrapped that allow you to quickly load textures for your Silk.NET DirectX 11 project: 
- **Texture Creation with WICTextureLoader**: Load textures from files and obtain shader resource views.
- **Texture Creation with DDSTextureLoader**: Load textures from \*.dds files and obtain shader resource views.
- **Texture Saving**: Save textures to DDS or WIC formats.

## Usage

To use DirectXTK.NET, follow these steps:

1. **Download**: Download the latest version: [Releases](https://github.com/jjb-pro/DirectXTK.NET/releases/) (there is no NuGet package).
2. **Add Reference**: Add a reference to the DirectXTK.NET assembly in your .NET project.
3. **Initialize DirectX**: Create and initialize DirectX 11 device and context using Silk.NET.
4. **Texture Operations**: Use the `WICTextureHelper` class to create and save textures or utilize the `DDSTextureHelper` class for \*.dds texture loading.

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