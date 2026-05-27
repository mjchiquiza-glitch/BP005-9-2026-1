#include <iostream>

int main() {
    int m[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int *p = &m[0][0];
    int i, j;
    int columnas = 3;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << *(p + (i * columnas + j)) << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
