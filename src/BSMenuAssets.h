#ifndef MENU_ASSETS_H
#define MENU_ASSETS_H
#include <Arduino.h>

unsigned char const menuCursor2x8[] PROGMEM =
{
  // 2, 8
  0x18, 0x3c,
};


// COMPRESSED =======================

unsigned char const menuTitle72x8[] PROGMEM =
{
  // 72, 8
  0x47, 0xc7, 0x30, 0xb6, 0x1b, 0x82, 0x07, 0x7a,
  0x46, 0x77, 0x0b, 0x17, 0xbb, 0x95, 0xe5, 0x64,
  0x6c, 0xf7, 0x60, 0x7a, 0xcd, 0xc0, 0xab, 0x8c,
  0x5c, 0xa7, 0x7b, 0x20, 0x37, 0xf4, 0xca, 0xd8,
  0x6e, 0x11, 0x21, 0x24, 0x5e, 0x54, 0x71, 0x88,
  0x88, 0xa8, 0x8d, 0x7a, 0x60, 0x6c, 0xb7, 0xc8,
  0x20, 0x88, 0x78, 0x95, 0xc1, 0x81, 0xb1, 0xdd,
  0x83, 0x03, 0x03, 0xaf, 0x22, 0x8e, 0xdd, 0x0d,
};

unsigned char const menuBoxBorder56x8[] PROGMEM =
{
  // 56, 8
  0x37, 0xc7, 0x36, 0x14, 0x58, 0x2e, 0x97, 0xcb,
  0xe5, 0x72, 0xb9, 0x5c, 0x2e, 0x97, 0xcb, 0xe5,
  0x72, 0xb9, 0x5c, 0x2e, 0x97, 0xcb, 0xe5, 0x72,
  0xb9, 0x5c, 0x2e, 0x97, 0xcb, 0xe5, 0x72, 0xb9,
  0x5c, 0x2e, 0x97, 0xcb, 0xe5, 0x72, 0xb9, 0x5c,
  0x2e, 0x97, 0xcb, 0xe5, 0x72, 0xb9, 0x5c, 0x2e,
  0x97, 0xcb, 0xe5, 0x02,
};

unsigned char const menuBoxMask56x8[] PROGMEM =
{
  // 56, 8
  0x37, 0xc7, 0x36, 0x8b, 0x7f, 0xaf,
};

unsigned char const menuWavesBack128x16[] PROGMEM =
{
  // 128, 16
  0x7f, 0xcf, 0x3f, 0xc7, 0x63, 0x6f, 0xe3, 0xb2,
  0x0e, 0x7b, 0x1f, 0xd6, 0x65, 0x5d, 0xd6, 0x65,
  0x5d, 0xd6, 0x65, 0x5d, 0xd6, 0x65, 0x5d, 0xd6,
  0x65, 0x1d, 0xf6, 0xde, 0x7b, 0xef, 0xc3, 0xba,
  0xac, 0xcb, 0xba, 0x8c, 0x5b, 0x6f, 0xbd, 0xf5,
  0xd6, 0x5b, 0x6f, 0xbd, 0xf5, 0xd6, 0x5b, 0x6f,
  0xe3, 0xb2, 0x2e, 0xeb, 0x32, 0xf7, 0xde, 0x7b,
  0x1f, 0xd6, 0x65, 0x5d, 0xd6, 0x65, 0x5d, 0xd6,
  0x65, 0x5d, 0xd6, 0x65, 0x5d, 0xd6, 0x65, 0xee,
  0xbd, 0xf7, 0xbc, 0xac, 0xcb, 0x3a, 0xf5, 0xd6,
  0x5b, 0xae, 0x5e, 0xbd, 0x7a, 0xdd, 0x5e, 0xbd,
  0xfa, 0x9f, 0x75,
};

unsigned char const menuWavesFront128x16[] PROGMEM =
{
  // 128, 16
  0x7f, 0xcf, 0x77, 0xae, 0x1e, 0x7b, 0x1b, 0x97,
  0x75, 0xea, 0x2d, 0x57, 0xbf, 0xe6, 0xd5, 0x6b,
  0x6e, 0xbd, 0x8d, 0xcb, 0xba, 0x8c, 0x5b, 0x8f,
  0x5e, 0xfd, 0x9a, 0xd7, 0xdc, 0x7a, 0x5a, 0x97,
  0x75, 0xea, 0x2d, 0x57, 0xaf, 0xbc, 0xe7, 0xea,
  0xb1, 0xb7, 0x71, 0x59, 0xa7, 0xde, 0x72, 0xf5,
  0x6b, 0x5e, 0xbd, 0xe6, 0xd6, 0xdb, 0xb8, 0xac,
  0xcb, 0xb8, 0xf5, 0xe8, 0xd5, 0xaf, 0x79, 0xcd,
  0xad, 0xa7, 0x75, 0x59, 0xa7, 0xde, 0x72, 0xf5,
  0xca, 0xfd, 0xbf, 0xff,
};

unsigned char const menuShip76x64[] PROGMEM =
{
  // 76, 64
  0xcb, 0xff, 0xd3, 0x6b, 0x26, 0xc0, 0x02, 0x10,
  0x60, 0x01, 0x08, 0xb0, 0x00, 0x04, 0x58, 0x00,
  0x6b, 0xac, 0x7f, 0xf1, 0xa7, 0x1c, 0x5c, 0xcb,
  0xab, 0x57, 0xaf, 0x5e, 0xfd, 0x51, 0xe3, 0xb2,
  0x8e, 0x9e, 0xd6, 0x25, 0xd7, 0x71, 0x59, 0xff,
  0x78, 0xc6, 0x16, 0xd6, 0xf0, 0x92, 0x7d, 0x1a,
  0x87, 0x3d, 0x47, 0xd2, 0xa3, 0x1f, 0x70, 0xfb,
  0x10, 0xb8, 0x21, 0x5b, 0xad, 0x0f, 0x81, 0x1b,
  0xb2, 0xd5, 0xfa, 0x10, 0xd8, 0x8a, 0xe8, 0xf6,
  0xd9, 0x1f, 0x82, 0xa3, 0xf0, 0x38, 0x37, 0x3e,
  0xb0, 0xf7, 0x0b, 0x24, 0x88, 0x8a, 0x88, 0xa8,
  0x88, 0x88, 0x8a, 0x1c, 0xf6, 0x47, 0x18, 0x4c,
  0x0e, 0x84, 0x23, 0x8f, 0x18, 0x08, 0xc8, 0x81,
  0x70, 0xe4, 0x11, 0x03, 0x01, 0x39, 0x10, 0x8e,
  0xbc, 0x06, 0x9e, 0xe7, 0x70, 0x58, 0x17, 0xc9,
  0x45, 0x72, 0x91, 0x1c, 0xc2, 0x18, 0x83, 0xe9,
  0xe2, 0xca, 0x04, 0xcb, 0x76, 0x70, 0x31, 0x8c,
  0x03, 0xf4, 0xd4, 0xdb, 0x25, 0x70, 0x66, 0x22,
  0x37, 0xce, 0x9c, 0x39, 0x83, 0x37, 0x06, 0x67,
  0xce, 0x9c, 0x39, 0x73, 0xe6, 0xca, 0x99, 0x33,
  0x67, 0xce, 0x9c, 0xb9, 0x72, 0xe6, 0xcc, 0x85,
  0x22, 0x37, 0x44, 0x37, 0x32, 0xf9, 0x5b, 0x79,
  0xda, 0x9d, 0x67, 0xe0, 0x08, 0x1c, 0xf9, 0x75,
  0x00, 0x1c, 0x00, 0x80, 0x03, 0x00, 0xf0, 0xc3,
  0x00, 0x00, 0x18, 0x00, 0x00, 0xc0, 0x00, 0x00,
  0x00, 0x26, 0xf0, 0x1c, 0xb8, 0xb2, 0xf7, 0xd9,
  0x23, 0x7f, 0x8e, 0x99, 0xef, 0x1c, 0x38, 0x01,
  0x70, 0x02, 0xe0, 0xd7, 0x71, 0x04, 0x8e, 0xc0,
  0xcf, 0xe5, 0xcc, 0xe7, 0xb9, 0xc1, 0x38, 0x80,
  0x7f, 0x9e, 0xef, 0xfe, 0xf7, 0x82, 0xb1, 0xfc,
  0x02,
};


#endif
