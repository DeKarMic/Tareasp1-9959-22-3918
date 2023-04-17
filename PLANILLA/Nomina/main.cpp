#include <iostream>
#include "Login.h"
#include "menuprincipal.h"

using namespace std;

int menuprincipal()
{
int opcion;
    bool repetir = true;

    do {
        system("cls");

        // Menu
        cout << "\n\tMenu Principal" << endl;
        cout << " " << endl;
        cout << "\t 1. Agregar colaborador" << endl;
        cout << "\t 2. Eliminar colaborador" << endl;
        cout << "\t 3. Modificar nomina" << endl;
        cout << "\t 4. Imprimir nomina " << endl;
        cout << "\t 5. Consultar por pantalla" << endl;
        cout << "\t 0. Finalizar el programa" << endl;

        cout << " " << endl;

        cout << "\t Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // opción 1

                system("pause>nul"); // Pausa
                break;

            case 2:
                // opción 2

                system("pause>nul"); // Pausa
                break;

            case 3:
                // opción 3

                system("pause>nul"); // Pausa
                break;

            case 4:
                // opción 4

                system("pause>nul"); // Pausa
                break;

            case 5:
                // opción 5

                system("pause>nul"); // Pausa
                break;

            case 0:
            	repetir = false;
            	break;
        }
    } while (repetir);

    cin.get();
    return 0;
}
