#ifndef GAMESCREEN_H
#define GAMESCREEN_H

void initialize_gamescreen(void);
mode run_gamescreen(void);

static const PROGMEM unsigned char map1[] = 
{ 
   1,  1,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  1, /* end of field */ 28,  28,  28,  28,  28,  28,  28, 
   1,  3,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4, 18, /* end of field */ 28,  28,  28,  28,  28,  28,  28,
   1,  3,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  4, 18, /* end of field */ 28,  28,  28,  28,  28,  28,  28,
   1,  3,  4,  5,  5,  5,  6,  7,  7,  7,  7,  7,  7,  6,  7,  7,  7,  7,  7,  7,  7,  7,  6,  4, 18, /* end of field */ 28,  28,  28,  28,  28,  28,  28,
   1,  3,  4,  5,  5,  5,  8,  9, 10, 10, 10, 10, 10, 11,  9,  9, 10, 10, 10, 10, 10, 10, 11,  4, 18, /* end of field */ 28,  28,  28,  28,  28,  28,  28,
   1,  3,  4,  5,  5,  5,  8, 10, 10, 10, 10, 10, 10, 11, 10, 10, 10, 10, 10, 10, 10, 10, 11,  4, 18, /* end of field */ 28,  28,  28,  28,  28,  28,  28,
   1,  3,  4,  5,  5,  5,  8, 10, 10, 10, 10, 10, 10, 11, 10, 10, 10, 10, 10, 10, 10, 10, 11,  4, 18, /* end of field */ 28,  28,  28,  28,  28,  28,  28,
   1,  3,  4,  5,  5,  5,  8, 10, 10, 10, 10, 10, 10, 11, 10, 10, 10, 10, 10, 10, 10, 10, 11,  4, 18, /* end of field */ 28,  28,  28,  28,  28,  28,  28,
   1,  3,  4,  5,  5,  5,  8, 10, 10, 10, 10, 10, 10, 11, 10, 10, 10, 10, 10, 10, 10, 10, 11,  4, 18, /* end of field */ 28,  28,  28,  28,  28,  28,  28,           
   1,  3,  4,  5,  5,  5, 12, 13, 13, 13, 14, 14, 13, 12, 13, 13, 13, 13, 14, 14, 13, 13, 12,  4, 18, /* end of field */ 28,  28,  28,  28,  28,  28,  28,
   1,  3,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  4, 18, /* end of field */ 28,  28,  28,  28,  28,  28,  28,
   1,  3,  4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  4,  4,  4,  4,  4, 18, /* end of field */ 28,  28,  28,  28,  28,  28,  28,   
   1,  1, 15,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  5,  5,  4,  4,  4, 16, 17, 17, 17, 17,  1, /* end of field */ 28,  28,  28,  28,  28,  28,  28,
   1,  1,  1, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 15,  5,  5, 16, 17, 17,  1,  1,  1,  1,  1,  1, /* end of field */ 28,  28,  28,  28,  28,  28,  28,
   1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  3,  5,  5, 18,  1,  1,  1,  1,  1,  1,  1,  1, /* end of field */ 28,  28,  28,  28,  28,  28,  28,
   1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  3,  5,  5, 18,  1,  1,  1,  1,  1,  1,  1,  1, /* end of field */ 28,  28,  28,  28,  28,  28,  28,
  28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, /* end of field */ 28,  28,  28,  28,  28,  28,  28,   
  28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, /* end of field */ 28,  28,  28,  28,  28,  28,  28,   
  28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, /* end of field */ 28,  28,  28,  28,  28,  28,  28,          
};

static const PROGMEM unsigned char tile_indexes[] = 
{
   0,  1, 11, 12, // Tile 01
   0,  1, 13, 14, // Tile 02
   0,  2, 11, 15, // Tile 03
   3,  4, 16, 17, // Tile 04
   5,  6, 18, 19, // Tile 05
   7,  8, 20, 21, // Tile 06
   7,  8, 22, 23, // Tile 07
   9, 10, 24, 25, // Tile 08

  26, 27, 42, 43, // Tile 09
  28, 29, 44, 45, // Tile 10
  30, 31, 46, 47, // Tile 11
  32, 33, 48, 49, // Tile 12
  34, 35, 50, 51, // Tile 13
  36, 37, 36, 37, // Tile 14,
  38, 39, 11, 52, // Tile 15,
  40, 41, 53, 54, // Tile 16,

  38, 55, 11, 12, // Tile 17,
  56,  1, 64, 12, // Tile 18,
  57, 57, 65, 65, // Tile 19,
  58, 58, 66, 66, // Tile 20,
  59, 60, 59, 60, // Tile 21,
  34, 61, 50, 67, // Tile 22,
  62, 35, 68, 51, // Tile 23,
   7, 63, 22, 69, // Tile 24,

  70,  8, 75, 23, // Tile 25,
  71, 71, 76, 76, // Tile 26,
  72, 72, 76, 76, // Tile 27,
  73, 73, 73, 73, // Tile 28
};

static const PROGMEM unsigned char image_chr[] = 
{
  0x00,  0x40,  0x00,  0x55,  0x05,  0x00,  0x50,  0x00,  0x40,  0x00,  0x50,  0x00,  0x05,  0x00,  0x00,  0x55, 
  0x40,  0x00,  0x50,  0x00,  0x05,  0x54,  0x01,  0x01,  0x01,  0x00,  0x01,  0x01,  0x15,  0x55,  0x41,  0x50, 
  0xea,  0xa5,  0xfa,  0xb5,  0xaf,  0xf1,  0xab,  0xa1,  0xab,  0xad,  0xab,  0xb5,  0xbf,  0xf5,  0xeb,  0xf5, 
  0xa5,  0xae,  0xe5,  0xbf,  0xff,  0xbd,  0x5b,  0x40,  0x5e,  0x15,  0xac,  0x2a,  0xf8,  0x59,  0xb0,  0x15, 
  0xa5,  0x0f,  0xdf,  0xc0,  0xcf,  0xc3,  0xa0,  0x3d,  0xe0,  0xfc,  0x32,  0x00,  0x46,  0xc1,  0xfe,  0x3f, 
  0x5a,  0x5d,  0x1a,  0x83,  0xc0,  0x7e,  0xab,  0xa2,  0xa2,  0xa4,  0x53,  0x9a,  0x05,  0xca,  0xb5,  0xbd, 
  0xf5,  0xa0,  0x50,  0x2a,  0x20,  0x69,  0x2a,  0x81,  0x9a,  0x43,  0x29,  0xaa,  0x24,  0x39,  0xe0,  0x90, 
  0xff,  0xff,  0xff,  0xfb,  0xfe,  0xe8,  0xea,  0x81,  0x05,  0x05,  0x50,  0x14,  0x01,  0x53,  0x53,  0xff, 
  0xcf,  0xc5,  0x70,  0x56,  0x9e,  0xaa,  0x8e,  0x83,  0xbb,  0x3a,  0xfa,  0xaa,  0xce,  0xaa,  0xf3,  0xfa, 
  0xd6,  0x55,  0xf4,  0x55,  0x34,  0x96,  0xb5,  0x16,  0x85,  0x96,  0x8a,  0x58,  0x2c,  0xa2,  0xb5,  0x6a, 
  0x9a,  0xab,  0xa4,  0x8b,  0x8c,  0x22,  0x09,  0x32,  0xab,  0x10,  0x9a,  0x00,  0x0a,  0x42,  0x2e,  0xc2, 
  0x00,  0x10,  0x01,  0x50,  0x05,  0x05,  0x50,  0x00,  0x10,  0x00,  0x10,  0x00,  0x05,  0x00,  0x00,  0x55, 
  0x00,  0x10,  0x00,  0x10,  0x41,  0x54,  0x15,  0x01,  0x10,  0x00,  0x40,  0x00,  0x40,  0x00,  0x40,  0x00, 
  0xaa,  0xba,  0xab,  0xfa,  0xaf,  0xaf,  0xfa,  0xaa,  0xba,  0xaa,  0xbb,  0xba,  0xb5,  0x5b,  0x50,  0x45, 
  0xaa,  0x8a,  0xaa,  0x8a,  0x28,  0x02,  0x80,  0xa8,  0x8a,  0xaa,  0x22,  0x8a,  0x55,  0x58,  0x55,  0x55, 
  0xaa,  0xf5,  0xaa,  0xb5,  0xeb,  0xf1,  0xbf,  0xb1,  0xba,  0xad,  0xea,  0xad,  0xea,  0xa5,  0xea,  0xe5,   
  0x06,  0xbf,  0x0b,  0xbf,  0xda,  0xae,  0x15,  0x6a,  0x5d,  0xc5,  0x40,  0x01,  0xc3,  0x01,  0x3c,  0x53, 
  0x08,  0x8f,  0x0a,  0x20,  0x8a,  0xaf,  0x2d,  0x5f,  0x43,  0x10,  0x15,  0x05,  0xc7,  0xf0,  0x27,  0xdd, 
  0x0a,  0x96,  0x10,  0xa0,  0x60,  0xa0,  0x6a,  0x96,  0xa6,  0x4a,  0x81,  0x06,  0x41,  0x02,  0x55,  0xa1, 
  0x05,  0x5a,  0x42,  0x55,  0x68,  0x5a,  0x28,  0x0a,  0x16,  0x45,  0x40,  0x50,  0x92,  0xa5,  0x52,  0x88, 
  0xf0,  0x0c,  0x01,  0x6f,  0x06,  0xf1,  0xff,  0x3e,  0xff,  0x5f,  0xe5,  0x05,  0xc3,  0xf0,  0xfc,  0x3f, 
  0x0f,  0x3f,  0xc7,  0x0d,  0xbf,  0xe7,  0xfe,  0x43,  0x90,  0x0f,  0x01,  0xb3,  0x00,  0x0f,  0x00,  0xff, 
  0xf0,  0x0c,  0x01,  0x5f,  0x05,  0xf1,  0xff,  0x3d,  0xff,  0x5f,  0xd5,  0x05,  0xc3,  0xf0,  0xbe,  0xaf, 
  0x0a,  0x2a,  0x86,  0x09,  0xea,  0xb6,  0xab,  0x42,  0xd0,  0x0a,  0x01,  0xe2,  0x00,  0x0a,  0xa0,  0xaf, 
  0xf1,  0x4f,  0xe8,  0x53,  0xf8,  0x17,  0xfe,  0x07,  0xfa,  0x47,  0xfe,  0x40,  0xfe,  0x11,  0xff,  0x11, 
  0x35,  0xd3,  0xf3,  0xd3,  0x1f,  0x4e,  0x1c,  0x4e,  0x17,  0xde,  0x07,  0xd3,  0xc3,  0xd3,  0xc3,  0xfe, 
  0x40,  0x15,  0x40,  0x7f,  0x99,  0xf3,  0x57,  0xd4,  0x57,  0xca,  0x0a,  0xff,  0x94,  0x4f,  0x53,  0xff, 
  0x56,  0xaa,  0xfd,  0xaa,  0xcf,  0x4a,  0x17,  0xd0,  0x53,  0xda,  0xff,  0x6a,  0xf1,  0x1a,  0xff,  0xc6, 
  0x95,  0x6a,  0x95,  0xb0,  0xee,  0x24,  0x08,  0x09,  0x09,  0x5e,  0x5e,  0xe0,  0xea,  0x80,  0xaa,  0xc1, 
  0xa0,  0x20,  0x3a,  0xc0,  0x25,  0x90,  0x65,  0x65,  0x95,  0x7e,  0xee,  0xc3,  0xaa,  0x82,  0x8a,  0xd7, 
  0xbf,  0xc3,  0xc7,  0xc3,  0xc7,  0xd0,  0xb7,  0xd4,  0xb1,  0x34,  0xb1,  0xf4,  0xc7,  0xcf,  0xc7,  0x5c, 
  0x44,  0xff,  0x44,  0xbf,  0x01,  0xbf,  0xd1,  0xaf,  0xd0,  0xbf,  0xd4,  0x2f,  0xc5,  0x2b,  0xf1,  0x4f,   
  0x2a,  0x08,  0xa0,  0x00,  0x89,  0xc0,  0xa0,  0x0d,  0x83,  0x6a,  0xb6,  0xa9,  0xe0,  0xb2,  0xa8,  0xa0, 
  0x3f,  0x3f,  0x0f,  0xc3,  0x50,  0x5b,  0xf5,  0xff,  0xbc,  0xff,  0x4f,  0x90,  0xf9,  0x40,  0x30,  0x0f, 
  0xbe,  0xaf,  0xc3,  0xf0,  0xd5,  0x05,  0xff,  0x5f,  0xff,  0x3d,  0x05,  0xf1,  0x01,  0x5f,  0xf0,  0x0c, 
  0xa0,  0xa5,  0x00,  0x0a,  0x03,  0x62,  0x70,  0x0a,  0xa9,  0xc2,  0x6a,  0x9e,  0x8e,  0x0b,  0x0a,  0x2a, 
  0x6a,  0x84,  0x6a,  0x3a,  0xdd,  0x8a,  0xa2,  0xa6,  0x72,  0xac,  0x31,  0x0c,  0x3c,  0x3f,  0xc3,  0xf3, 
  0x8f,  0xef,  0xda,  0x7f,  0xcf,  0xbf,  0xef,  0xef,  0xbf,  0xc9,  0x2a,  0x84,  0x0a,  0x14,  0x55,  0x50, 
  0x00,  0x00,  0x50,  0x00,  0x55,  0x44,  0xf5,  0x55,  0xee,  0xfe,  0xfa,  0xab,  0xaf,  0xaa,  0xaa,  0xff, 
  0x00,  0x00,  0x00,  0x00,  0xf3,  0xc0,  0xaf,  0xfc,  0x55,  0x7f,  0x55,  0x57,  0x55,  0x57,  0x55,  0x54, 
  0x00,  0x00,  0x00,  0x00,  0x03,  0xcf,  0x3f,  0xfa,  0xfd,  0x55,  0xd5,  0x55,  0xd5,  0x55,  0x15,  0x55, 
  0x00,  0x00,  0x00,  0x05,  0x11,  0x55,  0x55,  0x5f,  0xbf,  0xbb,  0xea,  0xaf,  0xaa,  0xfa,  0xff,  0xaa, 
  0x90,  0x00,  0xd0,  0x00,  0x9c,  0x00,  0x9f,  0x00,  0xa7,  0xf0,  0xe5,  0xff,  0x95,  0x5f,  0xb5,  0x55, 
  0x55,  0x5f,  0x55,  0x5f,  0x55,  0x4f,  0x55,  0x0f,  0x50,  0x3f,  0x00,  0xef,  0x0f,  0xab,  0xaa,  0xaf, 
  0xd9,  0x14,  0x44,  0xf1,  0xb2,  0x85,  0x4a,  0x85,  0x4a,  0x78,  0x65,  0x25,  0xb2,  0xd5,  0x95,  0x95, 
  0xe0,  0xec,  0x2e,  0x59,  0x09,  0x5e,  0x09,  0x60,  0x5e,  0xc0,  0xea,  0x90,  0xaa,  0xa5,  0xea,  0xba, 
  0x81,  0x98,  0x83,  0xa0,  0x00,  0xae,  0x0c,  0x6a,  0x84,  0xe0,  0x88,  0x12,  0x62,  0x3a,  0x6a,  0xae, 
  0xa9,  0x5e,  0x8a,  0x38,  0x25,  0xa2,  0x96,  0x52,  0x94,  0x5e,  0x96,  0x1c,  0x55,  0x1f,  0x55,  0x97,   
  0xa5,  0x45,  0xaa,  0x91,  0xaa,  0xa5,  0xa4,  0x66,  0x42,  0x92,  0xaa,  0x9e,  0xbf,  0x07,  0xf1,  0x51, 
  0xff,  0xc5,  0xc5,  0x40,  0x14,  0x05,  0x50,  0x50,  0x42,  0xab,  0x2b,  0xbf,  0xef,  0xff,  0xff,  0xff, 
  0x53,  0xff,  0x01,  0x53,  0x50,  0x14,  0x05,  0x05,  0xea,  0x81,  0xfe,  0xe8,  0xff,  0xfb,  0xff,  0xff, 
  0xa2,  0xa5,  0x89,  0x55,  0xa5,  0x55,  0x66,  0x25,  0x49,  0x42,  0x79,  0x55,  0xe0,  0xfd,  0x8a,  0x8f, 
  0xba,  0xfd,  0xea,  0xa5,  0xfa,  0xb5,  0xaf,  0xf1,  0xab,  0xa1,  0xab,  0xad,  0xab,  0xb5,  0xbf,  0xf5, 
  0x7f,  0xae,  0x5a,  0xab,  0x5e,  0xaf,  0x4f,  0xfa,  0x4a,  0xea,  0x7a,  0xea,  0x5e,  0xea,  0x5f,  0xfe, 
  0x04,  0x00,  0x05,  0x40,  0x50,  0x50,  0x00,  0x05,  0x00,  0x04,  0x00,  0x04,  0x00,  0x50,  0x55,  0x00, 
  0x00,  0x00,  0x20,  0x8a,  0xa0,  0xaa,  0xaa,  0xa7,  0x7f,  0x7d,  0xd7,  0xd7,  0x7f,  0xff,  0xd7,  0xf5, 
  0x0a,  0x6a,  0x36,  0x55,  0x05,  0xaa,  0x06,  0xaa,  0x02,  0xaa,  0x01,  0xaa,  0x01,  0xaa,  0x02,  0x55, 
  0xc1,  0xb5,  0x3f,  0x9a,  0x30,  0x3a,  0xc6,  0x9a,  0xc2,  0xa2,  0xf2,  0x8c,  0x3f,  0x69,  0xf0,  0xa8, 
  0xff,  0x40,  0xff,  0x94,  0xbe,  0x05,  0xdb,  0xe1,  0xef,  0xe9,  0xef,  0xe9,  0x12,  0xe1,  0xbf,  0x81, 
  0x0f,  0xff,  0x3c,  0xa0,  0x32,  0xa8,  0xe1,  0x56,  0x59,  0x59,  0x56,  0x51,  0x57,  0xad,  0x59,  0x52, 
  0xcf,  0xc3,  0xfc,  0x3c,  0x30,  0x4c,  0x3a,  0x8d,  0x9a,  0x8a,  0xa2,  0x77,  0xac,  0xa9,  0x12,  0xa9, 
  0xa0,  0xa5,  0x00,  0x0a,  0x03,  0x62,  0x70,  0x0a,  0xa9,  0xc2,  0x6a,  0x9e,  0x8e,  0x2a,  0x0a,  0xaa, 
  0xbe,  0xaf,  0xf3,  0xf0,  0xd5,  0x05,  0xff,  0x5f,  0xff,  0x3d,  0xf5,  0xf1,  0xd1,  0x5f,  0xc0,  0x0c, 
  0x65,  0x65,  0x9a,  0xa9,  0x27,  0x01,  0xe7,  0xe5,  0x1d,  0x91,  0x53,  0x01,  0x67,  0xcd,  0x59,  0x5d,   
  0x56,  0x8a,  0x5c,  0x0a,  0x54,  0xa0,  0x52,  0xaa,  0x7a,  0xaa,  0x5a,  0xaa,  0x40,  0xaa,  0x52,  0x00, 
  0xc2,  0x56,  0xc9,  0x8c,  0xe9,  0x59,  0xe9,  0x59,  0xc9,  0x6d,  0xf0,  0x96,  0x3e,  0x55,  0x03,  0x55, 
  0x2a,  0x0f,  0x69,  0xfc,  0x32,  0x8f,  0x8a,  0x83,  0xa6,  0x93,  0xac,  0x0c,  0xa6,  0xfc,  0x5e,  0x43, 
  0x59,  0x5d,  0x67,  0xcd,  0x53,  0x01,  0x1d,  0x91,  0xe7,  0xe5,  0x27,  0x01,  0x9a,  0xa9,  0x65,  0x65, 
  0xaa,  0xaa,  0xa4,  0x52,  0x90,  0x14,  0x85,  0x05,  0xbf,  0xc1,  0xbf,  0xfc,  0xae,  0xff,  0xaa,  0xaf, 
  0x0a,  0xaa,  0x86,  0x2a,  0xea,  0xb6,  0xab,  0x42,  0xd0,  0x0a,  0x01,  0xe2,  0x00,  0x0a,  0xa0,  0xaf, 
  0xff,  0xfa,  0xfb,  0xaa,  0xea,  0xa8,  0xea,  0x81,  0xc5,  0x05,  0xd0,  0x14,  0xf4,  0x53,  0xff,  0xff, 
  0xaa,  0xaa,  0x84,  0x84,  0x9d,  0x9d,  0x9f,  0x9f,  0x9f,  0x9f,  0x9f,  0x9f,  0x93,  0x93,  0x88,  0x88, 
  0x0c,  0x00,  0xa2,  0xaa,  0x91,  0x96,  0xcc,  0xc0,  0x19,  0x19,  0x2a,  0x2a,  0x26,  0x26,  0x1d,  0x1d, 
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
  0xc0,  0x0c,  0xd1,  0x5f,  0xf5,  0xf1,  0xff,  0x3d,  0xff,  0x5f,  0xd5,  0x05,  0xf3,  0xf0,  0xbe,  0xaf, 
  0xaa,  0xaa,  0x21,  0x21,  0x67,  0x67,  0xe7,  0xe7,  0xe7,  0xe7,  0xe7,  0xe7,  0xe4,  0xe4,  0x22,  0x22, 
  0x05,  0x40,  0x14,  0x50,  0x50,  0x14,  0x50,  0x14,  0x55,  0x54,  0x50,  0x14,  0x50,  0x14,  0x00,  0x00, 
  0x55,  0x50,  0x50,  0x14,  0x50,  0x14,  0x55,  0x50,  0x50,  0x14,  0x50,  0x14,  0x55,  0x50,  0x00,  0x00, 
  0x05,  0x50,  0x14,  0x14,  0x50,  0x00,  0x50,  0x00,  0x50,  0x00,  0x14,  0x14,  0x05,  0x50,  0x00,  0x00,   
  0x55,  0x40,  0x50,  0x50,  0x50,  0x14,  0x50,  0x14,  0x50,  0x14,  0x50,  0x50,  0x55,  0x40,  0x00,  0x00, 
  0x55,  0x54,  0x50,  0x00,  0x50,  0x00,  0x55,  0x50,  0x50,  0x00,  0x50,  0x00,  0x55,  0x54,  0x00,  0x00, 
  0x55,  0x54,  0x50,  0x00,  0x50,  0x00,  0x55,  0x50,  0x50,  0x00,  0x50,  0x00,  0x50,  0x00,  0x00,  0x00, 
  0x05,  0x54,  0x14,  0x00,  0x50,  0x00,  0x50,  0x54,  0x50,  0x14,  0x14,  0x14,  0x05,  0x54,  0x00,  0x00, 
  0x50,  0x14,  0x50,  0x14,  0x50,  0x14,  0x55,  0x54,  0x50,  0x14,  0x50,  0x14,  0x50,  0x14,  0x00,  0x00, 
  0x15,  0x54,  0x01,  0x40,  0x01,  0x40,  0x01,  0x40,  0x01,  0x40,  0x01,  0x40,  0x15,  0x54,  0x00,  0x00, 
  0x00,  0x14,  0x00,  0x14,  0x00,  0x14,  0x00,  0x14,  0x00,  0x14,  0x50,  0x14,  0x15,  0x50,  0x00,  0x00, 
  0x50,  0x14,  0x50,  0x50,  0x51,  0x40,  0x55,  0x00,  0x55,  0x40,  0x51,  0x50,  0x50,  0x54,  0x00,  0x00, 
  0x14,  0x00,  0x14,  0x00,  0x14,  0x00,  0x14,  0x00,  0x14,  0x00,  0x14,  0x00,  0x15,  0x54,  0x00,  0x00, 
  0x50,  0x14,  0x54,  0x54,  0x55,  0x54,  0x55,  0x54,  0x51,  0x14,  0x50,  0x14,  0x50,  0x14,  0x00,  0x00, 
  0x50,  0x14,  0x54,  0x14,  0x55,  0x14,  0x55,  0x54,  0x51,  0x54,  0x50,  0x54,  0x50,  0x14,  0x00,  0x00, 
  0x15,  0x50,  0x50,  0x14,  0x50,  0x14,  0x50,  0x14,  0x50,  0x14,  0x50,  0x14,  0x15,  0x50,  0x00,  0x00, 
  0x55,  0x50,  0x50,  0x14,  0x50,  0x14,  0x50,  0x14,  0x55,  0x50,  0x50,  0x00,  0x50,  0x00,  0x00,  0x00, 
  0x15,  0x50,  0x50,  0x14,  0x50,  0x14,  0x50,  0x14,  0x51,  0x54,  0x50,  0x50,  0x15,  0x44,  0x00,  0x00, 
  0x55,  0x50,  0x50,  0x14,  0x50,  0x14,  0x50,  0x54,  0x55,  0x40,  0x51,  0x50,  0x50,  0x54,  0x00,  0x00, 
  0x15,  0x40,  0x50,  0x50,  0x50,  0x00,  0x15,  0x50,  0x00,  0x14,  0x50,  0x14,  0x15,  0x50,  0x00,  0x00,   
  0x15,  0x54,  0x01,  0x40,  0x01,  0x40,  0x01,  0x40,  0x01,  0x40,  0x01,  0x40,  0x01,  0x40,  0x00,  0x00, 
  0x50,  0x14,  0x50,  0x14,  0x50,  0x14,  0x50,  0x14,  0x50,  0x14,  0x50,  0x14,  0x15,  0x50,  0x00,  0x00, 
  0x50,  0x14,  0x50,  0x14,  0x50,  0x14,  0x54,  0x54,  0x15,  0x50,  0x05,  0x40,  0x01,  0x00,  0x00,  0x00, 
  0x50,  0x14,  0x50,  0x14,  0x51,  0x14,  0x55,  0x54,  0x55,  0x54,  0x54,  0x54,  0x50,  0x14,  0x00,  0x00, 
  0x50,  0x14,  0x54,  0x54,  0x15,  0x50,  0x05,  0x40,  0x15,  0x50,  0x54,  0x54,  0x50,  0x14,  0x00,  0x00, 
  0x14,  0x14,  0x14,  0x14,  0x14,  0x14,  0x05,  0x50,  0x01,  0x40,  0x01,  0x40,  0x01,  0x40,  0x00,  0x00, 
  0x55,  0x54,  0x00,  0x54,  0x01,  0x50,  0x05,  0x40,  0x15,  0x00,  0x54,  0x00,  0x55,  0x54,  0x00,  0x00, 
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x05,  0x00,  0x05,  0x00,  0x00,  0x00, 
  0x05,  0x40,  0x05,  0x40,  0x05,  0x40,  0x05,  0x00,  0x05,  0x00,  0x00,  0x00,  0x05,  0x00,  0x00,  0x00, 
  0x15,  0x50,  0x55,  0x54,  0x50,  0x14,  0x00,  0x50,  0x05,  0x40,  0x00,  0x00,  0x05,  0x40,  0x00,  0x00, 
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x05,  0x00,  0x05,  0x00,  0x14,  0x00, 
  0x00,  0x50,  0x01,  0x40,  0x05,  0x00,  0x05,  0x00,  0x05,  0x00,  0x01,  0x40,  0x00,  0x50,  0x00,  0x00, 
  0x14,  0x00,  0x05,  0x00,  0x01,  0x40,  0x01,  0x40,  0x01,  0x40,  0x05,  0x00,  0x14,  0x00,  0x00,  0x00
};

static const PROGMEM unsigned char image_pal[] = 
{
  0x52,  0x0d,  0xb5,  0x15,  0x00,  0x00,  0x00,  0x00,  0x52,  0x0d,  0xb5,  0x15,  0x00,  0x00,  0x00,  0x00, 
  0xc2,  0x2c,  0x28,  0x1e,  0x52,  0x0d,  0xb5,  0x15,  0x82,  0x20,  0xb1,  0x62,  0x65,  0x21,  0xc5,  0x19, 
  0x64,  0x1d,  0xc5,  0x21,  0x82,  0x20,  0x71,  0x56,  0xa4,  0x19,  0xe5,  0x24,  0x94,  0x5a,  0x44,  0x15, 
  0x73,  0x52,  0xc6,  0x21,  0x63,  0x11,  0xc5,  0x24,  0x08,  0x35,  0xad,  0x49,  0xa6,  0x28,  0x22,  0x18, 
  0x63,  0x20,  0xa6,  0x28,  0x4b,  0x3d,  0x01,  0x14,  0x63,  0x20,  0x4b,  0x3d,  0x01,  0x14,  0xa6,  0x28, 
  0x63,  0x20,  0xa6,  0x28,  0x01,  0x14,  0xe6,  0x38,  0x52,  0x0d,  0xb5,  0x15,  0x00,  0x00,  0x00,  0x00, 
  0x52,  0x0d,  0xb5,  0x15,  0x00,  0x00,  0x00,  0x00,  0x28,  0x1e,  0x80,  0x05,  0x52,  0x0d,  0xb5,  0x15, 
  0xb2,  0x11,  0xe0,  0x11,  0x52,  0x0d,  0x00,  0x00,  0xc2,  0x2c,  0x27,  0x1e,  0x52,  0x0d,  0xb5,  0x15, 
  0x32,  0x4a,  0xc0,  0x0d,  0x40,  0x1c,  0x25,  0x29,  0x06,  0x2d,  0x45,  0x21,  0x60,  0x20,  0x2c,  0x3a, 
  0x74,  0x52,  0x08,  0x21,  0x62,  0x0d,  0x00,  0x00,  0xc0,  0x0d,  0xe6,  0x24,  0x72,  0x52,  0x00,  0x00, 
  0x63,  0x20,  0xa6,  0x28,  0x08,  0x35,  0x01,  0x14,  0x63,  0x20,  0xa6,  0x28,  0x08,  0x35,  0x01,  0x14, 
  0x63,  0x20,  0xa6,  0x28,  0xc5,  0x3c,  0x01,  0x14,  0x63,  0x20,  0xa6,  0x28,  0x01,  0x14,  0xe6,  0x38, 
  0x08,  0x35,  0xad,  0x49,  0xa6,  0x28,  0x22,  0x18,  0x63,  0x20,  0xa6,  0x28,  0xc5,  0x3c,  0x01,  0x14, 
  0xa9,  0x59,  0xc4,  0x38,  0xa2,  0x20,  0xb3,  0x62,  0xcb,  0x41,  0x46,  0x39,  0xa1,  0x48,  0xb3,  0x62, 
  0xc1,  0x5c,  0x87,  0x69,  0x61,  0x44,  0x20,  0x2c,  0xc1,  0x5c,  0x87,  0x65,  0x61,  0x44,  0x20,  0x2c, 
  0x63,  0x20,  0xa6,  0x28,  0xc5,  0x3c,  0x01,  0x14,  0x08,  0x35,  0xad,  0x49,  0xa6,  0x28,  0x22,  0x18,   
  0x63,  0x20,  0x08,  0x35,  0x01,  0x14,  0xa6,  0x28,  0x63,  0x20,  0xa6,  0x28,  0x08,  0x35,  0x01,  0x14, 
  0x63,  0x20,  0xa6,  0x28,  0xc5,  0x3c,  0x01,  0x14,  0x63,  0x20,  0xe6,  0x38,  0x01,  0x14,  0xa6,  0x28, 
  0x61,  0x3c,  0x61,  0x48,  0x45,  0x61,  0x20,  0x2c,  0x61,  0x3c,  0x20,  0x2c,  0x61,  0x48,  0x24,  0x61, 
  0x27,  0x1e,  0xa1,  0x28,  0x52,  0x0d,  0x92,  0x1d,  0xe9,  0x15,  0x4e,  0x1d,  0x4b,  0x26,  0x60,  0x20, 
  0xe9,  0x15,  0x4e,  0x1d,  0x4b,  0x26,  0x60,  0x20,  0x27,  0x1e,  0xa1,  0x28,  0x52,  0x0d,  0x92,  0x1d, 
  0xb2,  0x5e,  0xe4,  0x34,  0x41,  0x40,  0xcb,  0x41,  0xcb,  0x41,  0xb2,  0x5e,  0xa2,  0x20,  0xe4,  0x44, 
  0x61,  0x3c,  0x45,  0x65,  0x61,  0x48,  0x20,  0x2c,  0xc1,  0x5c,  0x87,  0x65,  0x61,  0x44,  0x20,  0x2c, 
  0x63,  0x20,  0xe6,  0x38,  0x01,  0x14,  0xa6,  0x28,  0x63,  0x20,  0x4b,  0x3d,  0x01,  0x14,  0xa6,  0x28, 
  0x63,  0x20,  0x01,  0x14,  0x4b,  0x3d,  0xa6,  0x28,  0x08,  0x35,  0xad,  0x49,  0xa6,  0x28,  0x22,  0x18, 
  0x08,  0x35,  0xad,  0x49,  0xa6,  0x28,  0x22,  0x18,  0x63,  0x20,  0x4b,  0x3d,  0x01,  0x14,  0xa6,  0x28, 
  0xc2,  0x2c,  0x28,  0x22,  0x52,  0x0d,  0xb5,  0x15,  0xc2,  0x2c,  0x28,  0x22,  0x52,  0x0d,  0xb5,  0x15, 
  0x52,  0x0d,  0xb5,  0x15,  0x00,  0x00,  0x00,  0x00,  0x4b,  0x26,  0x50,  0x19,  0x81,  0x24,  0xb0,  0x15, 
  0x45,  0x22,  0xb2,  0x15,  0x52,  0x11,  0x60,  0x20,  0x61,  0x3c,  0x61,  0x48,  0x45,  0x61,  0x20,  0x2c, 
  0x61,  0x3c,  0x20,  0x2c,  0x61,  0x48,  0x24,  0x61,  0x61,  0x3c,  0x24,  0x61,  0x61,  0x48,  0x20,  0x2c, 
  0x61,  0x3c,  0x61,  0x48,  0x45,  0x61,  0x20,  0x2c,  0x63,  0x20,  0xe6,  0x38,  0x01,  0x14,  0xa6,  0x28, 
  0x63,  0x20,  0xa6,  0x28,  0xc5,  0x3c,  0x01,  0x14,  0x08,  0x35,  0x01,  0x14,  0x84,  0x24,  0xae,  0x49,   
  0xb3,  0x19,  0x46,  0x22,  0x52,  0x0d,  0x60,  0x20,  0x61,  0x3c,  0x24,  0x61,  0x61,  0x48,  0x20,  0x2c, 
  0x61,  0x3c,  0x61,  0x48,  0x45,  0x61,  0x20,  0x2c,  0x08,  0x35,  0x01,  0x14,  0x84,  0x24,  0xae,  0x49, 
  0x08,  0x35,  0xad,  0x49,  0x01,  0x14,  0x84,  0x24,  0x63,  0x20,  0xa6,  0x28,  0x01,  0x14,  0xe6,  0x38, 
  0x08,  0x35,  0xad,  0x49,  0x84,  0x24,  0x01,  0x14,  0x81,  0x50,  0x03,  0x61,  0x41,  0x38,  0xc9,  0x71, 
  0x61,  0x3c,  0x81,  0x50,  0x66,  0x69,  0x20,  0x2c,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x63,  0x20,  0xa6,  0x28,  0xc5,  0x3c,  0x01,  0x14, 
  0x81,  0x50,  0x03,  0x61,  0x41,  0x38,  0xc9,  0x71,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,   
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00, 
  0x00,  0x00,  0xff,  0x7f,  0x00,  0x00,  0x00,  0x00
};

#endif