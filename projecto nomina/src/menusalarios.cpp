#include <iostream>
#include "menusalarios.h"
using namespace std;
void menuSalarios::salarios()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tSalarios" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Profesion" << endl;
        cout << "\t2. Puesto" << endl;
        cout << "\t3. Cargos" << endl;
        cout << "\t4. Abonos" << endl;
        cout << "\t5. Bancos" << endl;
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
