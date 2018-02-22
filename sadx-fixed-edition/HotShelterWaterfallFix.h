#pragma once
#include <SADXModLoader.h>

static int WaterThing_VShift = 0;

DataPointer(int, FramerateSetting, 0x0389D7DC);
DataArray(NJS_TEX, uv_01410790, 0x01810790, 20); //water thing UVs 1
DataArray(NJS_TEX, uv_014107E0, 0x018107E0, 56); //water thing UVs 2

//Water thing UVs

NJS_TEX uv_01410790_0[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 254, -465 },
	{ 0, -457 },
	{ 254, -1168 },
	{ 0, -1159 },
	{ 254, -1521 },
	{ 0, -1516 },
	{ 255, -1785 },
	{ 0, -1785 },
	{ 255, -1785 },
	{ 0, -1785 },
	{ 254, -1521 },
	{ 0, -1516 },
	{ 255, -1168 },
	{ 0, -1159 },
	{ 255, -465 },
	{ 0, -457 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_014107E0_0[] = {
	{ 0, -633 },
	{ 0, -456 },
	{ 134, -628 },
	{ 136, -449 },
	{ 302, -630 },
	{ 302, -452 },
	{ 507, -628 },
	{ 507, -449 },
	{ 712, -630 },
	{ 712, -452 },
	{ 860, -628 },
	{ 857, -449 },
	{ 1020, -633 },
	{ 1020, -456 },
	{ 1020, -105 },
	{ 1020, -456 },
	{ 855, -99 },
	{ 857, -449 },
	{ 712, -101 },
	{ 712, -452 },
	{ 507, -99 },
	{ 507, -449 },
	{ 302, -101 },
	{ 302, -452 },
	{ 137, -99 },
	{ 136, -449 },
	{ 0, -105 },
	{ 0, -456 },
	{ 1020, -633 },
	{ 1020, -765 },
	{ 860, -628 },
	{ 865, -765 },
	{ 712, -630 },
	{ 712, -765 },
	{ 507, -628 },
	{ 507, -765 },
	{ 302, -630 },
	{ 303, -765 },
	{ 134, -628 },
	{ 131, -765 },
	{ 0, -633 },
	{ 0, -765 },
	{ 0, -105 },
	{ 0, 255 },
	{ 137, -99 },
	{ 140, 255 },
	{ 302, -101 },
	{ 303, 255 },
	{ 507, -99 },
	{ 507, 255 },
	{ 712, -101 },
	{ 711, 255 },
	{ 855, -99 },
	{ 853, 255 },
	{ 1020, -105 },
	{ 1020, 255 }
};
