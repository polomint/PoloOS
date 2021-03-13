#pragma once

#include "sys_globals.h"


// Clear the console line
void Console_Clear_Line();

// Clear the console line using specified colours
void Console_Clear_Line_With_Colours(uint8_t foreground, uint8_t background);

// Start the console
void Console_Run();

// Clear memory
void* Clear_Mem (void *dest, int val, size_t len);




