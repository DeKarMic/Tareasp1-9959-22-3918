#include "menucatalogos.h"
#include <iostream>
#include "menuempleados.h"
using namespace std;

void Catalogos::catalogo()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tCatalogos" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Empleados" << endl;
        cout << "\t2. Sucursales - Departamentos" << endl;
        cout << "\t3. Proveedores" << endl;
        cout << "\t0. Regresar" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            {
                menuEmpleados menuEmpleados;
                menuEmpleados.empleados();
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
        case 0:
            {
            repetir = false;
            break;
        }
        }
    } while (repetir);
    }
