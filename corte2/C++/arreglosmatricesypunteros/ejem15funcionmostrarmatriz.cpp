#include <iostream>

void mostrarMatriz(int m[][3], int filas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
