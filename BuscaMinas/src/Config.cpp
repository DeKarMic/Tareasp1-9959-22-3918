#include <iostream>
#include <unistd.h>
#include "Config.h"
using namespace std;

Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    this ->filasTablero = filasTablero;
    this ->columnasTablero= columnasTablero;
    this ->minasTablero = minasTablero;
    this ->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this ->vidasTablero = vidasTablero;
}
void Config::menuConfiguracion()
{
    int opciones;
	bool repetir = true;
	do
    {
        system("cls");
        cout<<"\n\n\t\tCONFIGURACION ACTUAL-" <<endl;
        cout<<"\t\t-----------------------"<<endl;
        cout<<"\t\t1. Filas del tablero"<<this->getFilasTablero()<<endl;
        cout<<"\t\t2. Columnas del Tablero"<<this->getColumnasTablero()<<endl;
        cout<<"\t\t3. Minas del tablero"<<this->getMinasTablero()<<endl;
        cout<<"\t\t4. Modo del juego"<<this->getModoDesarrolladorTablero()<<endl;
        cout<<"\t\t5. Vidas del juego"<<this->getVidasTablero()<<endl;
        cout<<"\t\t6. Regresar al menu principal"<<endl;
        cout<<"\n\t\tIngrese una opcion: ";
        cin>>opciones;
        if (opciones!=6)
        {
            cout<<"\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado;
        }
        swithc
    }

}
