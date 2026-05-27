#include <iostream>

/* Pasamos el arreglo a través de un puntero explícito de enteros y su dimensión. */
void mostrarArreglo(int *datos, int n) {
    int i;

    /* Validación recomendada de C++ moderna usando nullptr en lugar de NULL. */
    if (datos == nullptr) {
        std::cout << "El arreglo no es valido." << std::endl;
        return;
    }

    for (i = 0; i < n; i++) {
        std::cout << datos[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int datos[5] = {8, 3, 15, 6, 10};

    /* Invocación pasándole el tamaño exacto del objeto. */
    mostrarArreglo(datos, 5);

    return 0;
}
