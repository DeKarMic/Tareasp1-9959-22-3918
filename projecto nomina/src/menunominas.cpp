#include <iostream>
#include "menunominas.h"
#include "menuempleados.h"
#include "menusalarios.h"
using namespace std;
void menuNominas::nominas()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tNominas" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Sucursales" << endl;
        cout << "\t2. Empleados" << endl;
        cout << "\t3. Proveedores" << endl;
        cout << "\t4. Productos" << endl;
        cout << "\t5. Salarios" << endl;
        cout << "\t0. Regresar" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:{
            system("pause>nul");
            break;
        }
        case 2:{
            menuEmpleados ();
            break;
        }
        case 3:{
            system("pause>nul");
            break;
        }
        case 4:{
            system("pause>nul");
            break;
        }
        case 5:{
            menuSalarios menuSalarios;
            menuSalarios.salarios();
            break;
        }
        case 0:{
            repetir = false;
            break;
        }
        }
    } while (repetir);
}
