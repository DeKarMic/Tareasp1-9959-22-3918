#include <iostream>
#include <unistd.h>
#include "Juego.h"
#include "Config.h"

using namespace std;

int main()
{
    const int FILASTABLERO =5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const int MODODESARROLLADOR =true;
    const int VIDASTABLERO = 3;
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);

    srand(getpid());
	int opciones;
	bool repetir = true;
	do
    {
        system("cls");
        cout<<"\n\n\t\tBUSCA MINAS - Menu-" <<endl;
        cout<<"\t\t-----------------------"<<endl;
        cout<<"\t\t1. Configuracion del juego"<<endl;
        cout<<"\t\t2. Iniciar el juego"<<endl;
        cout<<"\t\t3. Salir del juego"<<endl;
        cout<<"\n\t\tIngrese una opcion: ";
        cin>>opciones;
        switch (opciones)
        {
        case 1:
            {
                configuracionJuego.menuConfiguracion();
                break;
            }
        case 2:
            {
                Juego Juego(Tablero(), )
                Juego.iniciar
            }
        }
    }

	int filasTablero = 9;
	int columnasTablero = 9;
	int minasEnTablero = 5;
	bool modoDesarrollador = true;

	Juego juego(Tablero(filasTablero, columnasTablero, modoDesarrollador), minasEnTablero);
	juego.iniciar();
    return 0;
}
