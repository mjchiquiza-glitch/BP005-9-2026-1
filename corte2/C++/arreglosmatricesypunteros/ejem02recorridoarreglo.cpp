#include <iostream>

int main() {
    /* Inicialización de los datos del arreglo de enteros. */
    int datos[5] = {8, 3, 15, 6, 10};
    
    /* Variable para indexar el recorrido. */
    int i;

    /* Iteración cíclica controlada por índices acotados. */
    for (i = 0; i < 5; i++) {
        /* Mostramos dinámicamente cada iteración con el flujo std::cout. */
        std::cout << "datos[" << i << "] = " << datos[i] << std::endl;
    }

    return 0;
}
