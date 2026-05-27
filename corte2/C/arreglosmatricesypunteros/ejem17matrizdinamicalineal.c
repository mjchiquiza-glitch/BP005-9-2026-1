#include <stdio.h>
#include <stdlib.h>

int main() {
    int filas, columnas;
    int i, j;
    int *matriz = NULL;

    printf("Ingrese numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese numero de columnas: ");
    scanf("%d", &columnas);

    /* Reservamos memoria contigua para el bloque lineal total */
    matriz = (int *)malloc(filas * columnas * sizeof(int));
    if (matriz == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    /* Llenamos la matriz dinamica usando la formula lineal */
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            matriz[i * columnas + j] = i + j; /* Valor de ejemplo */
        }
    }

    /* Imprimimos la matriz */
    printf("Matriz dinamica generada:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf(" %d ", matriz[i * columnas + j]);
        }
        printf("\n");
    }

    /* Liberamos memoria */
    free(matriz);
    matriz = NULL;
    return 0;
}
