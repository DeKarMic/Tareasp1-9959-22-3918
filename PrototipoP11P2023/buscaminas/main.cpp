#include <iostream>
#include <unistd.h>
#include <Juego.h>

using namespace std;

int main();
{
    srand(getpid());
    int filasTablero =9;
    int columnasTablero =9;
    int minasEnTablero = 5;
    bool modoDesarrollador = true;

    Juego Juego(Tablero(filasTablero, columnasTablero, modoDesarrollador), minasEnTablero);
    Juego.iniciar();
    return 0;
}
