#include <stdio.h>

int main() {
    /* Declaramos e inicializamos el arreglo de cinco enteros. */
    int datos[5] = {8, 3, 15, 6, 10};
    
    /* Variable para indexar el recorrido del arreglo. */
    int i;

    /* Mostramos el valor de cada elemento junto con su dirección física real en memoria. */
    for (i = 0; i < 5; i++) {
        /* Usamos %p para imprimir el puntero y casteamos la dirección a (void*). */
        printf("datos[%d] = %d, direccion = %p\n", i, datos[i], (void *)&datos[i]);
    }

    return 0;
}
