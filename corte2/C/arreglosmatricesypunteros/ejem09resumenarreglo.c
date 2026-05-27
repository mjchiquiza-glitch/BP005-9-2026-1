#include <stdio.h>

/* Función que analiza el arreglo y escribe múltiples salidas de retorno usando punteros de salida. */
void analizarArreglo(int *datos, int n, int *suma, int *mayor, int *menor) {
    int i;

    /* Verificamos rigurosamente que ninguna de las direcciones de memoria pasadas sea nula. */
    if (datos == NULL || suma == NULL || mayor == NULL || menor == NULL) {
        return;
    }

    /* Inicializamos los contenidos apuntados con los valores base de evaluación. */
    *suma = 0;
    *mayor = datos[0];
    *menor = datos[0];

    /* Recorremos el arreglo completo acumulando y comparando. */
    for (i = 0; i < n; i++) {
        *suma = *suma + datos[i]; /* Acumulación del valor actual en la suma */

        if (datos[i] > *mayor) {
            *mayor = datos[i];    /* Actualización del valor más grande encontrado */
        }
        if (datos[i] < *menor) {
            *menor = datos[i];    /* Actualización del valor más pequeño encontrado */
        }
    }
}

int main() {
    int datos[5] = {8, 3, 15, 6, 10};
    
    /* Variables locales que guardarán los resultados procesados en la función. */
    int suma;
    int mayor;
    int menor;

    /* Pasamos el arreglo y las direcciones de memoria correspondientes a las variables de salida. */
    analizarArreglo(datos, 5, &suma, &mayor, &menor);

    /* Mostramos en pantalla los cálculos finales obtenidos. */
    printf("Suma = %d\n", suma);
    printf("Mayor = %d\n", mayor);
    printf("Menor = %d\n", menor);

    return 0;
}
