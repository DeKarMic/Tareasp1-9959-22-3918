#include <iostream>
#include <unistd.h>
#include "Login.h"
#include "Catalogo.h"
#include "reportes.h"
using namespace std;

int main()
{
 bool accesoUsuario;
    Usuario usuarioRegistrado;
    accesoUsuario = usuarioRegistrado.loginUsuario();
    if (accesoUsuario)
        {
    int opciones;
    bool repetir = true;
    do
    {

  system("cls");
        //imprime en pantalla
        cout << "\n\n\t\t|-----------------------|"<< endl;
        cout << "\t\t|     MENU GENERAL       |" << endl;
        cout << "\t\t|-----------------------|"<< endl;
        cout << "\n\t\t1. CATALOGO" << endl;
        cout << "\t\t2. REPORTES" << endl;
        cout << "\t\t3. USUARIOS" << endl;
        cout << "\t\t4. Salir del Juego" << endl;
         cout << "\n\t\t-----------------------------"<< endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;
 switch (opciones)
        {
        case 1:
            {
                Catalogo catalogo;
                catalogo.iniciar();
            }
                system("pause");
                break;
        case 2:
            {
               reportes reportes;
               reportes.rep();
            }
        case 3:
            {

              	Usuario usuario;
                usuario.menuUsuario();

                //Se crea una pausa
                system("pause");
                break;
            }
            case 4:
                repetir = false;
                break;
                }
    }while (repetir);}
        return 0;
}
