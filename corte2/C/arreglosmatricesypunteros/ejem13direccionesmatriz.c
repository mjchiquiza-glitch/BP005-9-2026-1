#include <stdio.h>

int main() {
    /* Declaramos una matriz de 2 filas y 3 columnas. */
    int m[2][3] = { {1, 2, 3}, {4, 5, 6} }; 
    int i, j;

    /* Mostramos la direccion de cada elemento para ver la continuidad. */
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("m[%d][%d] = %d, direccion = %p\n", i, j, m[i][j], (void *)&m[i][j]);
        }
    }
    return 0;
}
