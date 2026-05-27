#include <iostream>

int main() {
    int datos[3] = {10, 20, 30};
    int *p = datos;

    /* Visualización comparativa de las cuatro expresiones equivalentes en C++. */
    std::cout << "datos[1] = " << datos[1] << std::endl;
    std::cout << "*(datos + 1) = " << *(datos + 1) << std::endl;
    std::cout << "*(p + 1) = " << *(p + 1) << std::endl;
    std::cout << "p[1] = " << p[1] << std::endl;

    return 0;
}
