#pragma once

#include "print.h"
#include "stdint.h"
#include "input_codes.h"

extern unsigned char read_port(int port);
extern void write_port(int port, unsigned char val);
extern void kb_init(void);
void keyboard_handler(void);