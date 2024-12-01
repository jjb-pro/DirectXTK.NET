#pragma once

#include <wincodec.h>

using namespace System;

namespace DirectXTK
{
	public enum class ContainerFormat
	{
		Adng,
		Bmp,
		Dds,
		Gif,
		Heif,
		Ico,
		Jpeg,
		Png,
		Raw,
		Tiff,
		Webp,
		Wmp
	};

	public enum class PixelFormat
	{
		FormatDontCare,
		Format1bppIndexed,
		Format2bppIndexed,
		Format4bppIndexed,
		Format8bppIndexed,
		FormatBlackWhite,
		Format2bppGray,
		Format4bppGray,
		Format8bppGray,
		Format8bppAlpha,
		Format16bppBGR555,
		Format16bppBGR565,
		Format16bppBGRA5551,
		Format16bppGray,
		Format24bppBGR,
		Format24bppRGB,
		Format32bppBGR,
		Format32bppBGRA,
		Format32bppPBGRA,
		Format32bppGrayFloat,
		Format32bppRGB,
		Format32bppRGBA,
		Format32bppPRGBA,
		Format48bppRGB,
		Format48bppBGR,
		Format64bppRGB,
		Format64bppRGBA,
		Format64bppBGRA,
		Format64bppPRGBA,
		Format64bppPBGRA,
		Format16bppGrayFixedPoint,
		Format32bppBGR101010,
		Format48bppRGBFixedPoint,
		Format48bppBGRFixedPoint,
		Format96bppRGBFixedPoint,
		Format96bppRGBFloat,
		Format128bppRGBAFloat,
		Format128bppPRGBAFloat,
		Format128bppRGBFloat,
		Format32bppCMYK,
		Format64bppRGBAFixedPoint,
		Format64bppBGRAFixedPoint,
		Format64bppRGBFixedPoint,
		Format128bppRGBAFixedPoint,
		Format128bppRGBFixedPoint,
		Format64bppRGBAHalf,
		Format64bppPRGBAHalf,
		Format64bppRGBHalf,
		Format48bppRGBHalf,
		Format32bppRGBE,
		Format16bppGrayHalf,
		Format32bppGrayFixedPoint,
		Format32bppRGBA1010102,
		Format32bppRGBA1010102XR,
		Format32bppR10G10B10A2,
		Format32bppR10G10B10A2HDR10,
		Format64bppCMYK,
		Format24bpp3Channels,
		Format32bpp4Channels,
		Format40bpp5Channels,
		Format48bpp6Channels,
		Format56bpp7Channels,
		Format64bpp8Channels,
		Format48bpp3Channels,
		Format64bpp4Channels,
		Format80bpp5Channels,
		Format96bpp6Channels,
		Format112bpp7Channels,
		Format128bpp8Channels,
		Format40bppCMYKAlpha,
		Format80bppCMYKAlpha,
		Format32bpp3ChannelsAlpha,
		Format40bpp4ChannelsAlpha,
		Format48bpp5ChannelsAlpha,
		Format56bpp6ChannelsAlpha,
		Format64bpp7ChannelsAlpha,
		Format72bpp8ChannelsAlpha,
		Format64bpp3ChannelsAlpha,
		Format80bpp4ChannelsAlpha,
		Format96bpp5ChannelsAlpha,
		Format112bpp6ChannelsAlpha,
		Format128bpp7ChannelsAlpha,
		Format144bpp8ChannelsAlpha,
		Format8bppY,
		Format8bppCb,
		Format8bppCr,
		Format16bppCbCr,
		Format16bppYQuantizedDctCoefficients,
		Format16bppCbQuantizedDctCoefficients,
		Format16bppCrQuantizedDctCoefficients
	};

	GUID ToNative(ContainerFormat containerFormat)
	{
		switch (containerFormat)
		{
			case ContainerFormat::Adng: return GUID_ContainerFormatAdng;
			case ContainerFormat::Bmp: return GUID_ContainerFormatBmp;
			case ContainerFormat::Dds: return GUID_ContainerFormatDds;
			case ContainerFormat::Gif: return GUID_ContainerFormatGif;
			case ContainerFormat::Heif: return GUID_ContainerFormatHeif;
			case ContainerFormat::Ico: return GUID_ContainerFormatIco;
			case ContainerFormat::Jpeg: return GUID_ContainerFormatJpeg;
			case ContainerFormat::Png: return GUID_ContainerFormatPng;
			case ContainerFormat::Raw: return GUID_ContainerFormatRaw;
			case ContainerFormat::Tiff: return GUID_ContainerFormatTiff;
			case ContainerFormat::Webp: return GUID_ContainerFormatWebp;
			case ContainerFormat::Wmp: return GUID_ContainerFormatWmp;
			default: throw gcnew ArgumentOutOfRangeException("containerFormat");
		}
	}

	GUID ToNative(PixelFormat pixelFormat)
	{
		switch (pixelFormat)
		{
			case PixelFormat::FormatDontCare: return GUID_WICPixelFormatDontCare;
			case PixelFormat::Format1bppIndexed: return GUID_WICPixelFormat1bppIndexed;
			case PixelFormat::Format2bppIndexed: return GUID_WICPixelFormat2bppIndexed;
			case PixelFormat::Format4bppIndexed: return GUID_WICPixelFormat4bppIndexed;
			case PixelFormat::Format8bppIndexed: return GUID_WICPixelFormat8bppIndexed;
			case PixelFormat::FormatBlackWhite: return GUID_WICPixelFormatBlackWhite;
			case PixelFormat::Format2bppGray: return GUID_WICPixelFormat2bppGray;
			case PixelFormat::Format4bppGray: return GUID_WICPixelFormat4bppGray;
			case PixelFormat::Format8bppGray: return GUID_WICPixelFormat8bppGray;
			case PixelFormat::Format8bppAlpha: return GUID_WICPixelFormat8bppAlpha;
			case PixelFormat::Format16bppBGR555: return GUID_WICPixelFormat16bppBGR555;
			case PixelFormat::Format16bppBGR565: return GUID_WICPixelFormat16bppBGR565;
			case PixelFormat::Format16bppBGRA5551: return GUID_WICPixelFormat16bppBGRA5551;
			case PixelFormat::Format16bppGray: return GUID_WICPixelFormat16bppGray;
			case PixelFormat::Format24bppBGR: return GUID_WICPixelFormat24bppBGR;
			case PixelFormat::Format24bppRGB: return GUID_WICPixelFormat24bppRGB;
			case PixelFormat::Format32bppBGR: return GUID_WICPixelFormat32bppBGR;
			case PixelFormat::Format32bppBGRA: return GUID_WICPixelFormat32bppBGRA;
			case PixelFormat::Format32bppPBGRA: return GUID_WICPixelFormat32bppPBGRA;
			case PixelFormat::Format32bppGrayFloat: return GUID_WICPixelFormat32bppGrayFloat;
			case PixelFormat::Format32bppRGB: return GUID_WICPixelFormat32bppRGB;
			case PixelFormat::Format32bppRGBA: return GUID_WICPixelFormat32bppRGBA;
			case PixelFormat::Format32bppPRGBA: return GUID_WICPixelFormat32bppPRGBA;
			case PixelFormat::Format48bppRGB: return GUID_WICPixelFormat48bppRGB;
			case PixelFormat::Format48bppBGR: return GUID_WICPixelFormat48bppBGR;
			case PixelFormat::Format64bppRGB: return GUID_WICPixelFormat64bppRGB;
			case PixelFormat::Format64bppRGBA: return GUID_WICPixelFormat64bppRGBA;
			case PixelFormat::Format64bppBGRA: return GUID_WICPixelFormat64bppBGRA;
			case PixelFormat::Format64bppPRGBA: return GUID_WICPixelFormat64bppPRGBA;
			case PixelFormat::Format64bppPBGRA: return GUID_WICPixelFormat64bppPBGRA;
			case PixelFormat::Format16bppGrayFixedPoint: return GUID_WICPixelFormat16bppGrayFixedPoint;
			case PixelFormat::Format32bppBGR101010: return GUID_WICPixelFormat32bppBGR101010;
			case PixelFormat::Format48bppRGBFixedPoint: return GUID_WICPixelFormat48bppRGBFixedPoint;
			case PixelFormat::Format48bppBGRFixedPoint: return GUID_WICPixelFormat48bppBGRFixedPoint;
			case PixelFormat::Format96bppRGBFixedPoint: return GUID_WICPixelFormat96bppRGBFixedPoint;
			case PixelFormat::Format96bppRGBFloat: return GUID_WICPixelFormat96bppRGBFloat;
			case PixelFormat::Format128bppRGBAFloat: return GUID_WICPixelFormat128bppRGBAFloat;
			case PixelFormat::Format128bppPRGBAFloat: return GUID_WICPixelFormat128bppPRGBAFloat;
			case PixelFormat::Format128bppRGBFloat: return GUID_WICPixelFormat128bppRGBFloat;
			case PixelFormat::Format32bppCMYK: return GUID_WICPixelFormat32bppCMYK;
			case PixelFormat::Format64bppRGBAFixedPoint: return GUID_WICPixelFormat64bppRGBAFixedPoint;
			case PixelFormat::Format64bppBGRAFixedPoint: return GUID_WICPixelFormat64bppBGRAFixedPoint;
			case PixelFormat::Format64bppRGBFixedPoint: return GUID_WICPixelFormat64bppRGBFixedPoint;
			case PixelFormat::Format128bppRGBAFixedPoint: return GUID_WICPixelFormat128bppRGBAFixedPoint;
			case PixelFormat::Format128bppRGBFixedPoint: return GUID_WICPixelFormat128bppRGBFixedPoint;
			case PixelFormat::Format64bppRGBAHalf: return GUID_WICPixelFormat64bppRGBAHalf;
			case PixelFormat::Format64bppPRGBAHalf: return GUID_WICPixelFormat64bppPRGBAHalf;
			case PixelFormat::Format64bppRGBHalf: return GUID_WICPixelFormat64bppRGBHalf;
			case PixelFormat::Format48bppRGBHalf: return GUID_WICPixelFormat48bppRGBHalf;
			case PixelFormat::Format32bppRGBE: return GUID_WICPixelFormat32bppRGBE;
			case PixelFormat::Format16bppGrayHalf: return GUID_WICPixelFormat16bppGrayHalf;
			case PixelFormat::Format32bppGrayFixedPoint: return GUID_WICPixelFormat32bppGrayFixedPoint;
			case PixelFormat::Format32bppRGBA1010102: return GUID_WICPixelFormat32bppRGBA1010102;
			case PixelFormat::Format32bppRGBA1010102XR: return GUID_WICPixelFormat32bppRGBA1010102XR;
			case PixelFormat::Format32bppR10G10B10A2: return GUID_WICPixelFormat32bppR10G10B10A2;
			case PixelFormat::Format32bppR10G10B10A2HDR10: return GUID_WICPixelFormat32bppR10G10B10A2HDR10;
			case PixelFormat::Format64bppCMYK: return GUID_WICPixelFormat64bppCMYK;
			case PixelFormat::Format24bpp3Channels: return GUID_WICPixelFormat24bpp3Channels;
			case PixelFormat::Format32bpp4Channels: return GUID_WICPixelFormat32bpp4Channels;
			case PixelFormat::Format40bpp5Channels: return GUID_WICPixelFormat40bpp5Channels;
			case PixelFormat::Format48bpp6Channels: return GUID_WICPixelFormat48bpp6Channels;
			case PixelFormat::Format56bpp7Channels: return GUID_WICPixelFormat56bpp7Channels;
			case PixelFormat::Format64bpp8Channels: return GUID_WICPixelFormat64bpp8Channels;
			case PixelFormat::Format48bpp3Channels: return GUID_WICPixelFormat48bpp3Channels;
			case PixelFormat::Format64bpp4Channels: return GUID_WICPixelFormat64bpp4Channels;
			case PixelFormat::Format80bpp5Channels: return GUID_WICPixelFormat80bpp5Channels;
			case PixelFormat::Format96bpp6Channels: return GUID_WICPixelFormat96bpp6Channels;
			case PixelFormat::Format112bpp7Channels: return GUID_WICPixelFormat112bpp7Channels;
			case PixelFormat::Format128bpp8Channels: return GUID_WICPixelFormat128bpp8Channels;
			case PixelFormat::Format40bppCMYKAlpha: return GUID_WICPixelFormat40bppCMYKAlpha;
			case PixelFormat::Format80bppCMYKAlpha: return GUID_WICPixelFormat80bppCMYKAlpha;
			case PixelFormat::Format32bpp3ChannelsAlpha: return GUID_WICPixelFormat32bpp3ChannelsAlpha;
			case PixelFormat::Format40bpp4ChannelsAlpha: return GUID_WICPixelFormat40bpp4ChannelsAlpha;
			case PixelFormat::Format48bpp5ChannelsAlpha: return GUID_WICPixelFormat48bpp5ChannelsAlpha;
			case PixelFormat::Format56bpp6ChannelsAlpha: return GUID_WICPixelFormat56bpp6ChannelsAlpha;
			case PixelFormat::Format64bpp7ChannelsAlpha: return GUID_WICPixelFormat64bpp7ChannelsAlpha;
			case PixelFormat::Format72bpp8ChannelsAlpha: return GUID_WICPixelFormat72bpp8ChannelsAlpha;
			case PixelFormat::Format64bpp3ChannelsAlpha: return GUID_WICPixelFormat64bpp3ChannelsAlpha;
			case PixelFormat::Format80bpp4ChannelsAlpha: return GUID_WICPixelFormat80bpp4ChannelsAlpha;
			case PixelFormat::Format96bpp5ChannelsAlpha: return GUID_WICPixelFormat96bpp5ChannelsAlpha;
			case PixelFormat::Format112bpp6ChannelsAlpha: return GUID_WICPixelFormat112bpp6ChannelsAlpha;
			case PixelFormat::Format128bpp7ChannelsAlpha: return GUID_WICPixelFormat128bpp7ChannelsAlpha;
			case PixelFormat::Format144bpp8ChannelsAlpha: return GUID_WICPixelFormat144bpp8ChannelsAlpha;
			case PixelFormat::Format8bppY: return GUID_WICPixelFormat8bppY;
			case PixelFormat::Format8bppCb: return GUID_WICPixelFormat8bppCb;
			case PixelFormat::Format8bppCr: return GUID_WICPixelFormat8bppCr;
			case PixelFormat::Format16bppCbCr: return GUID_WICPixelFormat16bppCbCr;
			case PixelFormat::Format16bppYQuantizedDctCoefficients: return GUID_WICPixelFormat16bppYQuantizedDctCoefficients;
			case PixelFormat::Format16bppCbQuantizedDctCoefficients: return GUID_WICPixelFormat16bppCbQuantizedDctCoefficients;
			case PixelFormat::Format16bppCrQuantizedDctCoefficients: return GUID_WICPixelFormat16bppCrQuantizedDctCoefficients;
			default: throw gcnew ArgumentOutOfRangeException("pixelFormat");
		}
	}
}