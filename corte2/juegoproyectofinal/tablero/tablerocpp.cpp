#include "tablero.h"
#include <iostream>

void limpiarTablero(char tablero[FILAS][COLUMNAS]) {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            // Ponemos bordes laterales o espacios vacíos
            if (c == 0 || c == COLUMNAS - 1) {
                tablero[f][c] = '|'; 
            } else {
                tablero[f][c] = ' ';
            }
        }
    }
}

void mostrarTablero(char tablero[FILAS][COLUMNAS]) {
    // Limpia la pantalla en Linux (equivalente a un "cls" conceptual)
    std::cout << "\033[2J\033[1;1H"; 
    
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            std::cout << tablero[f][c];
        }
        std::cout << "\n";
    }
}
