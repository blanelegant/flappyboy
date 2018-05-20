// initialize text subsystem
#include <stddef.h>
// #include"myLib.h"
#include "blegant3_lib.h"
#include "text.h"
#include "tonc_font.h"

TXT_BASE __txt_base; // Main TXT_BASE instance
TXT_BASE *gptxt= &__txt_base; // and a pointer to it

u8 txt_lut[256]; // character table

// Basc initializer for text state
void txt_init_std()
{
  gptxt->dx = gptxt->dy = 8; // set letter distances

  gptxt->dst0 =  (u16*)videoBuffer; // set starting point for write buffer
  gptxt->font = (u32*)toncfontTiles; // get bitmap font
  gptxt->chars = txt_lut; // set text look up table pointer
  gptxt->cws = NULL;

  // for each of our 96 possible chars
  // create its lookup code
  int ii;
  for (ii = 0; ii < 96; ii++)
      gptxt->chars[ii + 32] = ii; // txt_lut[char + 32] = char
}

// // Pseudo code for xxx_puts
// void xxx_puts(int x, int y, const char *str, [[more]])
// {
//     [[find real writing start]]
//     while(c=*str++)     // iterate through string
//     {
//         switch(c)
//         {
//         case [[special chars ('\n' etc)]]:
//             [[handle special]]
//         case [[normal chars]]:
//             [[xxx_putc(destination pointer, lut[c])]]
//             [[advance destination]]
//         }
//     }
// }

// puts a string of characters on the display in bitmap16 mode
void bm16_puts(u16 *dst, const char *str, u16 clr, int pitch)
{
    int c, x = 0;

    while((c=*str++) != 0)      // (1) for each char in string
    {
        // (2) real char/control char switch
        if(c == '\n')       // line break
        {
            dst += pitch*gptxt->dy;
            x=0;
        }
        else                // normal character
        {
            int ix, iy;
            u32 row;
            // (3) point to glyph; each row is one byte
            u8 *pch= (u8*)&gptxt->font[2*gptxt->chars[c]];
            for(iy=0; iy<8; iy++)
            {
                row= pch[iy];
                // (4) plot pixels until row-byte is empty
                for(ix=x; row>0; row >>= 1, ix++)
                    if(row&1)
                        dst[iy*pitch+ix]= clr;
            }
            x += gptxt->dx;
        }
    }
}
