#include <iostream>

int main() {
    int n;
    int i;
    /* Puntero inicializado de forma correcta y segura con nullptr en C++. */
    int *datos = nullptr; 

    std::cout << "Cuantos enteros deseja guardar: ";
    if (!(std::cin >> n)) return 1;

    /* Reservamos memoria dinámica en el Heap de C++ con el operador new[]. */
    datos = new int[n];

    /* Leemos los valores ingresados por consola por el usuario. */
    for (i = 0; i < n; i++) {
        std::cout << "Ingrese datos[" << i << "]: ";
        if (!(std::cin >> datos[i])) {
            delete[] datos;
            return 1;
        }
    }

    /* Mostramos los valores alojados en memoria dinámica. */
    std::cout << "Datos ingresados: ";
    for (i = 0; i < n; i++) {
        std::cout << datos[i] << " ";
    }
    std::cout << std::endl;

    /* Liberación explícita obligatoria con delete[] para arreglos dinámicos en C++. */
    delete[] datos;
    datos = nullptr; /* Borramos el puntero colgante para evitar desbordamiento */

    return 0;
}
