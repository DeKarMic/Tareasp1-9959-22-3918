#include "Usuario.h"
#include "menus.h"
#include "menucatalogos.h"
#include "menuempleados.h"
#include "menusalarios.h"
#include "menunominas.h"
#include "menuprocesos.h"
using namespace std;

void Usuario::registroUsuario()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------- Registro de Usuarios ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa una ID de Usuario     : "<<endl;
	cin>>idUsuario;
	cout<<"\t\t\tIngresa tu Nombre de Usuario  : ";
	cin>> nombreUsuario;
	cout<<"\t\t\tIngresa tu Contrasena         : ";
	cin>> contraUsuario;
	file.open("Usuario.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< idUsuario <<std::left<<std::setw(15)<< nombreUsuario <<std::left<<std::setw(15)<< contraUsuario << "\n";
	file.close();
}

bool Usuario::loginUsuario() //Login de Usuario
{
    string usuario, contra;
    int contador=0;
    bool ingresa=false;
    do{
        system("cls");
        cout<<"--------------------------"<<endl;
        cout<<"AUTENTICACION DE USUARIOS "<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"Nombre de usuario: ";
        getline(cin, usuario);
        cout<<"\ncontrasena: ";
        char caracter;
        caracter= getch();
        contra="";
        while (caracter !=13)
        {
            if(caracter !=8)
            {
                contra.push_back(caracter);
                cout<<"*";
            } else
            {
                if (contra.length() > 0)
                {
                    cout<<"\b \b";
                    contra = contra.substr(0, contra.length()-1);
                }
            }
            caracter = getch();
        }

        if (buscarLoginUsuario(usuario, contra)){   //Pide los parametro de la funcion BuscarLoginJugador para iniciar sesión
            ingresa=true;
        } else {
            cout<<"\nEl usuario y/o contrasena son incorrectos"<<endl;
            cin.get();
            contador++;
        }
    } while (ingresa==false && contador<3);
    if (ingresa==false){
        cout<<"\nLo siento, no puede ingresar al sistema, sus contrasenas son invalidas o agoto intentos"<<endl;
        cin.get();

    }
    else {
        cout<<"\n=== Bienvenidos al Sistema ==="<<endl;
        int optEscoger;
  bool repetir = true;
    do
    {
    cout << "\t\t\t--------------------------\n";
    cout << "\t\t\t| Bienvenido al Sistema |";
    cout << "\n\t\t\t--------------------------"<<endl;

    cout << "\t\t\t1. Menu bodega"<<endl;
    cout << "\t\t\t2. Menu catalogos"<<endl;
    cout << "\t\t\t3. Menu nominas"<<endl;
    cout << "\t\t\t4. Menu procesos"<<endl;
    cout << "\t\t\t5. Salir del Sistema" << endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3] - [4] - [5]|";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {
        case 1:{
        bodega bodega;
        bodega.menuBodegas();
                break;
    }

    case 2:{
        Catalogos Catalogos;
        Catalogos.catalogo();
    break;
    }
        case 3:{
        menuNominas menuNominas;
        menuNominas.nominas();
        break;
        }
        case 4:{
        menuProcesos menuProcesos;
        menuProcesos.procesos();
        break;
        }
    case 5:{
             exit(0);
        break;
    }
    default:
        cout << "Opcion invalida... Intente otra vez...";

    }
    }while(repetir);
    }
}
bool Usuario::buscarLoginUsuario(string user, string passw) //Funcion que busca al jugador dentro de los archivos secuenciales. Enviale los parametro a LoginJugador
{
    system ("cls");
    fstream file;
    int found=0;
    file.open("Usuario.txt", ios::in);
    if (!file)
    {
        cout<<"\n---------------------------Datos del Usuario buscado----------------------"<<endl;
        cout<<"\n\t\t\tNo hay informacion...";
    }
    else
    {
        file >> idUsuario >> nombreUsuario >> contraUsuario;
        while(!file.eof())
        {
            if(user==nombreUsuario)
            {
                if (passw == contraUsuario)
                {
                    found++;
                }
            }
            file >> idUsuario >> nombreUsuario >> contraUsuario;
        }
        if(found==0)
        {
            return false;
        }
        else
            return true;

        file.close();}
}
