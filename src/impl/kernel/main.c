#include "sys_globals.h"
#include "print.h"
#include "frame.h"
#include "console.h"

void kernel_main() {
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLUE);
    print_clear();

    print_str("Welcome to PoloOS, a 64-bit kernel, [BSOD EDITION]");
    draw_frame(0, 1, 79, 18, PRINT_COLOR_YELLOW, PRINT_COLOR_LIGHT_BLUE, " Code Editor [untitled.asm]");
    draw_frame(0, 20, 79, 4, PRINT_COLOR_WHITE, PRINT_COLOR_GREEN, " Console ");
    Console_Run();
}
