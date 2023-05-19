#include <iostream>
#include "jugador.h"
//#include "celdas.h"
//#include "mapajuego.h"

using namespace std;

jugador::jugador()
{
    x = 1;
    y = 1;
}

void jugador::manejoControles()
{
    char ingresoUsuario;
    cin >> ingresoUsuario;

    switch(ingresoUsuario)
    {
        case 'a':
        x = x-1;
        cout << "El jugador se mueve hacia la izquierda"<< endl;
        break;
        case 'd':
        x = x+1;
        cout << "El jugador se mueve hacia la derecha" << endl;
        break;
        case 's':
        y = y-1;
        cout << "El jugador se mueve hacia abajo" << endl;
        break;
        case 'w':
        y = y+1;
        cout << "El jugador se mueve hacia arriba" << endl;
        break;
        case 'x':
            cout << "Juego Terminado" << endl;
            exit(0);
        }
    cout <<"El jugador esta en las cordenadas -->" <<"x = "<< x << "y = "<< y << endl;
}
