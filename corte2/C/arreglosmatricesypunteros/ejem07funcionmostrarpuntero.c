#include <stdio.h>

/* Recibe el arreglo usando explícitamente la sintaxis de puntero *datos y su tamaño n. */
void mostrarArreglo(int *datos, int n) {
    int i;

    /* Verificación obligatoria de seguridad para asegurar que la dirección de memoria no sea nula. */
    if (datos == NULL) {
        printf("El arreglo no es valido.\n");
        return;
    }

    /* Imprimimos el contenido recorriendo las posiciones a través del puntero. */
    for (i = 0; i < n; i++) {
        printf(" %d ", datos[i]);
    }
    printf("\n");
}

int main() {
    int datos[5] = {8, 3, 15, 6, 10};

    /* Enviamos el arreglo y su tamaño numérico exacto. */
    mostrarArreglo(datos, 5);

    return 0;
}
