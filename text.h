// Tonc basic text library
#ifndef TRUE
#include "blegant3_lib.h"
#endif

typedef struct tagTXT_BASE
{
    u16 *dst0;      // writing buffer starting point
    u32 *font;      // pointer to font used
     u8 *chars;     // character map (chars as in letters, not tiles)
     u8 *cws;       // char widths (for VWF)
     u8  dx,dy;     // letter distances
    u16  flags;     // for later
     u8  extra[12]; // ditto
} TXT_BASE;

extern TXT_BASE __txt_base, *gptxt;

void bm16_puts(u16 * dst, const char *str, u16 clr, int pitch);

// Bitmap text interface. Goes in text.h
inline void m3_puts(int r, int c, const char *str, u16 clr) {
  bm16_puts((u16 *) &videoBuffer[OFFSET(r, c, 240)], str, clr, 240);
}

// void m4_puts(int x, int y, const char *str, u8 clrid)
// {    bm8_puts(&vid_page[(y*240+x)>>1], str, clrid);   }
//
// void m5_puts(int x, int y, const char *str, COLOR clr)
// {    bm16_puts(&vid_page[y*160+x], str, clr, 160);    }
