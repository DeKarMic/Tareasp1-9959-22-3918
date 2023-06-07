#include <iostream>
#include "menuempleados.h"
using namespace std;

void menuEmpleados::empleados(){
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tEmpleados" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Ingreso" << endl;
        cout << "\t2. Consulta" << endl;
        cout << "\t3. Impresion" << endl;
        cout << "\t4. Eliminacion" << endl;
        cout << "\t5. Modificar" << endl;
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

        case 3:
            system("pause>nul");
            break;

        case 4:
            system("pause>nul");
            break;

        case 5:
            system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}
