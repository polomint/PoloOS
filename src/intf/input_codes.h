#pragma once

// #define KEY_ESC     0x01
// #define KEY_1       0x02
// #define KEY_2       0x03
// #define KEY_3       0x04
// #define KEY_4       0x05
// #define KEY_5       0x06
// #define KEY_6       0x07
// #define KEY_7       0x08
// #define KEY_8       0x09
// #define KEY_9       0x0A
// #define KEY_0       0x0B
// #define KEY_DASH    0x0C
// #define KEY_EQUALS  0x0D
// #define KEY_BACKSPACE   0x0E
// #define KEY_TAB     0x0F
// #define KEY_Q       0x10
// #define KEY_W       0x11
// #define KEY_E       0x12
// #define KEY_R       0x13
// #define KEY_T       0x14
// #define KEY_Y       0x15   
// #define KEY_U       0x16
// #define KEY_I       0x17
// #define KEY_O       0x18
// #define KEY_P       0x19
// #define KEY_LSQUARE_BRACKET       0x1A
// #define KEY_RSQUARE_BRACKET        0x1B
// #define KEY_ENETER  0x1C
// #define KEY_L_CRTL  0x1D
// #define KEY_A       0x1E     

unsigned char keys[128] =
{
    0,  27, '1', '2', '3', '4', '5', '6', '7', '8',     /* 9 */
  '9', '0', '-', '=', '\b',     /* Backspace */
  '\t',                 /* Tab */
  'q', 'w', 'e', 'r',   /* 19 */
  't', 'y', 'u', 'i', 'o', 'p', '[', ']', '\n', /* Enter key */
    0,                  /* 29   - Control */
  'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';',     /* 39 */
 '\'', '`',   0,                /* Left shift */
 '\\', 'z', 'x', 'c', 'v', 'b', 'n',                    /* 49 */
  'm', ',', '.', '/',   0,                              /* Right shift */
  '*',
    0,  /* Alt */
  ' ',  /* Space bar */
    0,  /* Caps lock */
    0,  /* 59 - F1 key ... > */
    0,   0,   0,   0,   0,   0,   0,   0,
    0,  /* < ... F10 */
    0,  /* 69 - Num lock*/
    0,  /* Scroll Lock */
    0,  /* Home key */
    0,  /* Up Arrow */
    0,  /* Page Up */
  '-',
    0,  /* Left Arrow */
    0,
    0,  /* Right Arrow */
  '+',
    0,  /* 79 - End key*/
    0,  /* Down Arrow */
    0,  /* Page Down */
    0,  /* Insert Key */
    0,  /* Delete Key */
    0,   0,   0,
    0,  /* F11 Key */
    0,  /* F12 Key */
    0,  /* All other keys are undefined */
};