#pragma once

#include <stdint.h>
#include <stddef.h>

// screen details
const static size_t NUM_COLS = 80;
const static size_t NUM_ROWS = 25;

// frame drawing chars
const static size_t topleft = 0xc9;
const static size_t topright = 0xbb;
const static size_t bottomleft = 0xc8;
const static size_t bottomright = 0xbc;
const static size_t horizontal = 0xcd;
const static size_t vertical = 0xba;

// structure that represents each character on the screen
struct CharItem {
    uint8_t character;
    uint8_t color;
};

// colours enum, doh!
enum {
    PRINT_COLOR_BLACK = 0,
	PRINT_COLOR_BLUE = 1,
	PRINT_COLOR_GREEN = 2,
	PRINT_COLOR_CYAN = 3,
	PRINT_COLOR_RED = 4,
	PRINT_COLOR_MAGENTA = 5,
	PRINT_COLOR_BROWN = 6,
	PRINT_COLOR_LIGHT_GRAY = 7,
	PRINT_COLOR_DARK_GRAY = 8,
	PRINT_COLOR_LIGHT_BLUE = 9,
	PRINT_COLOR_LIGHT_GREEN = 10,
	PRINT_COLOR_LIGHT_CYAN = 11,
	PRINT_COLOR_LIGHT_RED = 12,
	PRINT_COLOR_PINK = 13,
	PRINT_COLOR_YELLOW = 14,
	PRINT_COLOR_WHITE = 15,
};

// frames error/success enum
enum {
    FRAME_SUCCESS = 0,
    INVALID_X = 1,
    INVALID_Y = 2,
    INVALID_WIDTH = 3,
    INVALID_HEIGHT = 4,
    INVALID_COLOUR = 5,
    UNKNOWN_ERROR = 255,
};
