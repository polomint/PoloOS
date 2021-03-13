#include "sys_globals.h"
#include "frame.h"

struct CharItem* screenBuffer = (struct CharItem*) 0xb8000;

//
// Draw a window frame at specified location of a specified size
// INPUTS: x, y location, width and height
// OUTPUT: 
//   0 = Successful
//   1 = X coord invalid
//   2 = Y coord invalid
//   3 = width invalid
//   4 = height invalid
//   5 = invalid colour
//   255 = unknown error
//
int draw_frame(size_t x, size_t y, size_t width, size_t height, 
    uint8_t foreground, uint8_t background, char* title)
{
    // Check that the X coordinate is valid
    if (x < 0 || x >= NUM_COLS)
    {
        return INVALID_X;
    }
    // Check that the Y coordinate is valid
    if (y < 0 || y >= NUM_ROWS)
    {
        return INVALID_Y;
    }
    // Check that the width is ok
    if ((x + width < 0) || (x + width > NUM_COLS))
    {
        return INVALID_WIDTH;
    }
    // Check that the height is ok
    if ((y + height < 0) || (y + height > NUM_ROWS))
    {
        return INVALID_HEIGHT;
    }
    // Check colour is fine
    if (background < PRINT_COLOR_BLACK || background > PRINT_COLOR_WHITE)
    {
        return INVALID_COLOUR;
    }
    if (foreground < PRINT_COLOR_BLACK || foreground > PRINT_COLOR_WHITE)
    {
        return INVALID_COLOUR;
    }


    // All good, so let's draw this crap...

    // Top left
    uint8_t color = foreground | background << 4;
    struct CharItem cTopLeft = (struct CharItem) {
        character: topleft,
        color: color,
    };
    screenBuffer[x + NUM_COLS * y] = cTopLeft;

    // Top right
    struct CharItem cTopRight = (struct CharItem) {
        character: topright,
        color: color,
    };
    screenBuffer[(x + width) + NUM_COLS * y] = cTopRight;

    // Bottom left
    struct CharItem cBottomLeft = (struct CharItem) {
        character: bottomleft,
        color: color,
    };
    screenBuffer[x + NUM_COLS * (y + height)] = cBottomLeft;

    // Bottom right
    struct CharItem cBottomRight = (struct CharItem) {
        character: bottomright,
        color: color,
    };
    screenBuffer[(x + width) + NUM_COLS * (y + height)] = cBottomRight;

    // Horizontal
    struct CharItem cHorizontal = (struct CharItem) {
        character: horizontal,
        color: color,
    };
    for (size_t col = x + 1; col < (x + width); col++)
    {
        screenBuffer[col + NUM_COLS * y] = cHorizontal;
        screenBuffer[col + NUM_COLS * (y + height)] = cHorizontal;
    }

    // Vertical
    struct CharItem cVertical = (struct CharItem) {
        character: vertical,
        color: color,
    };
    for (size_t row = y + 1; row < (y + height); row++)
    {
        screenBuffer[x + NUM_COLS * row] = cVertical;
        screenBuffer[(x + width) + NUM_COLS * row] = cVertical;
    }

    // Now add the title
    // point to the second char in the top line of the frame
    uint16_t bufferInitialOffset = x + (NUM_COLS * y) + 2; 
    struct CharItem cTitleCharacter = (struct CharItem) {
        character: ' ',
        color: color,
    };
    for (size_t index = 0; 1; index++)
    {
        char character = (uint8_t) title[index];
        cTitleCharacter.character = character;

        if (character == '\0') 
        {
            return 0;  // quick quit as end of string is reached and nothing else is to be done.
        }

        screenBuffer[bufferInitialOffset] = cTitleCharacter;
        bufferInitialOffset++;
    }

    return FRAME_SUCCESS;
}


