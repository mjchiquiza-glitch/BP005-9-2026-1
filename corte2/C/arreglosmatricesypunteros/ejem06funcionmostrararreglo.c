#include <stdio.h>

/* Función que recibe la dirección base del arreglo y su tamaño 'n' de forma explícita. */
void mostrarArreglo(int datos[], int n) {
    int i;
    
    /* Recorremos los n elementos recibidos en el canal original. */
    for (i = 0; i < n; i++) {
        printf(" %d ", datos[i]);
    }
    printf("\n");
}

int main() {
    /* Declaramos e inicializamos nuestro arreglo de enteros. */
    int datos[5] = {8, 3, 15, 6, 10};

    /* Invocamos la función pasando el arreglo y el tamaño 5 como parámetro requerido. */
    mostrarArreglo(datos, 5);

    return 0;
}
