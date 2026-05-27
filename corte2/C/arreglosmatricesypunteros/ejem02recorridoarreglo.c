#include <stdio.h>

int main() {
    /* Declaramos e inicializamos un arreglo estático de cinco enteros. */
    int datos[5] = {8, 3, 15, 6, 10};
    
    /* i será el índice usado para controlar el bucle y recorrer las posiciones. */
    int i;

    /* Recorremos los índices válidos desde el 0 hasta el 4 (menor que el tamaño 5). */
    for (i = 0; i < 5; i++) {
        /* En cada vuelta se muestra el elemento correspondiente a la posición i. */
        printf("datos[%d] = %d\n", i, datos[i]);
    }

    return 0;
}
