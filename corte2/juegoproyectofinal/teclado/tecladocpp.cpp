#include "teclado.h"
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

struct termios original;

void configurarTeclado() {
    struct termios raw;
    tcgetattr(STDIN_FILENO, &original);
    raw = original;
    raw.c_lflag &= ~(ECHO | ICANON);
    tcsetattr(STDIN_FILENO, TCSANOW, &raw);
    
    // Hacer la lectura NO bloqueante
    int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
}

void restaurarTeclado() {
    tcsetattr(STDIN_FILENO, TCSANOW, &original);
}

char leerTecla() {
    char ch = 0;
    if (read(STDIN_FILENO, &ch, 1) < 0) {
        return 0; // No se presionó nada
    }
    return ch;
}
