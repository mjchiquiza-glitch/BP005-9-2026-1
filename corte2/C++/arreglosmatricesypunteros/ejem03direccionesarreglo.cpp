#include <iostream>

int main() {
    int datos[5] = {8, 3, 15, 6, 10};
    int i;

    /* Mostramos las direcciones reales de memoria contigua en C++. */
    for (i = 0; i < 5; i++) {
        /* static_cast<const void*> convierte la dirección de memoria para asegurar que cout la imprima en hexadecimal */
        std::cout << "datos[" << i << "] = " << datos[i] 
                  << ", direccion = " << static_cast<const void *>(&datos[i]) 
                  << std::endl;
    }

    return 0;
}
