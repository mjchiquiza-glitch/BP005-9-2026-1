#include "memoria.h"
#include <iostream>

void mostrarReporteMemoria(int tamBalas, int tamEnemigos) {
    std::cout << "\n=== REPORTE DE MEMORIA (sizeof) ===\n";
    std::cout << "Tamano de Estructura Nave:    " << sizeof(Nave) << " bytes\n";
    std::cout << "Tamano de Estructura Bala:    " << sizeof(Bala) << " bytes\n";
    std::cout << "Tamano de Estructura Enemigo: " << sizeof(Enemigo) << " bytes\n";
    std::cout << "Tamano de Estructura Juego:   " << sizeof(Juego) << " bytes\n";
    std::cout << "Tamano aprox. Arreglo Balas:  " << sizeof(Bala) * tamBalas << " bytes\n";
    std::cout << "Tamano aprox. Arreglo Enemigos:" << sizeof(Enemigo) * tamEnemigos << " bytes\n";
    std::cout << "Tamano de la Matriz Tablero:  " << sizeof(char) * FILAS * COLUMNAS << " bytes\n";
    std::cout << "===================================\n";
    std::cout << "Presione cualquier tecla para continuar...";
    std::cin.get(); // Pausa informativa
}
