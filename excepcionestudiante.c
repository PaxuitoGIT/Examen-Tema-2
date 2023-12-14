#include <setjmp.h>
#include <stdio.h>

jmp_buf jump_buffer;

void verificarFecha(int errorEnFormatoFecha) {
    if (errorEnFormatoFecha) {
        longjmp(jump_buffer, 1);
    }
}
