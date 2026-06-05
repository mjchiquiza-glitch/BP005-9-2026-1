#ifndef JUEGO_H
#define JUEGO_H
#include "entidades.h"

// 8.4 Estructura obligatoria para el estado del juego
struct Juego {
    int puntaje;
    int enemigosDestruidos;
    bool terminado;
    bool victoria;
};

void inicializarJuego(Juego* juego);
void detectarColisiones(Bala balas[], int tamBalas, Enemigo enemigos[], int tamEnemigos, Juego* juego);
void verificarVictoria(Juego* juego);
void reiniciarPartida(Juego* juego, Nave* nave, Bala balas[], int tamB, Enemigo enemigos[], int tamE);

#endif
