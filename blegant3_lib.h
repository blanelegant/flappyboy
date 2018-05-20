// --- This only exists because the homework rules say we can't modify mylib ---
#include "myLib.h"

// pixel offset calculation
#define OFFSET(row, col, pitch) (((row) * (pitch)) + col)

// below is modified from: http://coranac.com/tonc/text/objbg.htm#ssec-img-cbb

// define s-tile 8x8@4bpp: 32bytes; 8 ints
typedef struct { u32 data[8];  } TILE, TILE4;
// define d-tile: double-sized tile (8bpp)
typedef struct { u32 data[16]; } TILE8;
// define tile block: 32x16 tiles, 16x16 d-tiles
typedef TILE  CHARBLOCK[512];
typedef TILE8 CHARBLOCK8[256];

#define tile_mem  ( (CHARBLOCK*)0x06000000) // NOTE:
#define tile8_mem ((CHARBLOCK8*)0x06000000)

// I think this name fits better
#define OAM_MEM (SPRITEMEM);

void waitForVBlank();
void txt_init_std();
void m3_puts(int x, int y, const char *str, u16 clr);
void drawImage3(int r, int c, int width, int height, const u16* image);
int key_down(u8 button);

// struct defines. Example:
// struct S {
//     int x;
// };
//
// typedef struct S S;

// -- set up game object structs -----------------------------------------------

// our flappy boy
struct bird {
  int x; // x-position
  int y; // y-position
  int dx; // x-velocity
  int dy; // y-velocity
};

struct pipe {
  int x; // 10 pixels past the right edge of the screen
  int type; // 0 for below, 1 for above
};
