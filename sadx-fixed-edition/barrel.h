#pragma once

#include <ninja.h>

NJS_MATERIAL matlist_000A075C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 62, (Uint32)(NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC) },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 68, (Uint32)(NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC) },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 68, (Uint32)(NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC) },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 10, (Uint32)(NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC) }
};

Sint16 poly_000A07AC[] = {
	6, 5, 4, 3, 6, 1, 2,
	4, 5, 3, 0, 1
};

Sint16 poly_000A07C4[] = {
	(Sint16)(0x8000u | 6), 9, 10, 8, 7, 12, 11,
	(Sint16)(0x8000u | 6), 15, 16, 14, 13, 18, 17,
	(Sint16)(0x8000u | 6), 23, 24, 19, 20, 22, 21
};

Sint16 poly_000A07EE[] = {
	(Sint16)(0x8000u | 12), 29, 25, 28, 26, 43, 42, 40, 39, 37, 36, 34, 33,
	6, 35, 30, 34, 29, 33, 25,
	(Sint16)(0x8000u | 12), 34, 35, 37, 38, 40, 41, 43, 44, 28, 31, 29, 30
};

Sint16 poly_000A0830[] = {
	5, 33, 25, 27, 26, 42,
	(Sint16)(0x8000u | 5), 38, 35, 32, 30, 31,
	5, 38, 41, 32, 44, 31,
	5, 42, 39, 27, 36, 33
};

NJS_TEX uv_000A0860[] = {
	{ 123, 117 },
	{ 83, 7 },
	{ 182, 117 },
	{ 247, 117 },
	{ 83, 254 },
	{ 167, 254 },
	{ 123, 117 },
	{ 182, 117 },
	{ 0, 254 },
	{ 83, 254 }
};

NJS_TEX uv_000A0888[] = {
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 183 },
	{ 0, 183 },
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 183 },
	{ 0, 183 },
	{ 247, 7 },
	{ 0, 7 },
	{ 0, 7 },
	{ 247, 7 },
	{ 0, 183 },
	{ 247, 183 },
	{ 0, 255 },
	{ 247, 255 }
};

NJS_TEX uv_000A08D0[] = {
	{ 1275, 0 },
	{ 1275, -255 },
	{ 1020, 0 },
	{ 1020, -255 },
	{ 765, 0 },
	{ 765, -255 },
	{ 510, 0 },
	{ 510, -255 },
	{ 255, 0 },
	{ 255, -255 },
	{ 0, 0 },
	{ 0, -255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0, 0 },
	{ 255, -255 },
	{ 0, -255 },
	{ 0, 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1275, 0 },
	{ 1275, 255 }
};

NJS_TEX uv_000A0948[] = {
	{ 251, 255 },
	{ 0, 255 },
	{ 129, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 251, 255 },
	{ 129, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 255 },
	{ 129, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 255 },
	{ 129, 3 },
	{ 0, 255 },
	{ 251, 255 }
};

NJS_MESHSET_SADX meshlist_000A0998[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000A07AC, nullptr, nullptr, nullptr, uv_000A0860, nullptr },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_000A07EE, nullptr, nullptr, nullptr, uv_000A08D0, nullptr },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_000A0830, nullptr, nullptr, nullptr, uv_000A0948, nullptr },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_000A07C4, nullptr, nullptr, nullptr, uv_000A0888, nullptr }
};

NJS_VECTOR vertex_000A09F8[] = {
	{ -0.08485299f, 6, 0 },
	{ 0, 6, -0.108814f },
	{ 0.08485299f, 6, 0 },
	{ 0.09999999f, 6.5f, -0.012872f },
	{ 0, 6.9f, -0.08485299f },
	{ 0.040679f, 6.5f, 0.071981f },
	{ 0.165704f, 6.5f, 0.071981f },
	{ -1.227904f, 3, -2.210041f },
	{ -2.527903f, 3, 0.041625f },
	{ -2.42009f, 2.25f, 0.103871f },
	{ -1.120091f, 2.25f, -2.147796f },
	{ -0.963975f, 4.85f, -2.057662f },
	{ -2.263974f, 4.85f, 0.194004f },
	{ 2.527904f, 3, 0.041625f },
	{ 1.227903f, 3, -2.210041f },
	{ 1.120091f, 2.25f, -2.147795f },
	{ 2.420091f, 2.25f, 0.10387f },
	{ 2.263975f, 4.85f, 0.194004f },
	{ 0.963974f, 4.85f, -2.057661f },
	{ -1.3f, 3, 2.168416f },
	{ 1.299999f, 3, 2.168416f },
	{ 1.299999f, 2.25f, 2.043924f },
	{ -1.3f, 2.25f, 2.043925f },
	{ -1.3f, 4.85f, 1.863657f },
	{ 1.299999f, 4.85f, 1.863657f },
	{ 0.9625f, 0, -1.667099f },
	{ 1.925f, 0, 0 },
	{ 0.0f, 0.0f, 0.0f },
	{ 2.5f, 3, 0 },
	{ 1.25f, 3, -2.165064f },
	{ 0.9625f, 6, -1.667099f },
	{ 1.925f, 6, 0 },
	{ 0, 6, 0 },
	{ -0.9625f, 0, -1.667099f },
	{ -1.25f, 3, -2.165063f },
	{ -0.9625f, 6, -1.667099f },
	{ -1.925f, 0, 0 },
	{ -2.5f, 3, 0 },
	{ -1.925f, 6, 0 },
	{ -0.9625f, 0, 1.667099f },
	{ -1.25f, 3, 2.165064f },
	{ -0.9625f, 6, 1.667099f },
	{ 0.9625f, 0, 1.667099f },
	{ 1.250001f, 3, 2.165063f },
	{ 0.9625f, 6, 1.667099f }
};

NJS_VECTOR normal_000A0C14[] = {
	{ -0.770938f, 0.276177f, -0.573918f },
	{ -0.09334499f, 0.215738f, -0.971979f },
	{ 0.788862f, -0.040097f, -0.613261f },
	{ 0.107209f, 0.017134f, -0.9940889f },
	{ -0.044136f, -0.187612f, -0.9812509f },
	{ -0.8099779f, 0.01815f, -0.58618f },
	{ 0.789914f, 0.015622f, -0.613018f },
	{ -0.866026f, -0.00061f, -0.5f },
	{ -0.866026f, -0.00061f, -0.5f },
	{ -0.854336f, -0.163748f, -0.493251f },
	{ -0.854336f, -0.163748f, -0.493251f },
	{ -0.854509f, 0.162544f, -0.49335f },
	{ -0.854509f, 0.162544f, -0.49335f },
	{ 0.866025f, -0.00061f, -0.5f },
	{ 0.866025f, -0.00061f, -0.5f },
	{ 0.854336f, -0.163748f, -0.493251f },
	{ 0.854336f, -0.163748f, -0.493251f },
	{ 0.854508f, 0.162544f, -0.493351f },
	{ 0.854508f, 0.162544f, -0.493351f },
	{ 0, -0.00061f, 1 },
	{ 0, -0.00061f, 1 },
	{ 0, -0.163748f, 0.986502f },
	{ 0, -0.163748f, 0.986502f },
	{ 0, 0.162544f, 0.986701f },
	{ 0, 0.162544f, 0.986701f },
	{ 0.366533f, -0.6801569f, -0.634854f },
	{ 0.733066f, -0.6801569f, 0 },
	{ 0, -1, 0 },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866026f },
	{ 0.366533f, 0.6801569f, -0.634854f },
	{ 0.733066f, 0.6801569f, 0 },
	{ 0, 1, 0 },
	{ -0.366533f, -0.6801569f, -0.634854f },
	{ -0.5f, 0, -0.866025f },
	{ -0.366533f, 0.6801569f, -0.634854f },
	{ -0.733066f, -0.6801569f, 0 },
	{ -1, 0, 0 },
	{ -0.733066f, 0.6801569f, 0 },
	{ -0.366533f, -0.6801569f, 0.634854f },
	{ -0.5f, 0, 0.866026f },
	{ -0.366533f, 0.6801569f, 0.634854f },
	{ 0.366533f, -0.6801569f, 0.634854f },
	{ 0.5f, 0, 0.866025f },
	{ 0.366533f, 0.6801569f, 0.634854f }
};

NJS_MODEL_SADX attach_000A0E30 = {
	vertex_000A09F8,
	normal_000A0C14,
	LengthOfArray<Sint32>(vertex_000A09F8),
	meshlist_000A0998,
	matlist_000A075C,
	LengthOfArray<Uint16>(meshlist_000A0998),
	LengthOfArray<Uint16>(matlist_000A075C),
	{ 0, 3.45f, -0.020813f },
	4.085979f,
	nullptr
};

NJS_OBJECT object_000A0E58 = {
	NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK,
	&attach_000A0E30,
	{ 0, 0, 0 },
	{ 0, 0, 0 },
	{ 1, 1, 1 },
	nullptr,
	nullptr
};
