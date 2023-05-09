#include "menus.h"
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;
void menuBodega::bodegas();
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tProductos - Bodega" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Ingreso" << endl;
        cout << "\t2. Consulta" << endl;
        cout << "\t3. Impresion" << endl;
        cout << "\t4. Eliminacion" << endl;
        cout << "\t0. Regresar" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            {

            system("pause>nul");
            break;
            }
        case 2:
            {


           system("pause>nul");
            break;
            }
        case 3:
            {


            system("pause>nul");
            break;
            }
        case 4:
            {
            system("pause>nul");
            break;
            }
        case 0:
            {
            repetir = false;
            break;
        }
        }
    } while (repetir);
}
