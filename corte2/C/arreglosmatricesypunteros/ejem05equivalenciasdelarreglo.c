#include <stdio.h>

int main() {
    /* Declaramos un arreglo de tres enteros para validar la sintaxis de punteros. */
    int datos[3] = {10, 20, 30};

    /* Asignamos la dirección base del arreglo a nuestro puntero de enteros. */
    int *p = datos;

    /* Demostramos que las cuatro notaciones en C son equivalentes en bajo nivel. */
    printf("datos[1] = %d\n", datos[1]);       /* Notación tradicional indexada */
    printf("*(datos + 1) = %d\n", *(datos + 1)); /* Aritmética directa sobre el nombre base */
    printf("*(p + 1) = %d\n", *(p + 1));       /* Aritmética sobre el puntero asignado */
    printf("p[1] = %d\n", p[1]);               /* Indexación sobre el propio puntero */

    return 0;
}
