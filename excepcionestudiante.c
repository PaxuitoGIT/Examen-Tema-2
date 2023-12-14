#include <setjmp.h>
#include <stdio.h>

jmp_buf jump_buffer;

void verificarFecha(int errorEnFormatoFecha) {
    if (errorEnFormatoFecha) {
        longjmp(jump_buffer, 1);
    }
}

int main() {
    if (setjmp(jump_buffer) != 0) {
        fprintf(stderr, "Error: Fecha inválida.\n");
        return 1;
    }

    int errorEnFormatoFecha = 1;
    verificarFecha(errorEnFormatoFecha);

    return 0;
}