/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:\Users\micro\OneDrive\Documents\SquareLine\assets\OpenSans-VariableFont_wdth,wght.ttf -o C:\Users\micro\OneDrive\Documents\SquareLine\assets\ui_font_Font2.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FONT2
#define UI_FONT_FONT2 1
#endif

#if UI_FONT_FONT2

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xaa, 0xaa, 0xf,

    /* U+0022 "\"" */
    0x99, 0x99,

    /* U+0023 "#" */
    0x9, 0x2, 0x41, 0x10, 0x44, 0x7f, 0xc4, 0x81,
    0x23, 0xfe, 0x22, 0x9, 0x2, 0x40, 0x90,

    /* U+0024 "$" */
    0x10, 0x21, 0xfc, 0x89, 0x1a, 0x1c, 0xe, 0x12,
    0x24, 0x5f, 0xe1, 0x2, 0x0,

    /* U+0025 "%" */
    0x70, 0xc9, 0x88, 0x89, 0x88, 0x90, 0x8a, 0x9,
    0xae, 0x75, 0x30, 0x51, 0x9, 0x11, 0x91, 0x11,
    0x33, 0xe,

    /* U+0026 "&" */
    0x3c, 0x8, 0x41, 0x8, 0x21, 0x2, 0xc0, 0x70,
    0x1f, 0x14, 0x72, 0x83, 0x90, 0x33, 0xf, 0x1e,
    0x20,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x29, 0x69, 0x24, 0x92, 0x24, 0xc8,

    /* U+0029 ")" */
    0x89, 0x32, 0x49, 0x24, 0xa5, 0xa0,

    /* U+002A "*" */
    0x10, 0x22, 0x4f, 0xf3, 0x5, 0x13, 0x0,

    /* U+002B "+" */
    0x10, 0x10, 0x10, 0x10, 0xff, 0x10, 0x10, 0x10,

    /* U+002C "," */
    0xfa,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0xc, 0x20, 0x84, 0x10, 0xc2, 0x8, 0x61, 0x4,
    0x30,

    /* U+0030 "0" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0xd, 0x11, 0xc0,

    /* U+0031 "1" */
    0x17, 0xd1, 0x11, 0x11, 0x11, 0x11,

    /* U+0032 "2" */
    0x7d, 0x8c, 0x8, 0x10, 0x20, 0x83, 0xc, 0x10,
    0x41, 0x7, 0xf0,

    /* U+0033 "3" */
    0x7c, 0xc6, 0x2, 0x2, 0x4, 0x38, 0x6, 0x1,
    0x1, 0x1, 0x82, 0xfc,

    /* U+0034 "4" */
    0x2, 0x3, 0x2, 0x83, 0x41, 0x21, 0x11, 0x89,
    0x84, 0xff, 0x81, 0x0, 0x80, 0x40,

    /* U+0035 "5" */
    0x7c, 0x81, 0x6, 0xc, 0x1f, 0x1, 0x81, 0x2,
    0x6, 0x17, 0xc0,

    /* U+0036 "6" */
    0x1c, 0xc1, 0x4, 0x8, 0x17, 0xb1, 0xc1, 0x83,
    0x5, 0x11, 0xe0,

    /* U+0037 "7" */
    0xff, 0x3, 0x2, 0x6, 0x4, 0x4, 0xc, 0x8,
    0x18, 0x10, 0x30, 0x20,

    /* U+0038 "8" */
    0x3c, 0xcd, 0xa, 0x16, 0x47, 0x1b, 0x61, 0x83,
    0x7, 0x1b, 0xe0,

    /* U+0039 "9" */
    0x38, 0x8a, 0xc, 0x18, 0x38, 0xde, 0x81, 0x2,
    0x8, 0x33, 0x80,

    /* U+003A ":" */
    0xf0, 0x3, 0xc0,

    /* U+003B ";" */
    0x6c, 0x0, 0x3, 0x4b, 0x0,

    /* U+003C "<" */
    0x1, 0x6, 0x18, 0x60, 0xc0, 0x30, 0xe, 0x3,

    /* U+003D "=" */
    0xfe, 0x0, 0x7, 0xf0,

    /* U+003E ">" */
    0x80, 0x60, 0x18, 0x6, 0x7, 0x1c, 0x60, 0x80,

    /* U+003F "?" */
    0x78, 0x10, 0x41, 0xc, 0x63, 0x8, 0x20, 0x3,
    0xc,

    /* U+0040 "@" */
    0xf, 0x83, 0x4, 0x60, 0x24, 0x79, 0x88, 0x99,
    0x9, 0x90, 0x99, 0x9, 0x99, 0xb8, 0xe6, 0x40,
    0x2, 0x0, 0x1f, 0x80,

    /* U+0041 "A" */
    0xc, 0x3, 0x0, 0xe0, 0x48, 0x12, 0xc, 0xc2,
    0x10, 0xfc, 0x60, 0x90, 0x24, 0xf, 0x1,

    /* U+0042 "B" */
    0xfc, 0x86, 0x82, 0x82, 0x86, 0xf8, 0x86, 0x81,
    0x81, 0x81, 0x82, 0xfc,

    /* U+0043 "C" */
    0x1f, 0x21, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x40, 0x60, 0x1f,

    /* U+0044 "D" */
    0xfc, 0x41, 0x20, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0xa1, 0x9f, 0x80,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0x83, 0xf8, 0x20, 0x82, 0x8,
    0x3f,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0x82, 0xf, 0xe0, 0x82, 0x8,
    0x20,

    /* U+0047 "G" */
    0x1f, 0x90, 0x50, 0x10, 0x8, 0x4, 0x2, 0x1f,
    0x1, 0x80, 0xa0, 0x58, 0x23, 0xf0,

    /* U+0048 "H" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81,

    /* U+0049 "I" */
    0xff, 0xf0,

    /* U+004A "J" */
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xe0,

    /* U+004B "K" */
    0x82, 0x84, 0x8c, 0x98, 0xb0, 0xe0, 0xf0, 0x98,
    0x88, 0x84, 0x86, 0x83,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82, 0x8,
    0x3f,

    /* U+004D "M" */
    0xc0, 0x78, 0xf, 0x83, 0xd0, 0x5a, 0xb, 0x62,
    0x64, 0x4c, 0xd9, 0x8a, 0x31, 0x46, 0x38, 0xc2,
    0x10,

    /* U+004E "N" */
    0xc0, 0xe0, 0x78, 0x36, 0x19, 0xc, 0xc6, 0x33,
    0x9, 0x86, 0xc1, 0xe0, 0x70, 0x30,

    /* U+004F "O" */
    0x1e, 0x18, 0x64, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x50, 0x26, 0x18, 0x78,

    /* U+0050 "P" */
    0xf9, 0xe, 0xc, 0x18, 0x30, 0xbe, 0x40, 0x81,
    0x2, 0x4, 0x0,

    /* U+0051 "Q" */
    0x1e, 0x18, 0x64, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x50, 0x26, 0x18, 0x78, 0x3,
    0x0, 0x60, 0x8,

    /* U+0052 "R" */
    0xf8, 0x86, 0x82, 0x82, 0x82, 0x84, 0xf8, 0x88,
    0x8c, 0x84, 0x82, 0x83,

    /* U+0053 "S" */
    0x3f, 0x86, 0x4, 0xc, 0xe, 0x7, 0x3, 0x2,
    0x6, 0x1f, 0xc0,

    /* U+0054 "T" */
    0xff, 0x84, 0x2, 0x1, 0x0, 0x80, 0x40, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+0055 "U" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x50, 0x47, 0xc0,

    /* U+0056 "V" */
    0xc0, 0x90, 0x24, 0x19, 0x84, 0x21, 0x8, 0xc3,
    0x20, 0x48, 0x16, 0x7, 0x0, 0xc0, 0x30,

    /* U+0057 "W" */
    0xc1, 0x4, 0x86, 0x9, 0xe, 0x12, 0x14, 0x66,
    0x68, 0x84, 0x99, 0x9, 0x12, 0x12, 0x2c, 0x3c,
    0x50, 0x30, 0xe0, 0x60, 0xc0, 0xc1, 0x80,

    /* U+0058 "X" */
    0x41, 0xb0, 0x88, 0x86, 0xc1, 0x40, 0x60, 0x70,
    0x28, 0x32, 0x11, 0x90, 0x58, 0x30,

    /* U+0059 "Y" */
    0xc1, 0xa0, 0x98, 0xc4, 0x43, 0x40, 0xa0, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+005A "Z" */
    0xff, 0x3, 0x6, 0x4, 0xc, 0x8, 0x10, 0x30,
    0x20, 0x60, 0xc0, 0xff,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x49, 0xc0,

    /* U+005C "\\" */
    0xc1, 0x4, 0x18, 0x20, 0x83, 0x4, 0x10, 0x20,
    0x83,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x93, 0xc0,

    /* U+005E "^" */
    0x10, 0x10, 0x28, 0x28, 0x44, 0x44, 0x82, 0x82,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0x99, 0x80,

    /* U+0061 "a" */
    0x7c, 0x8c, 0x8, 0x17, 0xf8, 0x60, 0xc3, 0x7a,

    /* U+0062 "b" */
    0x81, 0x2, 0x5, 0xcc, 0x50, 0x60, 0xc1, 0x83,
    0x7, 0x15, 0xc0,

    /* U+0063 "c" */
    0x3d, 0x8, 0x20, 0x82, 0x8, 0x10, 0x3c,

    /* U+0064 "d" */
    0x2, 0x4, 0x9, 0xd4, 0x70, 0x60, 0xc1, 0x83,
    0x5, 0x19, 0xd0,

    /* U+0065 "e" */
    0x38, 0x8a, 0xc, 0x1f, 0xf0, 0x20, 0x20, 0x3e,

    /* U+0066 "f" */
    0x1c, 0x82, 0x3f, 0x20, 0x82, 0x8, 0x20, 0x82,
    0x8,

    /* U+0067 "g" */
    0x3f, 0x66, 0x42, 0x42, 0x66, 0x3c, 0x40, 0x40,
    0x3e, 0xc1, 0x81, 0xc3, 0x7c,

    /* U+0068 "h" */
    0x81, 0x2, 0x5, 0xec, 0x70, 0x60, 0xc1, 0x83,
    0x6, 0xc, 0x10,

    /* U+0069 "i" */
    0xdf, 0xf0,

    /* U+006A "j" */
    0x24, 0x12, 0x49, 0x24, 0x92, 0x4e,

    /* U+006B "k" */
    0x81, 0x2, 0x4, 0x68, 0x92, 0x28, 0x70, 0x91,
    0x32, 0x34, 0x20,

    /* U+006C "l" */
    0xff, 0xf0,

    /* U+006D "m" */
    0xbc, 0xf6, 0x38, 0xe0, 0x83, 0x4, 0x18, 0x20,
    0xc1, 0x6, 0x8, 0x30, 0x41, 0x82, 0x8,

    /* U+006E "n" */
    0xbd, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x82,

    /* U+006F "o" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42,
    0x3c,

    /* U+0070 "p" */
    0xb9, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xe2, 0xb9,
    0x2, 0x4, 0x8, 0x0,

    /* U+0071 "q" */
    0x3a, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xa3, 0x3a,
    0x4, 0x8, 0x10, 0x20,

    /* U+0072 "r" */
    0xbe, 0x21, 0x8, 0x42, 0x10, 0x80,

    /* U+0073 "s" */
    0x7e, 0x18, 0x30, 0x38, 0x30, 0x61, 0xf8,

    /* U+0074 "t" */
    0x42, 0x3e, 0x84, 0x21, 0x8, 0x42, 0xe,

    /* U+0075 "u" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xe3, 0x7a,

    /* U+0076 "v" */
    0xc3, 0x42, 0x42, 0x66, 0x24, 0x24, 0x3c, 0x18,
    0x18,

    /* U+0077 "w" */
    0xc6, 0x14, 0x61, 0x47, 0x34, 0xd2, 0x69, 0x22,
    0x9e, 0x28, 0xe3, 0xc, 0x30, 0xc0,

    /* U+0078 "x" */
    0x43, 0x66, 0x34, 0x1c, 0x18, 0x1c, 0x24, 0x62,
    0x43,

    /* U+0079 "y" */
    0x83, 0xc2, 0x42, 0x46, 0x24, 0x24, 0x3c, 0x18,
    0x18, 0x10, 0x10, 0x30, 0xe0,

    /* U+007A "z" */
    0xfc, 0x30, 0x84, 0x30, 0x84, 0x30, 0xfc,

    /* U+007B "{" */
    0x19, 0x8, 0x42, 0x10, 0x98, 0x21, 0x8, 0x42,
    0xc,

    /* U+007C "|" */
    0xff, 0xff,

    /* U+007D "}" */
    0xc1, 0x8, 0x42, 0x10, 0x83, 0x21, 0x8, 0x42,
    0x60,

    /* U+007E "~" */
    0xf1, 0x8f
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 67, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 68, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 102, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6, .adv_w = 165, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 146, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 34, .adv_w = 212, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 187, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 56, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 70, .adv_w = 76, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 76, .adv_w = 76, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 82, .adv_w = 141, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 89, .adv_w = 146, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 97, .adv_w = 66, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 98, .adv_w = 82, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 99, .adv_w = 67, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 94, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 146, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 146, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 67, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 67, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 227, .adv_w = 146, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 235, .adv_w = 146, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 239, .adv_w = 146, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 247, .adv_w = 111, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 230, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 276, .adv_w = 162, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 165, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 161, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 186, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 142, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 132, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 186, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 189, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 72, .box_w = 1, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 69, .box_w = 4, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 383, .adv_w = 157, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 134, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 230, .box_w = 11, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 193, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 199, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 154, .box_w = 7, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 199, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 480, .adv_w = 158, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 140, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 141, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 187, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 153, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 236, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 148, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 143, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 147, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 84, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 615, .adv_w = 94, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 624, .adv_w = 84, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 630, .adv_w = 146, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 638, .adv_w = 112, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 639, .adv_w = 71, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 641, .adv_w = 142, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 649, .adv_w = 157, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 660, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 667, .adv_w = 157, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 678, .adv_w = 144, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 686, .adv_w = 86, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 695, .adv_w = 139, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 708, .adv_w = 157, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 719, .adv_w = 65, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 65, .box_w = 3, .box_h = 16, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 727, .adv_w = 135, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 65, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 740, .adv_w = 237, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 157, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 763, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 157, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 784, .adv_w = 157, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 796, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 802, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 809, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 816, .adv_w = 157, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 824, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 833, .adv_w = 198, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 847, .adv_w = 134, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 128, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 869, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 876, .adv_w = 96, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 885, .adv_w = 141, .box_w = 1, .box_h = 16, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 887, .adv_w = 96, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 896, .adv_w = 146, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 5}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
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
    .cmap_num = 1,
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
const lv_font_t ui_font_Font2 = {
#else
lv_font_t ui_font_Font2 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONT2*/

