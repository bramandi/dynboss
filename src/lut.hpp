#pragma once
#ifndef LUT_HPP
#define LUT_HPP

#define reverse_8(x) (reverse_8_lut[(x)])
#define revcomp_8(x) (revcomp_8_lut[(x)])

static const uint8_t reverse_8_lut[256] = {
  0x0,
 0x40,
 0x80,
 0xc0,
 0x10,
 0x50,
 0x90,
 0xd0,
 0x20,
 0x60,
 0xa0,
 0xe0,
 0x30,
 0x70,
 0xb0,
 0xf0,
 0x4,
 0x44,
 0x84,
 0xc4,
 0x14,
 0x54,
 0x94,
 0xd4,
 0x24,
 0x64,
 0xa4,
 0xe4,
 0x34,
 0x74,
 0xb4,
 0xf4,
 0x8,
 0x48,
 0x88,
 0xc8,
 0x18,
 0x58,
 0x98,
 0xd8,
 0x28,
 0x68,
 0xa8,
 0xe8,
 0x38,
 0x78,
 0xb8,
 0xf8,
 0xc,
 0x4c,
 0x8c,
 0xcc,
 0x1c,
 0x5c,
 0x9c,
 0xdc,
 0x2c,
 0x6c,
 0xac,
 0xec,
 0x3c,
 0x7c,
 0xbc,
 0xfc,
 0x1,
 0x41,
 0x81,
 0xc1,
 0x11,
 0x51,
 0x91,
 0xd1,
 0x21,
 0x61,
 0xa1,
 0xe1,
 0x31,
 0x71,
 0xb1,
 0xf1,
 0x5,
 0x45,
 0x85,
 0xc5,
 0x15,
 0x55,
 0x95,
 0xd5,
 0x25,
 0x65,
 0xa5,
 0xe5,
 0x35,
 0x75,
 0xb5,
 0xf5,
 0x9,
 0x49,
 0x89,
 0xc9,
 0x19,
 0x59,
 0x99,
 0xd9,
 0x29,
 0x69,
 0xa9,
 0xe9,
 0x39,
 0x79,
 0xb9,
 0xf9,
 0xd,
 0x4d,
 0x8d,
 0xcd,
 0x1d,
 0x5d,
 0x9d,
 0xdd,
 0x2d,
 0x6d,
 0xad,
 0xed,
 0x3d,
 0x7d,
 0xbd,
 0xfd,
 0x2,
 0x42,
 0x82,
 0xc2,
 0x12,
 0x52,
 0x92,
 0xd2,
 0x22,
 0x62,
 0xa2,
 0xe2,
 0x32,
 0x72,
 0xb2,
 0xf2,
 0x6,
 0x46,
 0x86,
 0xc6,
 0x16,
 0x56,
 0x96,
 0xd6,
 0x26,
 0x66,
 0xa6,
 0xe6,
 0x36,
 0x76,
 0xb6,
 0xf6,
 0xa,
 0x4a,
 0x8a,
 0xca,
 0x1a,
 0x5a,
 0x9a,
 0xda,
 0x2a,
 0x6a,
 0xaa,
 0xea,
 0x3a,
 0x7a,
 0xba,
 0xfa,
 0xe,
 0x4e,
 0x8e,
 0xce,
 0x1e,
 0x5e,
 0x9e,
 0xde,
 0x2e,
 0x6e,
 0xae,
 0xee,
 0x3e,
 0x7e,
 0xbe,
 0xfe,
 0x3,
 0x43,
 0x83,
 0xc3,
 0x13,
 0x53,
 0x93,
 0xd3,
 0x23,
 0x63,
 0xa3,
 0xe3,
 0x33,
 0x73,
 0xb3,
 0xf3,
 0x7,
 0x47,
 0x87,
 0xc7,
 0x17,
 0x57,
 0x97,
 0xd7,
 0x27,
 0x67,
 0xa7,
 0xe7,
 0x37,
 0x77,
 0xb7,
 0xf7,
 0xb,
 0x4b,
 0x8b,
 0xcb,
 0x1b,
 0x5b,
 0x9b,
 0xdb,
 0x2b,
 0x6b,
 0xab,
 0xeb,
 0x3b,
 0x7b,
 0xbb,
 0xfb,
 0xf,
 0x4f,
 0x8f,
 0xcf,
 0x1f,
 0x5f,
 0x9f,
 0xdf,
 0x2f,
 0x6f,
 0xaf,
 0xef,
 0x3f,
 0x7f,
 0xbf,
 0xff
};

static const uint8_t revcomp_8_lut[256] = {
  0xff,
  0xbf,
  0x7f,
  0x3f,
  0xef,
  0xaf,
  0x6f,
  0x2f,
  0xdf,
  0x9f,
  0x5f,
  0x1f,
  0xcf,
  0x8f,
  0x4f,
  0xf,
  0xfb,
  0xbb,
  0x7b,
  0x3b,
  0xeb,
  0xab,
  0x6b,
  0x2b,
  0xdb,
  0x9b,
  0x5b,
  0x1b,
  0xcb,
  0x8b,
  0x4b,
  0xb,
  0xf7,
  0xb7,
  0x77,
  0x37,
  0xe7,
  0xa7,
  0x67,
  0x27,
  0xd7,
  0x97,
  0x57,
  0x17,
  0xc7,
  0x87,
  0x47,
  0x7,
  0xf3,
  0xb3,
  0x73,
  0x33,
  0xe3,
  0xa3,
  0x63,
  0x23,
  0xd3,
  0x93,
  0x53,
  0x13,
  0xc3,
  0x83,
  0x43,
  0x3,
  0xfe,
  0xbe,
  0x7e,
  0x3e,
  0xee,
  0xae,
  0x6e,
  0x2e,
  0xde,
  0x9e,
  0x5e,
  0x1e,
  0xce,
  0x8e,
  0x4e,
  0xe,
  0xfa,
  0xba,
  0x7a,
  0x3a,
  0xea,
  0xaa,
  0x6a,
  0x2a,
  0xda,
  0x9a,
  0x5a,
  0x1a,
  0xca,
  0x8a,
  0x4a,
  0xa,
  0xf6,
  0xb6,
  0x76,
  0x36,
  0xe6,
  0xa6,
  0x66,
  0x26,
  0xd6,
  0x96,
  0x56,
  0x16,
  0xc6,
  0x86,
  0x46,
  0x6,
  0xf2,
  0xb2,
  0x72,
  0x32,
  0xe2,
  0xa2,
  0x62,
  0x22,
  0xd2,
  0x92,
  0x52,
  0x12,
  0xc2,
  0x82,
  0x42,
  0x2,
  0xfd,
  0xbd,
  0x7d,
  0x3d,
  0xed,
  0xad,
  0x6d,
  0x2d,
  0xdd,
  0x9d,
  0x5d,
  0x1d,
  0xcd,
  0x8d,
  0x4d,
  0xd,
  0xf9,
  0xb9,
  0x79,
  0x39,
  0xe9,
  0xa9,
  0x69,
  0x29,
  0xd9,
  0x99,
  0x59,
  0x19,
  0xc9,
  0x89,
  0x49,
  0x9,
  0xf5,
  0xb5,
  0x75,
  0x35,
  0xe5,
  0xa5,
  0x65,
  0x25,
  0xd5,
  0x95,
  0x55,
  0x15,
  0xc5,
  0x85,
  0x45,
  0x5,
  0xf1,
  0xb1,
  0x71,
  0x31,
  0xe1,
  0xa1,
  0x61,
  0x21,
  0xd1,
  0x91,
  0x51,
  0x11,
  0xc1,
  0x81,
  0x41,
  0x1,
  0xfc,
  0xbc,
  0x7c,
  0x3c,
  0xec,
  0xac,
  0x6c,
  0x2c,
  0xdc,
  0x9c,
  0x5c,
  0x1c,
  0xcc,
  0x8c,
  0x4c,
  0xc,
  0xf8,
  0xb8,
  0x78,
  0x38,
  0xe8,
  0xa8,
  0x68,
  0x28,
  0xd8,
  0x98,
  0x58,
  0x18,
  0xc8,
  0x88,
  0x48,
  0x8,
  0xf4,
  0xb4,
  0x74,
  0x34,
  0xe4,
  0xa4,
  0x64,
  0x24,
  0xd4,
  0x94,
  0x54,
  0x14,
  0xc4,
  0x84,
  0x44,
  0x4,
  0xf0,
  0xb0,
  0x70,
  0x30,
  0xe0,
  0xa0,
  0x60,
  0x20,
  0xd0,
  0x90,
  0x50,
  0x10,
  0xc0,
  0x80,
  0x40,
  0x0
};

#endif

