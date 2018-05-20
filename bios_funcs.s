.text
.code 16

@ div
.align 2
.global Div
.thumb_func

Div:
    swi     0x06
    bx      lr
