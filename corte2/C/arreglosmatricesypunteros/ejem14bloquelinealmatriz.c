#include <stdio.h>

int main() {
    int m[2][3] = { {1, 2, 3}, {4, 5, 6} };
    /* Apuntamos a la direccion inicial de la matriz */
    int *p = &m[0][0];
    int i, j;
    int columnas = 3;

    /* Accedemos usando la formula: i * columnas + j */
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d ", *(p + (i * columnas + j)));
        }
        printf("\n");
    }
    return 0;
}
