#include "sys_globals.h"
#include "print.h"
#include "frame.h"
//#include "console.h"
#include "input.h"

void kernel_main() {
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLUE);
    print_clear();

    print_str("Welcome to PoloOS, a 64-bit kernel, [BSOD EDITION]");
    draw_frame(0, 1, 79, 18, PRINT_COLOR_BLACK, PRINT_COLOR_MAGENTA, " Code Editor [untitled.asm]");
    draw_frame(0, 20, 79, 4, PRINT_COLOR_WHITE, PRINT_COLOR_GREEN, " Console ");
    draw_frame(5, 5, 5, 5, PRINT_COLOR_WHITE, PRINT_COLOR_GREEN, " This is a test frame ");
    kb_init();
    while (1)
    {
        keyboard_handler();
    }
    //Console_Run();
}
