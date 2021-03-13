#include "sys_globals.h"
#include "input.h"


void kb_init() {
    unsigned char curmask_master = read_port (0x21);
    write_port(0x21, curmask_master & 0xFD);
}

void keyboard_handler(void)
{
    signed char keycode;

    keycode = read_port(0x60);
    print_char(keycode);
    /* Only print characters on keydown event that have
     * a non-zero mapping */
    if(keycode >= 0 && keys[keycode]) {
        //print_char(keys[keycode]);
    }

    /* Send End of Interrupt (EOI) to master PIC */
    write_port(0x20, 0x20);
}