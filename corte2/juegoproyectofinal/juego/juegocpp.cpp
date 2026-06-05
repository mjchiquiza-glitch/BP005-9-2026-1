#include "juego.h"

void inicializarJuego(Juego* juego) {
    if (juego == nullptr) return;
    juego->puntaje = 0;
    juego->enemigosDestruidos = 0;
    juego->terminado = false;
    juego->victoria = false;
}

void detectarColisiones(Bala balas[], int tamBalas, Enemigo enemigos[], int tamEnemigos, Juego* juego) {
    if (juego == nullptr) return;
    
    for (int b = 0; b < tamBalas; b++) {
        if (!balas[b].activa) continue;
        
        for (int e = 0; e < tamEnemigos; e++) {
            if (!enemigos[e].vivo) continue;
            
            // Si la bala y el enemigo coinciden en la misma posición
            if (balas[b].fila == enemigos[e].fila && balas[b].columna == enemigos[e].columna) {
                balas[b].activa = false; // Desaparece la bala
                enemigos[e].vivo = false;  // Muere el enemigo
                juego->enemigosDestruidos++;
                juego->puntaje += 10;    // Sumar puntaje
            }
        }
    }
}

void verificarVictoria(Juego* juego) {
    if (juego == nullptr) return;
    if (juego->enemigosDestruidos >= MAX_ENEMIGOS) {
        juego->victoria = true;
        juego->terminado = true;
    }
}

void reiniciarPartida(Juego* juego, Nave* nave, Bala balas[], int tamB, Enemigo enemigos[], int tamE) {
    inicializarJuego(juego);
    inicializarNave(nave);
    inicializarBalas(balas, tamB);
    inicializarEnemigos(enemigos, tamE);
}
