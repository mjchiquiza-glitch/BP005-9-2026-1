#include <stdio.h>

int main() {
    /* Declaramos e inicializamos el arreglo estático de cinco enteros. */
    int datos[5] = {8, 3, 15, 6, 10};

    /* El nombre del arreglo 'datos' actúa como la dirección del primer elemento; se asigna a p. */
    int *p = datos;
    
    /* Variable de control para el ciclo de recorrido. */
    int i;

    /* Recorremos el arreglo aplicando aritmética de punteros en lugar de indexación directa. */
    for (i = 0; i < 5; i++) {
        /* *(p + i) calcula la dirección del elemento i posiciones adelante de p y extrae su valor. */
        printf("Elemento %d = %d\n", i, *(p + i));
    }

    return 0;
}
