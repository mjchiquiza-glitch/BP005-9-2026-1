#include <stdio.h>
#include <stdlib.h> /* Requerido para el uso de funciones de memoria dinámica (malloc y free) */

int main() {
    int n;     /* Almacenará la dimensión del arreglo provista por el usuario */
    int i;     /* Índice de iteración */
    int *datos = NULL; /* Puntero inicializado explícitamente en NULL */

    printf("Cuantos enteros desea guardar: ");
    if (scanf("%d", &n) != 1) return 1;

    /* Asignación dinámica de bloques de memoria usando malloc para 'n' enteros. */
    datos = (int *)malloc(n * sizeof(int));

    /* Verificación crítica de asignación del puntero del sistema. */
    if (datos == NULL) {
        printf("No se pudo reservar memoria.\n");
        return 1;
    }

    /* Entrada de datos por parte del usuario. */
    for (i = 0; i < n; i++) {
        printf("Ingrese datos[%d]: ", i);
        if (scanf("%d", &datos[i]) != 1) {
            free(datos);
            return 1;
        }
    }

    /* Impresión secuencial de los datos leídos. */
    printf("Datos ingresados: ");
    for (i = 0; i < n; i++) {
        printf(" %d ", datos[i]);
    }
    printf("\n");

    /* Liberación segura de la memoria asignada en el Heap para evitar fugas. */
    free(datos);
    datos = NULL; /* Eliminamos el puntero colgante colocándolo en NULL */

    return 0;
}
