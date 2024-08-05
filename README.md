# DirectXTK.NET

DirectXTK.NET is a .NET wrapper for the DirectX Tool Kit, built using C++/CLI for Silk.NET and DirectX 11. 

## Features
Currently only three methods are wrapped that allow you to quickly load textures for your Silk.NET DirectX 11 project: 
- **Texture Creation**: Load textures from files and obtain shader resource views.
- **Texture Saving**: Save textures to DDS or WIC formats.

## Usage

To use DirectXTK.NET, follow these steps:

1. **Download**: Download the latest version: [Releases]() (there is no NuGet package).
1. **Add Reference**: Add a reference to the DirectXTK.NET assembly in your .NET project.
2. **Initialize DirectX**: Create and initialize DirectX 11 device and context using Silk.NET.
3. **Texture Operations**: Use the `TextureHelper` class to create and save textures.

## Example

A simple example that shows how to create and save a texture with DirectXTK.NET:

```csharp
TextureHelper.CreateTextureFromFile(device, @"Resources\stone.dds", texture.GetAddressOf(), textureSrv.GetAddressOf());
```

```csharp
TextureHelper.SaveWICTextureToFile(devCtx, texture, @"Resources\stone_out.png", ContainerFormat.Png, PixelFormat.Format32bppBGRA, true);
```

The sample can also be found in the repository under **DirectXTKSample**. 

## Development

### Feature requests are welcome!

If you have specific feature requests or need additional methods, feel free to open an issue.