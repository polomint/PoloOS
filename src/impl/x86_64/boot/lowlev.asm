extern keyboard_handler
global read_port
global write_port
global load_idt
global keyboard_handler_int

section .text

keyboard_handler_int:
    cld
    call keyboard_handler
    iretd

load_idt:
    mov edx, [esp + 4]
    lidt [edx]
    sti 
    ret

read_port:
    mov edx, [esp + 4]
    in al, dx
    ret

write_port:
    mov edx, [esp + 4]
    mov al, [esp + 8]
    out dx, al
    ret