#include <iostream>

int main() {
    int m[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int i;
    int j;

    /* Ciclos anidados para recorrer filas y columnas de manera secuencial. */
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl; /* Salto de línea por fila de la matriz */
    }

    return 0;
}
