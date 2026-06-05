#include <iostream>
#include <unistd.h> // Para usleep (controlar velocidad del juego)
#include "tablero.h"
#include "entidades.h"
#include "juego.h"
#include "teclado.h"
#include "memoria.h"

int main() {
    // Inicialización de datos
    char tablero[FILAS][COLUMNAS];
    Nave miNave;
    Bala listadoBalas[MAX_BALAS];
    Enemigo listadoEnemigos[MAX_ENEMIGOS];
    Juego estadoJuego;

    inicializarNave(&miNave);
    inicializarBalas(listadoBalas, MAX_BALAS);
    inicializarEnemigos(listadoEnemigos, MAX_ENEMIGOS);
    inicializarJuego(&estadoJuego);

    configurarTeclado();

    // Bucle principal del juego
    while (!estadoJuego.terminado) {
        // 1. Leer Entrada del Teclado
        char tecla = leerTecla();
        
        if (tecla == '9' || tecla == 'q') { // Salir ordenadamente
            estadoJuego.terminado = true;
        } else if (tecla == 'a' || tecla == 'd') {
            moverNave(&miNave, tecla);
        } else if (tecla == 'f') {
            dispararBala(listadoBalas, MAX_BALAS, &miNave);
        } else if (tecla == 'm') {
            restaurarTeclado(); // Pausa y muestra memoria
            mostrarReporteMemoria(MAX_BALAS, MAX_ENEMIGOS);
            configurarTeclado();
        }

        // 2. Actualizar Estados
        actualizarBalas(listadoBalas, MAX_BALAS);
        detectarColisiones(listadoBalas, MAX_BALAS, listadoEnemigos, MAX_ENEMIGOS, &estadoJuego);
        verificarVictoria(&estadoJuego);

        // 3. Dibujar Escena
        limpiarTablero(tablero);
        colocarNave(tablero, &miNave);
        colocarBalas(tablero, listadoBalas, MAX_BALAS);
        colocarEnemigos(tablero, listadoEnemigos, MAX_ENEMIGOS);
        mostrarTablero(tablero);

        // UI Inferior (Tal cual tu video)
        std::cout << "Invasores ASCII - Version final de prueba\n";
        std::cout << "Controles: a = izquierda, d = derecha, f = disparar, q = salir\n";
        std::cout << "Puntaje: " << estadoJuego.puntaje << "\n";
        std::cout << "Enemigos destruidos: " << estadoJuego.enemigosDestruidos << " / " << MAX_ENEMIGOS << "\n";

        if (estadoJuego.victoria) {
            std::cout << "¡VICTORIA! Presione 'r' para reiniciar o '9' para salir.\n";
            restaurarTeclado();
            char r = std::cin.get();
            if (r == 'r') {
                reiniciarPartida(&estadoJuego, &miNave, listadoBalas, MAX_BALAS, listadoEnemigos, MAX_ENEMIGOS);
                configurarTeclado();
            } else {
                estadoJuego.terminado = true;
            }
        }

        // Delay para que no corra infinitamente rápido (aprox 30 FPS)
        usleep(33000); 
    }

    restaurarTeclado();
    std::cout << "\nGracias por jugar Invasores.\n";
    return 0;
}
