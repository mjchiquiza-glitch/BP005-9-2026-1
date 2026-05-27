#include <stdio.h>

int main() {
    /* Declaramos la matriz estática con sus dimensiones definidas. */
    int m[2][3] = { {1, 2, 3}, {4, 5, 6} };
    
    /* Variables de control para filas (i) y columnas (j). */
    int i;
    int j;

    /* Ciclo exterior para administrar el movimiento a través de las filas. */
    for (i = 0; i < 2; i++) {
        /* Ciclo interior para administrar el movimiento dentro de las columnas de la fila i. */
        for (j = 0; j < 3; j++) {
            printf(" %d ", m[i][j]);
        }
        printf("\n"); /* Salto de línea estético al terminar de procesar una fila completa */
    }

    return 0;
}
