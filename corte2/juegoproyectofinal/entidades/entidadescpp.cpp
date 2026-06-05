#include "entidades.h"

void inicializarNave(Nave* nave) {
    if (nave == nullptr) return; // 11. Verificación obligatoria de punteros
    nave->fila = FILAS - 2;      // Cerca del fondo
    nave->columna = COLUMNAS / 2;
    nave->vidas = 3;
}

void moverNave(Nave* nave, char direccion) {
    if (nave == nullptr) return;
    if (direccion == 'a' && nave->columna > 1) { // Límite izquierdo
        nave->columna--;
    } else if (direccion == 'd' && nave->columna < COLUMNAS - 2) { // Límite derecho
        nave->columna++;
    }
}

void inicializarBalas(Bala balas[], int tam) {
    for (int i = 0; i < tam; i++) {
        balas[i].activa = false;
    }
}

void dispararBala(Bala balas[], int tam, Nave* nave) {
    if (nave == nullptr) return;
    // Buscamos la primera bala inactiva en el arreglo para activarla
    for (int i = 0; i < tam; i++) {
        if (!balas[i].activa) {
            balas[i].fila = nave->fila - 1;
            balas[i].columna = nave->columna;
            balas[i].activa = true;
            break; // Solo disparamos una a la vez
        }
    }
}

void actualizarBalas(Bala balas[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (balas[i].activa) {
            balas[i].fila--; // La bala sube
            if (balas[i].fila < 0) {
                balas[i].activa = false; // Desactivar si sale del tablero
            }
        }
    }
}

void inicializarEnemigos(Enemigo enemigos[], int tam) {
    int index = 0;
    // Los organizamos en filas y columnas en la parte superior
    for (int f = 1; f <= 3; f++) {
        for (int c = 3; c < COLUMNAS - 3; c += 2) {
            if (index < tam) {
                enemigos[index].fila = f;
                enemigos[index].columna = c;
                enemigos[index].vivo = true;
                index++;
            }
        }
    }
}

void colocarNave(char tablero[FILAS][COLUMNAS], Nave* nave) {
    if (nave != nullptr) {
        tablero[nave->fila][nave->columna] = 'X'; // Carácter solicitado
    }
}

void colocarBalas(char tablero[FILAS][COLUMNAS], Bala balas[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (balas[i].activa) {
            tablero[balas[i].fila][balas[i].columna] = '|'; // Carácter solicitado 'l' o '|'
        }
    }
}

void colocarEnemigos(char tablero[FILAS][COLUMNAS], Enemigo enemigos[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (enemigos[i].vivo) {
            tablero[enemigos[i].fila][enemigos[i].columna] = '0'; // Carácter solicitado
        }
    }
}
