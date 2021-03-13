#include "sys_globals.h"
#include "console.h"

// Keep console input on bottom line
uint8_t Console_Screen_Line = 24;
// Start column for input
uint8_t Console_Screen_Start_Column = 1;
// Current typing location X
uint8_t consoleX = 1;
// How far on a line can we go :)
uint8_t consoleMaxX = 79;
// Console buffer for the entered text and index
char consoleBuffer[250];
uint8_t consoleBufferIndex = 0;
// indicator if console should close
_Bool exit_console;



void Console_Clear_Line()
{

}


void Console_Clear_Line_With_Colours(uint8_t foreground, uint8_t background)
{

}


void Console_Run()
{
    // Clear the console buffer
    consoleBufferIndex = 0;
    consoleX = 1;
    Clear_Mem(consoleBuffer, '\0', sizeof(consoleBuffer));

    while (!exit_console)
    {
        // Get key

        // Display character or move cursor...


    }
}

void* Clear_Mem (void *dest, int val, size_t len)
{
  unsigned char *ptr = dest;
  while (len-- > 0)
    *ptr++ = val;
  return dest;
}