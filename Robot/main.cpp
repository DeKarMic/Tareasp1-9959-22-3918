#include <iostream>
#include "jugador.h"
//#include "celdas.h"
//#include "mapajuego.h"

using namespace std;
int main()
{
    //aplicativo elaborado en el curso de programación y universidad Mariano galvez de Guatemala
    bool finJuego = false;
    jugador heroe;
    while(finJuego == false)
    {
        heroe.manejoControles();
    }
    return 0;
}
