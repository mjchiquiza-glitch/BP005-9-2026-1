#include <iostream>

void duplicarMatriz(int m[][3], int filas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < 3; j++) {
            m[i][j] = m[i][j] * 2;
        }
    }
}

void mostrarMatriz(int m[][3], int filas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int m[2][3] = { {1, 2, 3}, {4, 5, 6} };
    std::cout << "Antes:" << std::endl;
    mostrarMatriz(m, 2);
    
    duplicarMatriz(m, 2);
    
    std::cout << "Despues:" << std::endl;
    mostrarMatriz(m, 2);
    return 0;
}
