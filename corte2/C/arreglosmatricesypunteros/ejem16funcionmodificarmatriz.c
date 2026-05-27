#include <stdio.h>

void duplicarMatriz(int m[][3], int filas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < 3; j++) {
            m[i][j] = m[i][j] * 2;
        }
    }
}

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
    printf("Antes:\n");
    mostrarMatriz(m, 2);
    
    duplicarMatriz(m, 2);
    
    printf("Despues:\n");
    mostrarMatriz(m, 2);
    return 0;
}
