//
// Engine file/class
// Created by blane on 4/3/18.
//

 #include "myLib.h"

volatile unsigned short *videoBuffer; // might want this to be global

void initialize() {
	// set up video buffer, points to the first pixel on the screen
	 videoBuffer = (volatile unsigned short *)0x6000000;

   // set display mode and background
   REG_DISPCNT = MODE3 | BG2_ENABLE;
}
