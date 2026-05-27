#include <iostream>

int main() {
    int datos[5] = {8, 3, 15, 6, 10};

    /* p apunta al primer elemento del arreglo. */
    int *p = datos;
    int i;

    /* Aplicamos aritmética de punteros para el recorrido del flujo. */
    for (i = 0; i < 5; i++) {
        /* *(p + i) calcula la dirección aritmética correspondiente y accede al contenido. */
        std::cout << "Elemento " << i << " = " << *(p + i) << std::endl;
    }

    return 0;
}
