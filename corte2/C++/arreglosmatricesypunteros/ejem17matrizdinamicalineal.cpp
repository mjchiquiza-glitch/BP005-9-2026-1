#include <iostream>

int main() {
    int filas, columnas;
    int i, j;
    int *matriz = nullptr;

    std::cout << "Ingrese numero de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese numero de columnas: ";
    std::cin >> columnas;

    /* En C++ usamos new[] para el bloque lineal */
    matriz = new int[filas * columnas];

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            matriz[i * columnas + j] = i + j;
        }
    }

    std::cout << "Matriz dinamica generada:" << std::endl;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            std::cout << matriz[i * columnas + j] << " ";
        }
        std::cout << std::endl;
    }

    /* En C++ se libera con delete[] */
    delete[] matriz;
    matriz = nullptr;
    return 0;
}
