/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --font D:\99.PersonalProj\LVGL_SquareLine\LCDDisplayBD230330\assets\ChosunGu.TTF -o D:\99.PersonalProj\LVGL_SquareLine\LCDDisplayBD230330\assets\ui_font_chosungu20.c --format lvgl -r 0x20-0x7f -r 0xc9c0 -r 0xc18d -r 0xc801 -r 0xc778 -r 0xac10 -r 0xc2dc -r 0xb97c -r 0xd1b5 -r 0xd574 -r 0xbaa8 -r 0xd130 -r 0xc758 -r 0xc0c1 -r 0xd0dc -r 0xc640 -r 0xbcc0 -r 0xd654 -r 0xb4f1 -r 0xc744 -r 0xd655 -r 0xb85c -r 0xadf8 -r 0xd615 -r 0xbb38 -r 0xc81c -r 0xac04 -r 0xbcc4 -r 0xae30 -r 0xb85d -r 0xbcf8 -r 0xc801 -r 0xc778 -r 0xd658 -r 0xacbd -r 0xc124 -r 0xc815 -r 0xc11c -r 0xbc84 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_CHOSUNGU20
#define UI_FONT_CHOSUNGU20 1
#endif

#if UI_FONT_CHOSUNGU20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xaa, 0xaa, 0xaa, 0x80, 0xf0,

    /* U+0022 "\"" */
    0xbb, 0x99, 0x9a,

    /* U+0023 "#" */
    0x8, 0x81, 0x10, 0x22, 0x4, 0x47, 0xfe, 0x32,
    0x4, 0x40, 0x88, 0x11, 0x1f, 0xf8, 0xc8, 0x11,
    0x2, 0x20, 0x44, 0x0,

    /* U+0024 "$" */
    0x10, 0x4, 0x81, 0xe0, 0xce, 0x52, 0x94, 0x85,
    0x20, 0xc8, 0x1a, 0x5, 0x81, 0x38, 0x4b, 0x92,
    0x64, 0x9d, 0x2d, 0xce, 0x3f, 0x4, 0x81, 0x20,

    /* U+0025 "%" */
    0x0, 0x11, 0xe0, 0x4c, 0xc2, 0x21, 0x18, 0x84,
    0x43, 0x33, 0x7, 0x88, 0x0, 0x40, 0x3, 0x0,
    0x9, 0xe0, 0x6c, 0xc1, 0x21, 0x8, 0x84, 0x62,
    0x11, 0xc, 0xcc, 0x1e, 0x20, 0x0,

    /* U+0026 "&" */
    0xe, 0x1, 0x98, 0x8, 0x40, 0x42, 0x2, 0x30,
    0x1b, 0x0, 0x70, 0x7, 0x0, 0x48, 0x64, 0x22,
    0x21, 0x91, 0x5, 0x88, 0x18, 0xa1, 0xe4, 0xf1,
    0xc0,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x32, 0x24, 0x44, 0x88, 0x88, 0x88, 0x84, 0x44,
    0x22, 0x30,

    /* U+0029 ")" */
    0xc4, 0x42, 0x22, 0x11, 0x11, 0x11, 0x12, 0x22,
    0x44, 0xc0,

    /* U+002A "*" */
    0x8, 0x24, 0x3a, 0xe3, 0xc3, 0xe7, 0x5d, 0x20,
    0x10,

    /* U+002B "+" */
    0x8, 0x4, 0x2, 0x1, 0xf, 0xf8, 0x40, 0x20,
    0x10, 0x8, 0x4, 0x0,

    /* U+002C "," */
    0xf5, 0x80,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x1, 0x3, 0x2, 0x2, 0x4, 0x4, 0xc, 0x8,
    0x8, 0x18, 0x10, 0x10, 0x20, 0x20, 0x60, 0x40,
    0x40,

    /* U+0030 "0" */
    0x3c, 0x62, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x42, 0x66, 0x3c,

    /* U+0031 "1" */
    0x8, 0xcf, 0x90, 0x84, 0x21, 0x8, 0x42, 0x10,
    0x84, 0x20,

    /* U+0032 "2" */
    0x3c, 0x62, 0xc1, 0xc1, 0x81, 0x3, 0x6, 0xc,
    0x18, 0x20, 0x40, 0xc0, 0x80, 0x80, 0xff,

    /* U+0033 "3" */
    0x78, 0xc4, 0x82, 0x82, 0x2, 0x4, 0x3c, 0x6,
    0x3, 0x1, 0x1, 0x81, 0x83, 0xc2, 0x3c,

    /* U+0034 "4" */
    0x2, 0x3, 0x1, 0x81, 0x41, 0xa0, 0x90, 0xc8,
    0x44, 0x42, 0x61, 0x3f, 0xe0, 0x40, 0x20, 0x10,
    0x8,

    /* U+0035 "5" */
    0x7f, 0x40, 0x40, 0x40, 0x7c, 0x62, 0x43, 0x1,
    0x1, 0x1, 0x1, 0x81, 0xc3, 0x62, 0x3c,

    /* U+0036 "6" */
    0x3c, 0x62, 0x43, 0x81, 0x80, 0xbc, 0xc2, 0xc3,
    0x81, 0x81, 0x81, 0x81, 0xc3, 0x62, 0x3c,

    /* U+0037 "7" */
    0xff, 0x2, 0x6, 0x4, 0x4, 0xc, 0x8, 0x18,
    0x18, 0x10, 0x10, 0x30, 0x30, 0x30, 0x20,

    /* U+0038 "8" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0xc2, 0x7c, 0x42,
    0xc3, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x42, 0x83, 0x81, 0x81, 0x81, 0x81, 0x43,
    0x3d, 0x1, 0x1, 0x81, 0xc2, 0x46, 0x3c,

    /* U+003A ":" */
    0xf0, 0x0, 0xf0,

    /* U+003B ";" */
    0xf0, 0x3, 0xd6,

    /* U+003C "<" */
    0x4, 0x20, 0x84, 0x10, 0x82, 0x10, 0x42, 0x4,
    0x10, 0x20, 0x81, 0x4, 0x8, 0x20, 0x40,

    /* U+003D "=" */
    0xff, 0x0, 0x0, 0x0, 0xff,

    /* U+003E ">" */
    0xc1, 0x6, 0x8, 0x30, 0x41, 0x82, 0xc, 0x10,
    0x82, 0x18, 0x43, 0x8, 0x61, 0xc, 0x0,

    /* U+003F "?" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x3, 0x2, 0x4,
    0x8, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0,
    0x30, 0x30,

    /* U+0040 "@" */
    0x7, 0xe0, 0x30, 0x60, 0x9e, 0xa2, 0x67, 0x24,
    0x84, 0x52, 0x8, 0xa4, 0x11, 0x48, 0x22, 0x90,
    0xc9, 0x33, 0x32, 0x3f, 0x82, 0x0, 0x12, 0x0,
    0x43, 0x3, 0x1, 0xf8, 0x0,

    /* U+0041 "A" */
    0x6, 0x1, 0xc0, 0x28, 0x5, 0x81, 0x90, 0x22,
    0x4, 0x21, 0x4, 0x20, 0x87, 0xf9, 0x1, 0x20,
    0x24, 0x3, 0x0, 0x60, 0x8,

    /* U+0042 "B" */
    0xfc, 0x41, 0x20, 0x50, 0x28, 0x14, 0x13, 0xf9,
    0x6, 0x81, 0xc0, 0x60, 0x30, 0x18, 0x1c, 0x1b,
    0xf8,

    /* U+0043 "C" */
    0x1e, 0x18, 0x64, 0xb, 0x2, 0x80, 0x20, 0x8,
    0x2, 0x0, 0x80, 0x20, 0x8, 0xf, 0x2, 0x40,
    0x88, 0x61, 0xe0,

    /* U+0044 "D" */
    0xfe, 0x20, 0xc8, 0xa, 0x2, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x60, 0x18, 0x6, 0x2, 0x80,
    0xa0, 0xcf, 0xe0,

    /* U+0045 "E" */
    0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0xfe, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff,

    /* U+0046 "F" */
    0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0xfe, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,

    /* U+0047 "G" */
    0x1f, 0xc, 0x64, 0xd, 0x1, 0x80, 0x20, 0x8,
    0x2, 0x1f, 0x80, 0x60, 0x18, 0x5, 0x1, 0x40,
    0xcc, 0x71, 0xf4,

    /* U+0048 "H" */
    0x80, 0x60, 0x18, 0x6, 0x1, 0x80, 0x60, 0x1f,
    0xfe, 0x1, 0x80, 0x60, 0x18, 0x6, 0x1, 0x80,
    0x60, 0x18, 0x4,

    /* U+0049 "I" */
    0xff, 0xfe,

    /* U+004A "J" */
    0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1,
    0x1, 0x1, 0x81, 0xc1, 0x41, 0x62, 0x3c,

    /* U+004B "K" */
    0x81, 0xc1, 0xa1, 0x91, 0x88, 0x84, 0x82, 0x81,
    0xa0, 0x88, 0x46, 0x21, 0x10, 0x48, 0x34, 0xe,
    0x2, 0x1,

    /* U+004C "L" */
    0x80, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2, 0x1,
    0x0, 0x80, 0x40, 0x20, 0x10, 0x8, 0x4, 0x3,
    0xfe,

    /* U+004D "M" */
    0x80, 0x1c, 0x3, 0xc0, 0x3c, 0x3, 0xe0, 0x7a,
    0x5, 0xa0, 0x59, 0x9, 0x90, 0x99, 0x99, 0x89,
    0x18, 0x91, 0x86, 0x18, 0x61, 0x86, 0x10,

    /* U+004E "N" */
    0x80, 0xe0, 0x70, 0x3c, 0x1b, 0xc, 0x86, 0x63,
    0x11, 0x8c, 0xc2, 0x61, 0xb0, 0x58, 0x1c, 0xe,
    0x2,

    /* U+004F "O" */
    0x1f, 0x6, 0x31, 0x1, 0x20, 0x28, 0x3, 0x0,
    0x60, 0xc, 0x1, 0x80, 0x30, 0x6, 0x0, 0xa0,
    0x24, 0x4, 0x63, 0x7, 0xc0,

    /* U+0050 "P" */
    0xfe, 0x40, 0xa0, 0x30, 0x18, 0xc, 0x6, 0x5,
    0xfc, 0x80, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2,
    0x0,

    /* U+0051 "Q" */
    0x1f, 0x6, 0x31, 0x1, 0x20, 0x28, 0x3, 0x0,
    0x60, 0xc, 0x1, 0x80, 0x30, 0x6, 0x8, 0xa0,
    0xa4, 0xc, 0x63, 0x87, 0xd8, 0x1,

    /* U+0052 "R" */
    0xfe, 0x40, 0xa0, 0x30, 0x18, 0xc, 0x6, 0x5,
    0xfe, 0x84, 0x43, 0x20, 0x90, 0x68, 0x14, 0xe,
    0x2,

    /* U+0053 "S" */
    0x3c, 0x21, 0x20, 0xd0, 0x28, 0x3, 0x0, 0xe0,
    0x1c, 0x3, 0x0, 0xe0, 0x30, 0x1c, 0xb, 0x8,
    0xf8,

    /* U+0054 "T" */
    0xff, 0xe0, 0x80, 0x10, 0x2, 0x0, 0x40, 0x8,
    0x1, 0x0, 0x20, 0x4, 0x0, 0x80, 0x10, 0x2,
    0x0, 0x40, 0x8, 0x1, 0x0,

    /* U+0055 "U" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x1c, 0x1b, 0x18,
    0xf8,

    /* U+0056 "V" */
    0xc0, 0x28, 0x5, 0x1, 0xb0, 0x22, 0x4, 0x41,
    0x8c, 0x20, 0x84, 0x11, 0x82, 0x20, 0x24, 0x4,
    0x80, 0xa0, 0xc, 0x1, 0x80,

    /* U+0057 "W" */
    0x1, 0x1, 0x82, 0xd, 0x6, 0x1a, 0x1c, 0x24,
    0x28, 0x4c, 0x51, 0x88, 0xa3, 0x11, 0x64, 0x26,
    0xc8, 0x68, 0x90, 0x51, 0x60, 0xa2, 0x81, 0x45,
    0x3, 0x8e, 0x2, 0xc, 0x4, 0x10,

    /* U+0058 "X" */
    0x40, 0x2c, 0xc, 0x83, 0x18, 0x41, 0x18, 0x12,
    0x3, 0xc0, 0x30, 0x6, 0x1, 0xe0, 0x24, 0xc,
    0xc3, 0x8, 0x41, 0x98, 0x1a, 0x1, 0x0, 0x20,

    /* U+0059 "Y" */
    0xc0, 0x68, 0x9, 0x83, 0x10, 0x43, 0x18, 0x22,
    0x2, 0xc0, 0x50, 0x4, 0x0, 0x80, 0x10, 0x2,
    0x0, 0x40, 0x8, 0x1, 0x0, 0x20,

    /* U+005A "Z" */
    0xff, 0x80, 0xc0, 0x40, 0x60, 0x60, 0x20, 0x30,
    0x10, 0x18, 0x18, 0x8, 0xc, 0x4, 0x4, 0x3,
    0xfe,

    /* U+005B "[" */
    0xf8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0xf0,

    /* U+005C "\\" */
    0x41, 0x82, 0x61, 0x82, 0x61, 0x82, 0x21, 0x86,
    0xff, 0xff, 0x33, 0x44, 0x12, 0x4c, 0xff, 0xff,
    0x12, 0x68, 0x1a, 0x28, 0xc, 0x38, 0xc, 0x38,
    0xc, 0x30, 0xc, 0x30, 0xc, 0x10,

    /* U+005D "]" */
    0xf1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0xf0,

    /* U+005E "^" */
    0x18, 0x3c, 0x24, 0x42,

    /* U+005F "_" */
    0xff, 0x80,

    /* U+0060 "`" */
    0x43, 0xc, 0x20,

    /* U+0061 "a" */
    0x3e, 0x31, 0x90, 0x40, 0x20, 0x71, 0xc9, 0x84,
    0x82, 0xc1, 0x23, 0x8f, 0x20,

    /* U+0062 "b" */
    0x80, 0x80, 0x80, 0x80, 0xbc, 0xc2, 0xc2, 0x81,
    0x81, 0x81, 0x81, 0x81, 0xc2, 0xc2, 0xbc,

    /* U+0063 "c" */
    0x3c, 0x62, 0xc3, 0x80, 0x80, 0x80, 0x80, 0x81,
    0x43, 0x62, 0x3c,

    /* U+0064 "d" */
    0x1, 0x1, 0x1, 0x1, 0x3d, 0x43, 0x43, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x43, 0x43, 0x3d,

    /* U+0065 "e" */
    0x3c, 0x42, 0x41, 0x81, 0xff, 0x80, 0x80, 0xc0,
    0x41, 0x63, 0x3e,

    /* U+0066 "f" */
    0x3c, 0x82, 0x8, 0xfc, 0x82, 0x8, 0x20, 0x82,
    0x8, 0x20, 0x82, 0x0,

    /* U+0067 "g" */
    0x3f, 0x46, 0x42, 0x42, 0x42, 0x44, 0x38, 0x40,
    0x7e, 0x43, 0x81, 0x81, 0xc3, 0x7e,

    /* U+0068 "h" */
    0x80, 0x80, 0x80, 0x80, 0x9e, 0xe3, 0xc1, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,

    /* U+0069 "i" */
    0xf0, 0xaa, 0xaa, 0xa8,

    /* U+006A "j" */
    0x33, 0x0, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
    0x2c,

    /* U+006B "k" */
    0x81, 0x2, 0x4, 0x8, 0x71, 0xa6, 0x58, 0xe1,
    0xe2, 0x64, 0x48, 0xd0, 0xe0, 0x80,

    /* U+006C "l" */
    0xe4, 0x92, 0x49, 0x24, 0x92, 0x48,

    /* U+006D "m" */
    0xb9, 0xd8, 0xc6, 0x10, 0xc2, 0x18, 0x43, 0x8,
    0x61, 0xc, 0x21, 0x84, 0x30, 0x86, 0x10, 0x80,

    /* U+006E "n" */
    0x9e, 0xe3, 0xc1, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81,

    /* U+006F "o" */
    0x3e, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x41, 0x31, 0x8f, 0x80,

    /* U+0070 "p" */
    0xbc, 0xe6, 0xc2, 0x81, 0x81, 0x81, 0x81, 0x81,
    0xc2, 0xc6, 0xbc, 0x80, 0x80, 0x80,

    /* U+0071 "q" */
    0x3d, 0x63, 0x43, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x43, 0x63, 0x3d, 0x1, 0x1, 0x1,

    /* U+0072 "r" */
    0xbf, 0x31, 0x8, 0x42, 0x10, 0x84, 0x20,

    /* U+0073 "s" */
    0x79, 0x8a, 0x1c, 0x6, 0x7, 0x1, 0xc1, 0x83,
    0x8d, 0xf0,

    /* U+0074 "t" */
    0x20, 0x82, 0x8, 0xfc, 0x82, 0x8, 0x20, 0x82,
    0x8, 0x20, 0x83, 0xc0,

    /* U+0075 "u" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x83, 0xc7, 0x7d,

    /* U+0076 "v" */
    0xc1, 0x20, 0x90, 0x4c, 0x62, 0x21, 0x10, 0xd8,
    0x28, 0x14, 0xe, 0x2, 0x0,

    /* U+0077 "w" */
    0xc2, 0xa, 0x18, 0x50, 0xc6, 0x8a, 0x26, 0x51,
    0x12, 0x48, 0xb2, 0xc7, 0x14, 0x18, 0xe0, 0xc3,
    0x6, 0x10,

    /* U+0078 "x" */
    0x41, 0xb0, 0x88, 0x82, 0xc1, 0xc0, 0x40, 0x70,
    0x2c, 0x22, 0x30, 0x90, 0x60, 0x10,

    /* U+0079 "y" */
    0x82, 0x82, 0xc2, 0x44, 0x44, 0x6c, 0x28, 0x28,
    0x18, 0x10, 0x30, 0x20, 0x20, 0x60,

    /* U+007A "z" */
    0xfe, 0xc, 0x10, 0x41, 0x82, 0xc, 0x30, 0x41,
    0x83, 0xf8,

    /* U+007B "{" */
    0x19, 0x88, 0x42, 0x10, 0x84, 0x26, 0x30, 0x42,
    0x10, 0x84, 0x21, 0xc, 0x30,

    /* U+007C "|" */
    0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xc3, 0x8, 0x42, 0x10, 0x84, 0x20, 0xc6, 0x42,
    0x10, 0x84, 0x21, 0x9, 0x80,

    /* U+007E "~" */
    0x38, 0x33, 0x30, 0x38,

    /* U+007F "" */
    0x0,

    /* U+AC04 "간" */
    0x7f, 0x84, 0x0, 0x42, 0x0, 0x21, 0x0, 0x10,
    0x80, 0x18, 0x40, 0x8, 0x3c, 0xc, 0x10, 0x18,
    0x8, 0x38, 0x4, 0x70, 0x2, 0x0, 0x1, 0x0,
    0x0, 0x82, 0x0, 0x41, 0x0, 0x0, 0x80, 0x0,
    0x40, 0x0, 0x20, 0x0, 0x1f, 0xff, 0x0,

    /* U+AC10 "감" */
    0x7f, 0x84, 0x0, 0x42, 0x0, 0x21, 0x0, 0x10,
    0x80, 0x18, 0x78, 0x18, 0x20, 0x38, 0x10, 0x70,
    0x8, 0xe0, 0x4, 0x0, 0x2, 0x0, 0x0, 0x7,
    0xff, 0x82, 0x0, 0x41, 0x0, 0x20, 0x80, 0x10,
    0x40, 0x8, 0x20, 0x4, 0x1f, 0xfe, 0x0,

    /* U+ACBD "경" */
    0x7f, 0x82, 0x1, 0x4, 0x2, 0xf8, 0x4, 0x10,
    0x18, 0x20, 0x60, 0x41, 0x8f, 0x9c, 0x1, 0xe0,
    0x2, 0x0, 0x4, 0x0, 0x8, 0x3f, 0xc1, 0x80,
    0xe4, 0x0, 0x48, 0x0, 0x90, 0x1, 0x18, 0xe,
    0xf, 0xf0,

    /* U+ADF8 "그" */
    0x7f, 0xfc, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4,
    0x0, 0x4, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4,
    0x0, 0x4, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4,
    0x0, 0x4, 0x0, 0x4, 0x0, 0xc, 0x0, 0x8,
    0xff, 0xff,

    /* U+AE30 "기" */
    0xff, 0x84, 0x2, 0x10, 0x8, 0x40, 0x21, 0x0,
    0x84, 0x2, 0x10, 0x8, 0x40, 0x41, 0x1, 0x4,
    0xc, 0x10, 0x60, 0x43, 0x1, 0x18, 0x4, 0xc0,
    0x1c, 0x0, 0x40, 0x1, 0x0, 0x4, 0x0, 0x10,

    /* U+B4F1 "등" */
    0x3f, 0xfc, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0,
    0x20, 0x0, 0x3f, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0xf, 0xf0,
    0x30, 0xc, 0x20, 0x6, 0x60, 0x6, 0x20, 0x6,
    0x30, 0xc, 0xf, 0xf0,

    /* U+B85C "로" */
    0x3f, 0xfc, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4,
    0x0, 0x4, 0x3f, 0xfc, 0x20, 0x0, 0x20, 0x0,
    0x20, 0x0, 0x20, 0x0, 0x3f, 0xfe, 0x0, 0x0,
    0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80,
    0xff, 0xff,

    /* U+B85D "록" */
    0x3f, 0xfc, 0x0, 0x4, 0x0, 0x4, 0x3f, 0xfc,
    0x20, 0x0, 0x20, 0x0, 0x3f, 0xfe, 0x1, 0x80,
    0x1, 0x80, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xfc, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4,
    0x0, 0x4, 0x0, 0x4,

    /* U+B97C "를" */
    0x3f, 0xfc, 0x0, 0x4, 0x0, 0x4, 0x3f, 0xfc,
    0x20, 0x0, 0x20, 0x0, 0x3f, 0xfe, 0x0, 0x0,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xfc,
    0x0, 0x4, 0x0, 0x4, 0x3f, 0xfc, 0x20, 0x0,
    0x20, 0x0, 0x3f, 0xfe,

    /* U+BAA8 "모" */
    0x3f, 0xfc, 0x20, 0x4, 0x20, 0x4, 0x20, 0x4,
    0x20, 0x4, 0x20, 0x4, 0x20, 0x4, 0x20, 0x4,
    0x20, 0x4, 0x3f, 0xfc, 0x0, 0x0, 0x1, 0x0,
    0x1, 0x80, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80,
    0xff, 0xff,

    /* U+BB38 "문" */
    0x3f, 0xfc, 0x20, 0x4, 0x20, 0x4, 0x20, 0x4,
    0x20, 0x4, 0x20, 0x4, 0x3f, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0x1, 0x80, 0x1, 0x80,
    0x21, 0x80, 0x21, 0x80, 0x20, 0x80, 0x20, 0x0,
    0x20, 0x0, 0x3f, 0xfe,

    /* U+BC84 "버" */
    0x81, 0x6, 0x4, 0x18, 0x10, 0x60, 0x41, 0x81,
    0x6, 0x4, 0x1f, 0xf0, 0x60, 0x5f, 0x81, 0x6,
    0x4, 0x18, 0x10, 0x60, 0x41, 0x81, 0x6, 0x4,
    0x1f, 0xf0, 0x40, 0x1, 0x0, 0x4, 0x0, 0x10,

    /* U+BCC0 "변" */
    0x81, 0x5, 0x2, 0xa, 0x4, 0x14, 0x9, 0xef,
    0xf0, 0x50, 0x20, 0xa0, 0x41, 0x40, 0xbe, 0x81,
    0x5, 0xfe, 0x8, 0x0, 0x10, 0x0, 0x24, 0x0,
    0x48, 0x0, 0x90, 0x0, 0x20, 0x0, 0x60, 0x0,
    0x7f, 0xfc,

    /* U+BCC4 "별" */
    0x81, 0x5, 0x2, 0xa, 0x4, 0xf7, 0xf8, 0x28,
    0x10, 0x50, 0x20, 0xa0, 0x4f, 0x40, 0x82, 0xff,
    0x4, 0x0, 0x8, 0x0, 0x3, 0xff, 0xe0, 0x0,
    0x47, 0xff, 0x88, 0x0, 0x10, 0x0, 0x20, 0x0,
    0x7f, 0xfc,

    /* U+BCF8 "본" */
    0x20, 0x4, 0x20, 0x4, 0x20, 0x4, 0x3f, 0xfc,
    0x20, 0x4, 0x20, 0x4, 0x3f, 0xfc, 0x1, 0x80,
    0x1, 0x80, 0x1, 0x80, 0xff, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0,
    0x20, 0x0, 0x3f, 0xfe,

    /* U+C0C1 "상" */
    0x8, 0x4, 0x4, 0x2, 0x2, 0x1, 0x3, 0x0,
    0x81, 0x40, 0x79, 0x90, 0x20, 0x84, 0x10, 0x83,
    0x8, 0xc0, 0xc4, 0x40, 0x22, 0x0, 0x1, 0x1,
    0xfe, 0x1, 0x80, 0xc1, 0x0, 0x20, 0x80, 0x10,
    0x40, 0x8, 0x18, 0xc, 0x7, 0xf8, 0x0,

    /* U+C11C "서" */
    0x8, 0x4, 0x20, 0x10, 0x80, 0x42, 0x1, 0x8,
    0x4, 0x60, 0x11, 0xc7, 0xc5, 0x1, 0x16, 0x4,
    0xc8, 0x12, 0x10, 0x48, 0x61, 0x40, 0x85, 0x3,
    0x18, 0xc, 0x60, 0x11, 0x0, 0x4, 0x0, 0x10,

    /* U+C124 "설" */
    0x8, 0x2, 0x10, 0x4, 0x20, 0x8, 0xe1, 0xf1,
    0x20, 0x26, 0x20, 0x58, 0x60, 0xa0, 0x61, 0x80,
    0x42, 0x0, 0x4, 0xff, 0xf8, 0x0, 0x10, 0x0,
    0x23, 0xff, 0xc4, 0x0, 0x8, 0x0, 0x10, 0x0,
    0x3f, 0xfc,

    /* U+C18D "속" */
    0x1, 0x80, 0x1, 0x80, 0x3, 0xc0, 0x6, 0x60,
    0x1c, 0x3c, 0x70, 0x6, 0x1, 0x80, 0x1, 0x80,
    0x1, 0x80, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xfc, 0x0, 0x4, 0x0, 0x4, 0x0, 0x4,
    0x0, 0x4, 0x0, 0x4,

    /* U+C2DC "시" */
    0x4, 0x2, 0x8, 0x4, 0x30, 0x8, 0x60, 0x10,
    0x80, 0x21, 0x0, 0x43, 0x0, 0x87, 0x1, 0x1a,
    0x2, 0x22, 0x4, 0x46, 0x9, 0x84, 0x12, 0xc,
    0x2c, 0x8, 0x50, 0x18, 0xe0, 0x11, 0x0, 0x2,
    0x0, 0x4,

    /* U+C640 "와" */
    0xf, 0x4, 0x18, 0x62, 0x8, 0x11, 0x8, 0x4,
    0x84, 0x2, 0x42, 0x1, 0x21, 0x0, 0x90, 0x40,
    0x88, 0x30, 0xc7, 0x87, 0x82, 0x0, 0x1, 0x0,
    0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x51,
    0xff, 0xc8, 0x0, 0x4, 0x0, 0x2, 0x0,

    /* U+C744 "을" */
    0xf, 0xf0, 0x30, 0xc, 0x20, 0x6, 0x20, 0x6,
    0x30, 0xc, 0xf, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0x0, 0x0, 0x7f, 0xfc, 0x0, 0x4,
    0x0, 0x4, 0x3f, 0xfc, 0x20, 0x0, 0x20, 0x0,
    0x20, 0x0, 0x3f, 0xfe,

    /* U+C758 "의" */
    0x1e, 0x5, 0x86, 0x14, 0x8, 0x60, 0x11, 0x80,
    0x46, 0x1, 0x18, 0x4, 0x50, 0x21, 0x61, 0x84,
    0x78, 0x10, 0x0, 0x40, 0x1, 0x0, 0x4, 0x0,
    0x10, 0x1, 0x7f, 0xf9, 0x0, 0x4, 0x0, 0x10,

    /* U+C778 "인" */
    0x3e, 0x5, 0x8c, 0x14, 0x10, 0x60, 0x21, 0x80,
    0x86, 0x2, 0x18, 0x8, 0x50, 0x41, 0x63, 0x4,
    0xf8, 0x10, 0x0, 0x40, 0x1, 0x20, 0x4, 0x80,
    0x2, 0x0, 0x8, 0x0, 0x20, 0x0, 0xff, 0xf0,

    /* U+C801 "적" */
    0x7f, 0xe2, 0xc, 0x4, 0x18, 0x8, 0x30, 0x10,
    0x63, 0xe1, 0xe0, 0x42, 0x60, 0x88, 0x61, 0x60,
    0x62, 0x80, 0x44, 0x0, 0x9, 0xff, 0xf0, 0x0,
    0x20, 0x0, 0x40, 0x0, 0x80, 0x1, 0x0, 0x2,
    0x0, 0x4,

    /* U+C815 "정" */
    0xff, 0xc4, 0x30, 0x10, 0xc0, 0x43, 0x1, 0xc,
    0x7c, 0x38, 0x11, 0x30, 0x4c, 0x61, 0xe0, 0xc6,
    0x1, 0x10, 0x0, 0x43, 0xfc, 0x38, 0x1c, 0x80,
    0x16, 0x0, 0x48, 0x1, 0x38, 0x1c, 0x3f, 0xc0,

    /* U+C81C "제" */
    0x7f, 0x91, 0x8, 0x11, 0x8, 0x11, 0x8, 0x11,
    0x8, 0x11, 0xc, 0x11, 0xc, 0x11, 0xc, 0xf1,
    0xc, 0x11, 0xc, 0x11, 0x1e, 0x11, 0x12, 0x11,
    0x33, 0x11, 0x21, 0x11, 0x61, 0x91, 0x40, 0x91,
    0x0, 0x11, 0x0, 0x1,

    /* U+C9C0 "지" */
    0x7f, 0xe2, 0xc, 0x4, 0x18, 0x8, 0x30, 0x10,
    0x60, 0x20, 0xc0, 0x41, 0x80, 0x83, 0x1, 0xf,
    0x2, 0x12, 0x4, 0x66, 0x8, 0x84, 0x13, 0xc,
    0x2c, 0xc, 0x50, 0xc, 0x80, 0x1, 0x0, 0x2,
    0x0, 0x4,

    /* U+D0DC "태" */
    0xfe, 0x46, 0x1, 0x18, 0x4, 0x60, 0x11, 0x80,
    0x46, 0x1, 0x18, 0x4, 0x7f, 0x11, 0x80, 0x7e,
    0x1, 0x18, 0x4, 0x60, 0x11, 0x80, 0x46, 0x1,
    0x18, 0x74, 0x7f, 0x11, 0x0, 0x44, 0x0, 0x10,

    /* U+D130 "터" */
    0xff, 0x86, 0x0, 0x18, 0x0, 0x60, 0x1, 0x80,
    0x6, 0x0, 0x18, 0x0, 0x7f, 0x9f, 0x80, 0x6,
    0x0, 0x18, 0x0, 0x60, 0x1, 0x80, 0x6, 0x0,
    0x18, 0x1c, 0x7f, 0xc1, 0x0, 0x4, 0x0, 0x10,

    /* U+D1B5 "통" */
    0x3f, 0xfe, 0x20, 0x0, 0x20, 0x0, 0x3f, 0xfc,
    0x20, 0x0, 0x20, 0x0, 0x3f, 0xfe, 0x1, 0x80,
    0x1, 0x80, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xf0, 0x30, 0xc, 0x20, 0x6, 0x20, 0x6,
    0x30, 0xc, 0xf, 0xf0,

    /* U+D574 "해" */
    0x3e, 0x22, 0x0, 0x44, 0x0, 0x88, 0x1, 0x1f,
    0xfa, 0x20, 0x4, 0x40, 0x8, 0x9f, 0x1f, 0x21,
    0x22, 0x82, 0x45, 0x6, 0x8a, 0xd, 0x14, 0x12,
    0x2c, 0x24, 0x48, 0xc8, 0x8f, 0x11, 0x0, 0x22,
    0x0, 0x4,

    /* U+D615 "형" */
    0x1f, 0x82, 0x0, 0x7, 0xff, 0x88, 0x0, 0x10,
    0x0, 0x23, 0xf3, 0xc8, 0x30, 0xb0, 0x21, 0x20,
    0x5e, 0x3f, 0x4, 0x0, 0x8, 0x7f, 0xd1, 0x80,
    0xe6, 0x0, 0x48, 0x0, 0x98, 0x1, 0x18, 0xe,
    0xf, 0xf0,

    /* U+D654 "화" */
    0x1f, 0x84, 0x0, 0x2, 0x0, 0x1, 0x1f, 0xfc,
    0x80, 0x0, 0x40, 0x78, 0x20, 0xc3, 0x10, 0xc0,
    0x8f, 0x40, 0x44, 0x30, 0x22, 0xc, 0x31, 0x3,
    0xe0, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0xd1,
    0xff, 0xc8, 0x0, 0x4, 0x0, 0x2, 0x0,

    /* U+D655 "확" */
    0x1f, 0x4, 0x0, 0x2, 0x3f, 0xf9, 0x0, 0x0,
    0x83, 0xf8, 0x43, 0x2, 0x3d, 0x1, 0x10, 0x7f,
    0x88, 0x4, 0x4, 0x2, 0x2, 0x3f, 0xfd, 0x0,
    0x0, 0x87, 0xff, 0xc0, 0x0, 0x20, 0x0, 0x10,
    0x0, 0x8, 0x0, 0x4, 0x0, 0x2, 0x0,

    /* U+D658 "환" */
    0x1f, 0x4, 0x0, 0x2, 0x3f, 0xf9, 0x0, 0x0,
    0x80, 0xf0, 0x41, 0xfe, 0x21, 0x1, 0x1e, 0xc0,
    0x88, 0x3f, 0x84, 0x2, 0x2, 0x1, 0x1, 0x1f,
    0xfe, 0x80, 0x0, 0x41, 0x0, 0x20, 0x80, 0x0,
    0x40, 0x0, 0x20, 0x0, 0x1f, 0xff, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 96, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 122, .box_w = 2, .box_h = 18, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 6, .adv_w = 122, .box_w = 4, .box_h = 6, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 9, .adv_w = 211, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 29, .adv_w = 192, .box_w = 10, .box_h = 19, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 53, .adv_w = 262, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 83, .adv_w = 237, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 83, .box_w = 1, .box_h = 6, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 109, .adv_w = 128, .box_w = 4, .box_h = 19, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 119, .adv_w = 128, .box_w = 4, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 129, .adv_w = 179, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 138, .adv_w = 192, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 150, .adv_w = 83, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 152, .adv_w = 160, .box_w = 8, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 153, .adv_w = 83, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 134, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 171, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 154, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 154, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 128, .box_w = 2, .box_h = 10, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 321, .adv_w = 128, .box_w = 2, .box_h = 12, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 147, .box_w = 6, .box_h = 19, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 339, .adv_w = 192, .box_w = 8, .box_h = 5, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 344, .adv_w = 147, .box_w = 6, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 359, .adv_w = 166, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 377, .adv_w = 256, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 188, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 182, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 186, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 195, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 170, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 163, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 203, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 198, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 74, .box_w = 1, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 552, .adv_w = 155, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 182, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 585, .adv_w = 173, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 241, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 196, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 205, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 663, .adv_w = 179, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 205, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 702, .adv_w = 187, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 719, .adv_w = 173, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 736, .adv_w = 179, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 757, .adv_w = 196, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 774, .adv_w = 186, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 243, .box_w = 15, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 189, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 849, .adv_w = 182, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 871, .adv_w = 179, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 888, .adv_w = 128, .box_w = 4, .box_h = 19, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 898, .adv_w = 291, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 928, .adv_w = 128, .box_w = 4, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 938, .adv_w = 160, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 942, .adv_w = 146, .box_w = 9, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 944, .adv_w = 83, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 947, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 160, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 986, .adv_w = 160, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 156, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 109, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1024, .adv_w = 157, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1038, .adv_w = 163, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1053, .adv_w = 63, .box_w = 2, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1057, .adv_w = 83, .box_w = 4, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1066, .adv_w = 144, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1080, .adv_w = 67, .box_w = 3, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1086, .adv_w = 221, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1102, .adv_w = 163, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1113, .adv_w = 163, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1126, .adv_w = 160, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1140, .adv_w = 160, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1154, .adv_w = 102, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1161, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1171, .adv_w = 107, .box_w = 6, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1183, .adv_w = 163, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1194, .adv_w = 141, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1207, .adv_w = 218, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1225, .adv_w = 150, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1239, .adv_w = 143, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1253, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1263, .adv_w = 128, .box_w = 5, .box_h = 20, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1276, .adv_w = 128, .box_w = 1, .box_h = 20, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 1279, .adv_w = 128, .box_w = 5, .box_h = 20, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1292, .adv_w = 198, .box_w = 10, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1296, .adv_w = 320, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1297, .adv_w = 291, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1336, .adv_w = 291, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1375, .adv_w = 291, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1409, .adv_w = 291, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1443, .adv_w = 291, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1475, .adv_w = 291, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1511, .adv_w = 291, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1545, .adv_w = 291, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1581, .adv_w = 291, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1617, .adv_w = 291, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1651, .adv_w = 291, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1687, .adv_w = 291, .box_w = 14, .box_h = 18, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1719, .adv_w = 291, .box_w = 15, .box_h = 18, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1753, .adv_w = 291, .box_w = 15, .box_h = 18, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1787, .adv_w = 291, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1823, .adv_w = 291, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1862, .adv_w = 291, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1894, .adv_w = 291, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1928, .adv_w = 291, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1964, .adv_w = 291, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1998, .adv_w = 291, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2037, .adv_w = 291, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2073, .adv_w = 291, .box_w = 14, .box_h = 18, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2105, .adv_w = 291, .box_w = 14, .box_h = 18, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2137, .adv_w = 291, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2171, .adv_w = 291, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2203, .adv_w = 291, .box_w = 16, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2239, .adv_w = 291, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2273, .adv_w = 291, .box_w = 14, .box_h = 18, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2305, .adv_w = 291, .box_w = 14, .box_h = 18, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2337, .adv_w = 291, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2373, .adv_w = 291, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2407, .adv_w = 291, .box_w = 15, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2441, .adv_w = 291, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2480, .adv_w = 291, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2519, .adv_w = 291, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0xc, 0xb9, 0x1f4, 0x22c, 0x8ed, 0xc58, 0xc59,
    0xd78, 0xea4, 0xf34, 0x1080, 0x10bc, 0x10c0, 0x10f4, 0x14bd,
    0x1518, 0x1520, 0x1589, 0x16d8, 0x1a3c, 0x1b40, 0x1b54, 0x1b74,
    0x1bfd, 0x1c11, 0x1c18, 0x1dbc, 0x24d8, 0x252c, 0x25b1, 0x2970,
    0x2a11, 0x2a50, 0x2a51, 0x2a54
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 44036, .range_length = 10837, .glyph_id_start = 97,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 36, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_chosungu20 = {
#else
lv_font_t ui_font_chosungu20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 21,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_CHOSUNGU20*/

