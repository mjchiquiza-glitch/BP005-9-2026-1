#include <stdio.h>

/* Es obligatorio definir la dimension de las columnas */
void mostrarMatriz(int m[][3], int filas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m[2][3] = { {1, 2, 3}, {4, 5, 6} };
    mostrarMatriz(m, 2);
    return 0;
}
