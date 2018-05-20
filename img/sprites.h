/*
 * Exported with nin10kit v1.7
 * Invocation command was nin10kit --mode=sprites --transparent=cf3dff --bpp=8 --for_bitmap sprites bird_1.png bird_2.png bird_3.png top_pipe.png bottom_pipe.png ui_dialog.png ui_start.png ui_gameover.png ui_newbest.png 
 * Time-stamp: Sunday 04/08/2018, 21:27:36
 * 
 * Image Information
 * -----------------
 * bird_1.png 32@16
 * bird_2.png 32@16
 * bird_3.png 32@16
 * top_pipe.png 32@32
 * bottom_pipe.png 32@32
 * ui_dialog.png 40@24
 * ui_start.png 32@8
 * ui_gameover.png 32@16
 * ui_newbest.png 32@16
 * Transparent color: (207, 61, 255)
 * 
 * All bug reports / feature requests are to be filed here https://github.com/TricksterGuy/nin10kit/issues
 */

#ifndef SPRITES_H
#define SPRITES_H

#define SPRITES_PALETTE_TYPE (1 << 13)
#define SPRITES_DIMENSION_TYPE (1 << 6)

extern const unsigned short sprites_palette[14];
#define SPRITES_PALETTE_SIZE 28
#define SPRITES_PALETTE_LENGTH 14

extern const unsigned short sprites[2912];
#define SPRITES_SIZE 5824
#define SPRITES_LENGTH 2912

#define BIRD_1_PALETTE_ID (0 << 12)
#define BIRD_1_SPRITE_SHAPE (1 << 14)
#define BIRD_1_SPRITE_SIZE (2 << 14)
#define BIRD_1_ID 512

#define BIRD_2_PALETTE_ID (0 << 12)
#define BIRD_2_SPRITE_SHAPE (1 << 14)
#define BIRD_2_SPRITE_SIZE (2 << 14)
#define BIRD_2_ID 528

#define BIRD_3_PALETTE_ID (0 << 12)
#define BIRD_3_SPRITE_SHAPE (1 << 14)
#define BIRD_3_SPRITE_SIZE (2 << 14)
#define BIRD_3_ID 544

#define TOP_PIPE_PALETTE_ID (0 << 12)
#define TOP_PIPE_SPRITE_SHAPE (0 << 14)
#define TOP_PIPE_SPRITE_SIZE (2 << 14)
#define TOP_PIPE_ID 560

#define BOTTOM_PIPE_PALETTE_ID (0 << 12)
#define BOTTOM_PIPE_SPRITE_SHAPE (0 << 14)
#define BOTTOM_PIPE_SPRITE_SIZE (2 << 14)
#define BOTTOM_PIPE_ID 592

#define UI_DIALOG_PALETTE_ID (0 << 12)
#define UI_DIALOG_SPRITE_SHAPE (1 << 14)
#define UI_DIALOG_SPRITE_SIZE (2 << 14)
#define UI_DIALOG_ID 624

#define UI_START_PALETTE_ID (0 << 12)
#define UI_START_SPRITE_SHAPE (1 << 14)
#define UI_START_SPRITE_SIZE (1 << 14)
#define UI_START_ID 654

#define UI_GAMEOVER_PALETTE_ID (0 << 12)
#define UI_GAMEOVER_SPRITE_SHAPE (1 << 14)
#define UI_GAMEOVER_SPRITE_SIZE (2 << 14)
#define UI_GAMEOVER_ID 662

#define UI_NEWBEST_PALETTE_ID (0 << 12)
#define UI_NEWBEST_SPRITE_SHAPE (1 << 14)
#define UI_NEWBEST_SPRITE_SIZE (2 << 14)
#define UI_NEWBEST_ID 678

#endif

