/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:\Users\sgy00\Documents\SquareLine\DisplayBD_g2\assets\malgunbd.ttf -o C:\Users\sgy00\Documents\SquareLine\DisplayBD_g2\assets\ui_font_malgum16.c --format lvgl -r 0x20-0x7f -r 0xc11c -r 0xbc84 -r 0xc9c4 -r 0xb3d9 -r 0xc18c -r 0xc74c -r 0xc804 -r 0xb958 -r 0xc628 -r 0xb3c4 -r 0xc8fc -r 0xd3ec -r 0xd2b8 -r 0xc13c -r 0xbcf4 -r 0xb4dc -r 0xd3ec -r 0xd2b8 --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_MALGUM16
#define UI_FONT_MALGUM16 1
#endif

#if UI_FONT_MALGUM16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xf,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+0023 "#" */
    0x19, 0xc, 0x86, 0xcf, 0xf7, 0xf8, 0x90, 0xc9,
    0xff, 0xff, 0x93, 0x9, 0xc, 0x80,

    /* U+0024 "$" */
    0x10, 0x21, 0xf7, 0xed, 0x1a, 0x3c, 0x3c, 0x1c,
    0x3c, 0x5c, 0xbf, 0xef, 0x4, 0x0,

    /* U+0025 "%" */
    0x78, 0x67, 0xe2, 0x33, 0x21, 0x9b, 0xf, 0xd0,
    0x3d, 0x78, 0x1f, 0xe0, 0xb3, 0xd, 0x98, 0x4c,
    0xc4, 0x66, 0x61, 0xe0,

    /* U+0026 "&" */
    0x3e, 0x3, 0xf8, 0x18, 0xc0, 0xc6, 0x63, 0x63,
    0x1e, 0x19, 0x9d, 0xd8, 0x7c, 0xc1, 0xc7, 0x1e,
    0x1f, 0xfe, 0x7c, 0xf0,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x32, 0x66, 0xcc, 0xcc, 0xcc, 0xc6, 0x62, 0x30,

    /* U+0029 ")" */
    0xcc, 0x66, 0x33, 0x33, 0x33, 0x36, 0x6c, 0xc0,

    /* U+002A "*" */
    0x20, 0x8f, 0xcc, 0x53, 0x60,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0x6d, 0x60,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x6, 0xc, 0x30, 0x61, 0x83, 0x6, 0x18, 0x30,
    0x61, 0x83, 0xc, 0x18, 0x30, 0x0,

    /* U+0030 "0" */
    0x3c, 0x7e, 0x67, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xe6, 0x7e, 0x3c,

    /* U+0031 "1" */
    0x9, 0xf3, 0xe0, 0xc1, 0x83, 0x6, 0xc, 0x18,
    0x30, 0x67, 0xff, 0xe0,

    /* U+0032 "2" */
    0x7c, 0xff, 0x18, 0x30, 0x61, 0x83, 0xc, 0x30,
    0xc3, 0xff, 0xf0,

    /* U+0033 "3" */
    0x7c, 0xfc, 0x18, 0x33, 0xc7, 0x83, 0x83, 0x7,
    0x1f, 0xf3, 0xc0,

    /* U+0034 "4" */
    0xe, 0x7, 0x7, 0x86, 0xc3, 0x63, 0x33, 0x19,
    0xff, 0xff, 0x83, 0x1, 0x80, 0xc0,

    /* U+0035 "5" */
    0x7f, 0x7f, 0x60, 0x60, 0x7c, 0x7e, 0x7, 0x3,
    0x3, 0x87, 0xfe, 0x7c,

    /* U+0036 "6" */
    0x1e, 0x3e, 0x60, 0xe0, 0xdc, 0xfe, 0xe7, 0xc3,
    0xc3, 0xe7, 0x7e, 0x3c,

    /* U+0037 "7" */
    0xff, 0xff, 0x6, 0x6, 0x6, 0xc, 0xc, 0x18,
    0x18, 0x38, 0x30, 0x30,

    /* U+0038 "8" */
    0x3c, 0xff, 0xc3, 0xc3, 0xe7, 0x3c, 0x66, 0xc3,
    0xc3, 0xe7, 0xfe, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xff, 0x7b, 0x3,
    0x7, 0x6, 0x7c, 0x78,

    /* U+003A ":" */
    0xf0, 0x3, 0xc0,

    /* U+003B ";" */
    0x6c, 0x0, 0x1a, 0x48,

    /* U+003C "<" */
    0x3, 0xe, 0x38, 0xe0, 0xe0, 0x38, 0xf, 0x3,

    /* U+003D "=" */
    0xff, 0xff, 0x0, 0xff, 0xff,

    /* U+003E ">" */
    0xc0, 0xf0, 0x3c, 0xf, 0xf, 0x3c, 0xf0, 0x80,

    /* U+003F "?" */
    0x7d, 0xfe, 0x18, 0x30, 0xe3, 0x8e, 0x18, 0x30,
    0x0, 0xe1, 0xc0,

    /* U+0040 "@" */
    0x7, 0xc0, 0x7f, 0xc3, 0x83, 0x9d, 0xf6, 0x6f,
    0xcf, 0x73, 0x3d, 0x8c, 0xf6, 0x33, 0xd8, 0xcf,
    0x67, 0x6f, 0xff, 0x9b, 0x9c, 0x78, 0x0, 0xff,
    0x80, 0xfc, 0x0,

    /* U+0041 "A" */
    0xe, 0x1, 0xc0, 0x6c, 0xd, 0x81, 0xb8, 0x63,
    0xc, 0x61, 0xfe, 0x7f, 0xcc, 0x19, 0x83, 0xf0,
    0x30,

    /* U+0042 "B" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc7, 0xfc, 0xfe, 0xc3,
    0xc3, 0xc7, 0xfe, 0xfc,

    /* U+0043 "C" */
    0xf, 0x9f, 0xdc, 0xc, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xe0, 0x38, 0x4f, 0xe3, 0xf0,

    /* U+0044 "D" */
    0xfe, 0x3f, 0xcc, 0x3b, 0x7, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc1, 0xf0, 0xef, 0xf3, 0xf0,

    /* U+0045 "E" */
    0xff, 0xff, 0x6, 0xc, 0x1f, 0xbf, 0x60, 0xc1,
    0x83, 0xff, 0xf0,

    /* U+0046 "F" */
    0xff, 0xff, 0x6, 0xc, 0x1f, 0xbf, 0x60, 0xc1,
    0x83, 0x6, 0x0,

    /* U+0047 "G" */
    0xf, 0x8f, 0xf7, 0x7, 0x80, 0xc0, 0x31, 0xfc,
    0x7f, 0x3, 0xe0, 0xdc, 0x33, 0xfc, 0x7e,

    /* U+0048 "H" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1f, 0xff, 0xff,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x30,

    /* U+0049 "I" */
    0xff, 0x66, 0x66, 0x66, 0x66, 0xff,

    /* U+004A "J" */
    0x18, 0xc6, 0x31, 0x8c, 0x63, 0x19, 0xfd, 0xc0,

    /* U+004B "K" */
    0xc7, 0x63, 0x33, 0x9b, 0x8d, 0x87, 0x83, 0xe1,
    0xb8, 0xcc, 0x67, 0x31, 0xd8, 0x70,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0xff, 0xf0,

    /* U+004D "M" */
    0xe0, 0x3f, 0x83, 0xfc, 0x1f, 0xf0, 0xfd, 0x8d,
    0xec, 0x6f, 0x32, 0x79, 0xb3, 0xcd, 0x9e, 0x38,
    0xf1, 0xc7, 0x8e, 0x30,

    /* U+004E "N" */
    0xe0, 0xf8, 0x3f, 0xf, 0xe3, 0xd8, 0xf3, 0x3c,
    0xcf, 0x1b, 0xc3, 0xf0, 0xfc, 0x1f, 0x7,

    /* U+004F "O" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xe0, 0xee, 0x38, 0xfe, 0xf,
    0x80,

    /* U+0050 "P" */
    0xfc, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe, 0xfc,
    0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x1f, 0x3, 0xf8, 0x71, 0xce, 0xe, 0xc0, 0x6c,
    0x6, 0xc0, 0x6c, 0x6, 0xe0, 0xe7, 0x1c, 0x3f,
    0x81, 0xf0, 0x3, 0x80, 0x1f, 0x0, 0xf0,

    /* U+0052 "R" */
    0xfe, 0x7f, 0xb0, 0xd8, 0x6c, 0x77, 0xf3, 0xf1,
    0x9c, 0xc7, 0x63, 0xb0, 0xf8, 0x30,

    /* U+0053 "S" */
    0x3e, 0xff, 0xe, 0xe, 0xf, 0xf, 0x7, 0x7,
    0xf, 0xff, 0xc0,

    /* U+0054 "T" */
    0xff, 0xff, 0xc6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x3, 0x0,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xf1, 0xdf, 0xc7, 0xc0,

    /* U+0056 "V" */
    0xe0, 0xcc, 0x19, 0x83, 0x38, 0xc3, 0x18, 0x63,
    0xc, 0xc0, 0xd8, 0x1b, 0x3, 0xc0, 0x38, 0x7,
    0x0,

    /* U+0057 "W" */
    0xc3, 0x87, 0x87, 0xf, 0x8e, 0x3f, 0x16, 0x66,
    0x6c, 0xcc, 0xd9, 0x99, 0xb3, 0x1e, 0x3c, 0x3c,
    0x78, 0x78, 0xf0, 0xf1, 0xe0, 0xc1, 0x80,

    /* U+0058 "X" */
    0x61, 0xdc, 0x63, 0x38, 0xec, 0x1f, 0x3, 0x81,
    0xe0, 0x7c, 0x3b, 0xc, 0xe7, 0x1b, 0x87,

    /* U+0059 "Y" */
    0x61, 0xdc, 0x63, 0x38, 0xcc, 0x3f, 0x7, 0x81,
    0xe0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+005A "Z" */
    0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xe0, 0x60, 0x60,
    0x70, 0x70, 0x30, 0x3f, 0xff, 0xf0,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xff,

    /* U+005C "\\" */
    0x43, 0x13, 0x39, 0x99, 0xcc, 0xca, 0x66, 0x53,
    0x7f, 0xff, 0xff, 0xe7, 0xb4, 0x3d, 0xe1, 0xc7,
    0xe, 0x38, 0x31, 0x80,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xff,

    /* U+005E "^" */
    0x10, 0x18, 0x38, 0x2c, 0x64, 0x46, 0xc6, 0xc3,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0xc6, 0x60,

    /* U+0061 "a" */
    0x3c, 0xfc, 0x18, 0x37, 0xf8, 0xf3, 0xff, 0x76,

    /* U+0062 "b" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xdc, 0xfe, 0xe7, 0xc3,
    0xc3, 0xc3, 0xe7, 0xfe, 0xdc,

    /* U+0063 "c" */
    0x3e, 0xff, 0x8e, 0xc, 0x18, 0x38, 0xbf, 0x3c,

    /* U+0064 "d" */
    0x3, 0x3, 0x3, 0x3, 0x3b, 0x7f, 0xe7, 0xc3,
    0xc3, 0xc3, 0xe7, 0x7f, 0x3b,

    /* U+0065 "e" */
    0x3c, 0x7e, 0xc3, 0xff, 0xff, 0xc0, 0xe0, 0x7e,
    0x3e,

    /* U+0066 "f" */
    0x3d, 0xf6, 0x18, 0xfb, 0xe6, 0x18, 0x61, 0x86,
    0x18, 0x60,

    /* U+0067 "g" */
    0x3b, 0x7f, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7f,
    0x3b, 0x3, 0x7, 0x7e, 0x7c,

    /* U+0068 "h" */
    0xc1, 0x83, 0x6, 0xd, 0xdf, 0xf9, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x60,

    /* U+0069 "i" */
    0xf0, 0xff, 0xff, 0xc0,

    /* U+006A "j" */
    0x33, 0x0, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3e,
    0xe0,

    /* U+006B "k" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xce, 0xcc, 0xdc, 0xf8,
    0xf0, 0xd8, 0xdc, 0xce, 0xc6,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+006D "m" */
    0xdc, 0xef, 0xff, 0xe7, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x30,

    /* U+006E "n" */
    0xde, 0xff, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3,

    /* U+006F "o" */
    0x3e, 0x3f, 0xb8, 0xf8, 0x3c, 0x1e, 0xf, 0x8e,
    0xfe, 0x3e, 0x0,

    /* U+0070 "p" */
    0xdc, 0xfe, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0xfe,
    0xdc, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0071 "q" */
    0x3b, 0x7f, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7f,
    0x3b, 0x3, 0x3, 0x3, 0x3,

    /* U+0072 "r" */
    0xdf, 0xf9, 0x8c, 0x63, 0x18, 0xc0,

    /* U+0073 "s" */
    0x7f, 0xfc, 0x38, 0x78, 0x70, 0xff, 0xf8,

    /* U+0074 "t" */
    0x3, 0x19, 0xff, 0xb1, 0x8c, 0x63, 0x1e, 0x70,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe7, 0xff,
    0x7b,

    /* U+0076 "v" */
    0xe3, 0x31, 0x98, 0xcc, 0xc3, 0x61, 0xb0, 0xf0,
    0x38, 0x1c, 0x0,

    /* U+0077 "w" */
    0xc7, 0x33, 0x39, 0x99, 0xcc, 0xca, 0x66, 0xda,
    0x1e, 0xf0, 0xe7, 0x87, 0x1c, 0x38, 0xc0,

    /* U+0078 "x" */
    0x63, 0x33, 0x8d, 0x87, 0x81, 0xc1, 0xe0, 0xd8,
    0xce, 0xe3, 0x0,

    /* U+0079 "y" */
    0xc3, 0xc3, 0x66, 0x66, 0x66, 0x3c, 0x3c, 0x3c,
    0x18, 0x18, 0x30, 0xf0, 0xe0,

    /* U+007A "z" */
    0xff, 0xfc, 0x30, 0xc3, 0x86, 0x18, 0x7f, 0xfe,

    /* U+007B "{" */
    0x37, 0x66, 0x66, 0x6c, 0xc6, 0x66, 0x66, 0x73,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xe7, 0x8c, 0x63, 0x18, 0xc3, 0x19, 0x8c, 0x63,
    0x1b, 0xdc,

    /* U+007E "~" */
    0x71, 0xff, 0xf1, 0xc0,

    /* U+B3C4 "도" */
    0x3f, 0xf0, 0xc0, 0x3, 0x0, 0xc, 0x0, 0x30,
    0x0, 0xc0, 0x3, 0xff, 0x0, 0xc0, 0x3, 0x0,
    0xc, 0xf, 0xff, 0xc0,

    /* U+B3D9 "동" */
    0x3f, 0xf0, 0xc0, 0x3, 0x0, 0xc, 0x0, 0x3f,
    0xf0, 0xc, 0xf, 0xff, 0xff, 0xff, 0x0, 0x0,
    0x3f, 0x3, 0x87, 0xc, 0xc, 0x38, 0x70, 0x3f,
    0x0,

    /* U+B4DC "드" */
    0x3f, 0xf0, 0xc0, 0x3, 0x0, 0xc, 0x0, 0x30,
    0x0, 0xc0, 0x3, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xc0,

    /* U+B958 "류" */
    0x3f, 0xf0, 0x0, 0xc0, 0x3, 0xf, 0xfc, 0x30,
    0x0, 0xff, 0xc3, 0xff, 0x0, 0x0, 0xff, 0xfc,
    0x61, 0x81, 0x86, 0x6, 0x18, 0x18, 0x60, 0x61,
    0x80,

    /* U+BC84 "버" */
    0x0, 0x3c, 0x33, 0xc3, 0x3c, 0x33, 0xff, 0x3f,
    0xff, 0xc3, 0xfc, 0x33, 0xc3, 0x3f, 0xf3, 0xff,
    0x30, 0x3, 0x0, 0x30, 0x3, 0x0, 0x30,

    /* U+BCF4 "보" */
    0x30, 0x30, 0xc0, 0xc3, 0xff, 0xc, 0xc, 0x30,
    0x30, 0xc0, 0xc3, 0xff, 0x0, 0xc0, 0x3, 0x0,
    0xc, 0xf, 0xff, 0xc0,

    /* U+C11C "서" */
    0x0, 0x18, 0x60, 0xc3, 0x6, 0x18, 0x30, 0xc1,
    0x86, 0x7c, 0x78, 0x63, 0xc3, 0x33, 0x1b, 0x9c,
    0xf8, 0x66, 0x80, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60,

    /* U+C13C "센" */
    0x0, 0xd8, 0xc6, 0xc6, 0x36, 0x37, 0xb1, 0xbd,
    0x9e, 0x6c, 0xf3, 0x7c, 0xfb, 0xc2, 0xd8, 0xc6,
    0xc6, 0x6, 0x30, 0x1, 0x80, 0xf, 0xfc,

    /* U+C18C "소" */
    0x3, 0x0, 0xc, 0x0, 0x78, 0x3, 0xf0, 0x1c,
    0xe1, 0xe1, 0xe6, 0x1, 0x80, 0xc0, 0x3, 0x0,
    0xc, 0xf, 0xff, 0xc0,

    /* U+C628 "온" */
    0xf, 0xc0, 0x61, 0x83, 0x3, 0xc, 0xc, 0x30,
    0x30, 0x7f, 0x80, 0xf8, 0x0, 0xc0, 0xff, 0xfc,
    0x0, 0x3, 0x0, 0xc, 0x0, 0x30, 0x0, 0xff,
    0xc0,

    /* U+C74C "음" */
    0xf, 0xc0, 0xe1, 0xc3, 0x3, 0xe, 0x1c, 0xf,
    0xc0, 0x0, 0xf, 0xff, 0xff, 0xff, 0x0, 0x0,
    0xff, 0xc3, 0x3, 0xc, 0xc, 0x30, 0x30, 0xff,
    0xc0,

    /* U+C804 "전" */
    0x0, 0x1b, 0xfc, 0xdf, 0xe6, 0x18, 0x30, 0xcf,
    0x8f, 0xc, 0x7c, 0x6e, 0x7b, 0x61, 0x98, 0x0,
    0xc6, 0x6, 0x30, 0x1, 0x80, 0xf, 0xfc,

    /* U+C8FC "주" */
    0x3f, 0xf0, 0xc, 0x0, 0x78, 0x3, 0x70, 0xf8,
    0x7d, 0x80, 0x60, 0x0, 0x3f, 0xff, 0x3, 0x0,
    0xc, 0x0, 0x30, 0x0, 0xc0, 0x3, 0x0, 0xc,
    0x0,

    /* U+C9C4 "진" */
    0x0, 0x1b, 0xfc, 0xdf, 0xe6, 0x18, 0x30, 0xc1,
    0x8f, 0xc, 0x7c, 0x6e, 0x7b, 0x60, 0x98, 0x0,
    0xc6, 0x6, 0x30, 0x1, 0x80, 0xf, 0xfc,

    /* U+D2B8 "트" */
    0x3f, 0xf0, 0xc0, 0x3, 0x0, 0xf, 0xfc, 0x30,
    0x0, 0xc0, 0x3, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xc0,

    /* U+D3EC "포" */
    0x7f, 0xf8, 0x0, 0x1, 0x86, 0x6, 0x18, 0x18,
    0x60, 0x61, 0x87, 0xff, 0x80, 0xc0, 0x3, 0x0,
    0xc, 0xf, 0xff, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 90, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 83, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 122, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 7, .adv_w = 156, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 148, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 35, .adv_w = 224, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 219, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 72, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 76, .adv_w = 92, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 84, .adv_w = 92, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 92, .adv_w = 117, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 97, .adv_w = 184, .box_w = 8, .box_h = 8, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 105, .adv_w = 67, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 107, .adv_w = 106, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 108, .adv_w = 67, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 112, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 123, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 148, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 148, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 148, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 148, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 67, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 67, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 250, .adv_w = 184, .box_w = 8, .box_h = 8, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 258, .adv_w = 184, .box_w = 8, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 263, .adv_w = 184, .box_w = 8, .box_h = 8, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 271, .adv_w = 116, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 251, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 309, .adv_w = 180, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 163, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 164, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 191, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 138, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 134, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 185, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 197, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 79, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 110, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 165, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 131, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 247, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 204, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 199, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 157, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 199, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 544, .adv_w = 167, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 149, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 187, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 172, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 614, .adv_w = 259, .box_w = 15, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 637, .adv_w = 167, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 155, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 667, .adv_w = 157, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 92, .box_w = 4, .box_h = 16, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 689, .adv_w = 196, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 92, .box_w = 4, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 717, .adv_w = 184, .box_w = 8, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 725, .adv_w = 109, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 726, .adv_w = 79, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 728, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 736, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 749, .adv_w = 125, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 757, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 770, .adv_w = 141, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 779, .adv_w = 95, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 789, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 802, .adv_w = 155, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 814, .adv_w = 70, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 72, .box_w = 4, .box_h = 17, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 827, .adv_w = 142, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 840, .adv_w = 70, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 844, .adv_w = 236, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 858, .adv_w = 156, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 867, .adv_w = 159, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 878, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 891, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 904, .adv_w = 101, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 910, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 98, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 925, .adv_w = 156, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 934, .adv_w = 137, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 945, .adv_w = 204, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 138, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 971, .adv_w = 137, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 984, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 992, .adv_w = 92, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1000, .adv_w = 79, .box_w = 2, .box_h = 17, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1005, .adv_w = 92, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1015, .adv_w = 184, .box_w = 9, .box_h = 3, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 1019, .adv_w = 256, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1039, .adv_w = 256, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1064, .adv_w = 256, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1084, .adv_w = 256, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1109, .adv_w = 256, .box_w = 12, .box_h = 15, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1132, .adv_w = 256, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1152, .adv_w = 256, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1177, .adv_w = 256, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1200, .adv_w = 256, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1220, .adv_w = 256, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1245, .adv_w = 256, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1270, .adv_w = 256, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1293, .adv_w = 256, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1318, .adv_w = 256, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1341, .adv_w = 256, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1361, .adv_w = 256, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x15, 0x118, 0x594, 0x8c0, 0x930, 0xd58, 0xd78,
    0xdc8, 0x1264, 0x1388, 0x1440, 0x1538, 0x1600, 0x1ef4, 0x2028
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 46020, .range_length = 8233, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 16, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 83,
    3, 84,
    8, 83,
    8, 84,
    9, 75,
    11, 34,
    11, 43,
    11, 68,
    11, 69,
    11, 70,
    11, 72,
    11, 80,
    11, 82,
    34, 11,
    34, 13,
    34, 28,
    34, 36,
    34, 40,
    34, 43,
    34, 48,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 59,
    34, 85,
    34, 87,
    34, 88,
    34, 90,
    35, 53,
    35, 58,
    36, 32,
    36, 36,
    36, 40,
    36, 48,
    36, 50,
    37, 13,
    37, 15,
    37, 34,
    37, 53,
    37, 57,
    37, 59,
    38, 34,
    38, 43,
    38, 53,
    38, 55,
    38, 56,
    38, 57,
    39, 13,
    39, 15,
    39, 34,
    39, 43,
    39, 52,
    39, 53,
    39, 66,
    39, 71,
    40, 53,
    40, 55,
    40, 90,
    43, 13,
    43, 15,
    43, 34,
    43, 43,
    43, 66,
    44, 13,
    44, 28,
    44, 32,
    44, 36,
    44, 40,
    44, 43,
    44, 48,
    44, 50,
    44, 53,
    44, 57,
    44, 59,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 80,
    44, 82,
    44, 85,
    44, 87,
    44, 88,
    44, 90,
    45, 11,
    45, 32,
    45, 34,
    45, 36,
    45, 40,
    45, 43,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 59,
    45, 85,
    45, 87,
    45, 88,
    45, 90,
    48, 13,
    48, 15,
    48, 34,
    48, 43,
    48, 53,
    48, 57,
    48, 58,
    48, 59,
    49, 13,
    49, 15,
    49, 34,
    49, 40,
    49, 43,
    49, 56,
    49, 57,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 72,
    49, 80,
    49, 82,
    50, 13,
    50, 15,
    50, 34,
    50, 53,
    50, 57,
    50, 58,
    50, 59,
    51, 28,
    51, 36,
    51, 40,
    51, 43,
    51, 48,
    51, 50,
    51, 53,
    51, 58,
    51, 68,
    51, 69,
    51, 70,
    51, 72,
    51, 80,
    51, 82,
    52, 85,
    52, 87,
    52, 88,
    52, 90,
    53, 13,
    53, 15,
    53, 27,
    53, 28,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 53,
    53, 55,
    53, 56,
    53, 57,
    53, 58,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 71,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 34,
    54, 43,
    55, 13,
    55, 15,
    55, 27,
    55, 28,
    55, 32,
    55, 34,
    55, 36,
    55, 40,
    55, 43,
    55, 48,
    55, 50,
    55, 52,
    55, 53,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 78,
    55, 79,
    55, 80,
    55, 81,
    55, 82,
    55, 83,
    55, 84,
    55, 86,
    56, 13,
    56, 15,
    56, 27,
    56, 28,
    56, 34,
    56, 53,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 80,
    56, 82,
    57, 13,
    57, 15,
    57, 28,
    57, 36,
    57, 40,
    57, 43,
    57, 48,
    57, 50,
    57, 53,
    58, 13,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 53,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 86,
    59, 43,
    59, 53,
    59, 90,
    60, 75,
    67, 66,
    67, 71,
    67, 89,
    68, 43,
    68, 53,
    68, 58,
    70, 3,
    70, 8,
    71, 10,
    71, 11,
    71, 13,
    71, 14,
    71, 15,
    71, 27,
    71, 28,
    71, 32,
    71, 62,
    71, 67,
    71, 73,
    71, 76,
    71, 77,
    71, 85,
    71, 87,
    71, 88,
    71, 89,
    71, 90,
    71, 94,
    72, 75,
    75, 75,
    76, 13,
    76, 14,
    76, 15,
    76, 27,
    76, 28,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 80,
    76, 82,
    76, 85,
    76, 91,
    79, 3,
    79, 8,
    80, 3,
    80, 8,
    80, 66,
    80, 71,
    80, 75,
    80, 89,
    81, 66,
    81, 71,
    81, 89,
    82, 75,
    83, 13,
    83, 14,
    83, 15,
    83, 27,
    83, 28,
    83, 68,
    83, 69,
    83, 70,
    83, 71,
    83, 72,
    83, 73,
    83, 74,
    83, 78,
    83, 79,
    83, 80,
    83, 82,
    83, 84,
    83, 85,
    83, 86,
    83, 87,
    83, 88,
    83, 89,
    83, 90,
    83, 91,
    85, 14,
    85, 32,
    85, 68,
    85, 69,
    85, 70,
    85, 72,
    85, 80,
    85, 82,
    85, 89,
    86, 3,
    86, 8,
    87, 13,
    87, 15,
    87, 66,
    87, 68,
    87, 69,
    87, 70,
    87, 72,
    87, 80,
    87, 82,
    88, 13,
    88, 15,
    88, 68,
    88, 69,
    88, 70,
    88, 72,
    88, 80,
    88, 82,
    89, 68,
    89, 69,
    89, 70,
    89, 72,
    89, 80,
    89, 82,
    90, 3,
    90, 8,
    90, 13,
    90, 15,
    90, 32,
    90, 68,
    90, 69,
    90, 70,
    90, 71,
    90, 72,
    90, 80,
    90, 82,
    90, 85,
    92, 75
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -5, -7, -8, -13, 26, -18, -17, -11,
    -11, -11, -11, -11, -11, -17, 8, 8,
    -4, -3, 11, -4, -19, -5, -15, -9,
    -21, 4, -5, -6, -4, -5, -7, -7,
    3, -8, -8, -3, -6, -14, -14, -4,
    -10, -8, -5, 4, 7, 2, 1, 5,
    5, -19, -19, -15, -7, -3, 3, -8,
    2, -5, -3, -3, -11, -11, -8, -7,
    -3, 8, 8, 3, -8, -8, 8, -8,
    -8, 1, 5, 5, -3, -3, -3, -3,
    -3, -3, -7, -10, -7, -12, -28, -11,
    6, -7, -7, 8, -7, -7, -18, -5,
    -16, -9, -19, 8, -3, -12, -8, -10,
    -14, -11, -4, -3, -11, -7, -5, -5,
    -47, -42, -17, 1, -18, 5, -6, -7,
    -8, -8, -8, -8, -8, -8, -11, -11,
    -3, -11, -5, -4, -5, 11, -3, -3,
    7, -3, -3, -6, -3, -7, -7, -7,
    -7, -7, -7, -7, -5, -3, -7, -19,
    -25, -2, -2, -19, -10, -10, -18, -10,
    -10, 5, 8, 5, 0, 5, -24, -25,
    -25, -25, -11, -25, -20, -20, -25, -18,
    -25, -21, -21, -20, -11, -13, -20, -13,
    -11, -6, -4, -28, -28, -5, -5, 2,
    -14, -5, -5, -15, -1, -4, -3, 5,
    -21, -18, -18, -18, -17, -10, -8, -18,
    -10, -18, -10, -10, -8, -16, -17, -2,
    -2, -10, 4, -11, -7, -7, -7, -7,
    -7, -5, 8, 8, 8, -4, -4, 10,
    -4, -4, 5, -30, -30, -21, -7, -7,
    -15, -7, -7, -3, 5, -25, -25, -25,
    -25, -4, -25, -18, -18, -25, -18, -25,
    -18, -16, -18, 7, 5, -7, 24, -3,
    -1, -5, 10, -11, -8, -11, -19, 12,
    5, -14, -11, -14, 11, 11, 8, 12,
    4, 2, 1, 1, 5, 5, 5, 2,
    5, 8, 3, 4, 11, -16, 11, 11,
    11, -4, -3, -4, -4, -4, -3, -1,
    2, -11, -16, -16, -22, -3, -4, 0,
    -5, -3, -4, -5, 12, -22, -14, -22,
    11, 11, -1, -1, -1, 7, -1, 1,
    1, 1, 1, -1, -3, 2, 8, 1,
    11, 10, 7, 11, 5, -13, -10, -1,
    -1, -1, -1, -1, -1, 4, -7, -11,
    -16, -17, -4, -2, -2, -3, -3, -3,
    -3, -11, -11, -1, -1, -1, -1, -1,
    -1, -4, -4, -4, -4, -4, -4, 3,
    5, -15, -16, -1, -3, -3, -3, 2,
    -3, -3, -3, 1, 22
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 389,
    .glyph_ids_size = 0
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
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
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
const lv_font_t ui_font_malgum16 = {
#else
lv_font_t ui_font_malgum16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_MALGUM16*/

