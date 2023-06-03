#include <iostream>
#include "jugador.h"
#include "celdamapa.h"
#include "mapa.h"

using namespace std;
int main()
{
    //aplicativo elaborado en el curso de programación y universidad Mariano galvez de Guatemala
    bool finJuego = false;
    jugador heroe;
    mapa mapaDeJuego;
    while(finJuego == false)
    {
        heroe.manejoControles();
        mapaDeJuego.setJugadorEnCelda(heroe.getX(), heroe.getY());
        mapaDeJuego.dibujaMapa();
    }
    return 0;
}
