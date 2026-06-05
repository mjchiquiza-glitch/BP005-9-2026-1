#ifndef ENTIDADES_H
#define ENTIDADES_H
#include "tablero.h"

// 8.1 Estructura para la nave
struct Nave {
    int fila;
    int columna;
    int vidas;
};

// 8.2 Estructura para las balas
struct Bala {
    int fila;
    int columna;
    bool activa;
};

// 8.3 Estructura para los enemigos
struct Enemigo {
    int fila;
    int columna;
    bool vivo;
};

// Constantes para los arreglos
const int MAX_BALAS = 10;
const int MAX_ENEMIGOS = 36; // Como se ve en tu video (0 / 36)

// Funciones obligatorias (Uso de punteros)
void inicializarNave(Nave* nave);
void moverNave(Nave* nave, char direccion);
void inicializarBalas(Bala balas[], int tam);
void dispararBala(Bala balas[], int tam, Nave* nave);
void actualizarBalas(Bala balas[], int tam);
void inicializarEnemigos(Enemigo enemigos[], int tam);

// Funciones para colocar entidades en el tablero gráfico
void colocarNave(char tablero[FILAS][COLUMNAS], Nave* nave);
void colocarBalas(char tablero[FILAS][COLUMNAS], Bala balas[], int tam);
void colocarEnemigos(char tablero[FILAS][COLUMNAS], Enemigo enemigos[], int tam);

#endif
