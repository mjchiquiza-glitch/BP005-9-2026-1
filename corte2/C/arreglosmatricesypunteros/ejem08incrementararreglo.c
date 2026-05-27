#include <stdio.h>

/* Función que altera los datos originales de la memoria mediante el uso de su dirección base. */
void incrementarTodos(int *datos, int n) {
    int i;

    /* Validación del puntero para prevenir fallos de segmentación. */
    if (datos == NULL) {
        return;
    }

    /* Incrementamos directamente los valores en las celdas de memoria originales. */
    for (i = 0; i < n; i++) {
        datos[i] = datos[i] + 1;
    }
}

/* Función auxiliar compartida para visualizar el estado del arreglo. */
void mostrarArreglo(int *datos, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf(" %d ", datos[i]);
    }
    printf("\n");
}

int main() {
    int datos[5] = {8, 3, 15, 6, 10};

    /* Imprimimos el estado inicial antes de realizar la alteración. */
    printf("Antes: ");
    mostrarArreglo(datos, 5);

    /* Modificamos el arreglo original desde la función pasando su puntero. */
    incrementarTodos(datos, 5);

    /* Imprimimos el estado final para validar el cambio reflejado. */
    printf("Despues: ");
    mostrarArreglo(datos, 5);

    return 0;
}
