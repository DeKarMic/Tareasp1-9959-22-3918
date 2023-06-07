#include <iostream>
#include "menuprocesos.h"
using namespace std;
void menuProcesos::procesos()
{
     int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tProcesos" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Salarios" << endl;
        cout << "\t2. Bitacora" << endl;
        cout << "\t0. Regresar" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("pause>nul");
            break;

        case 2:
           system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}
