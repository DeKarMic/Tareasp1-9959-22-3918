#include "Login.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

void Usuario::menuUsuario()
{
    int opcion;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t |   Menu para agregar un Usuario  |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Usuario"<<endl;
	cout<<"\t\t\t 2. Despliegue Usuarios"<<endl;
	cout<<"\t\t\t 3. Modificar Usuario"<<endl;
	cout<<"\t\t\t 4. Busca Usuario"<<endl;
	cout<<"\t\t\t 5. Borra Usuario"<<endl;
	cout<<"\t\t\t 6. Salir del Menu"<<endl;

	cout<<"\t\t\t---------------------------------------"<<endl;

	cout<<"Ingresa una Opcion: ";
    cin>>opcion;

    switch(opcion)
    {
    case 1:
        agregarUsuario();
		break;
	case 2:
		mostrarUsuario();
		break;
	case 3:
		modificarUsuario();
		break;
	case 4:
		buscarUsuario();
		break;
	case 5:
		borrarUsuario();
		break;
	case 6:
		exit(0);
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		}
	getch();
    }while(opcion!= 6);

}

 void Usuario::agregarUsuario()
{
	system("cls");
	fstream file;
	cout<<"\n-----------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------- Agregar Usuario ----------------------------"<<endl;
	cout<<"\t\t\tIngresa ID del Usuario     : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre del Usuario : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa la Contraseña      : ";
	cin>>contrasena;

	file.open("Usuarios.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::left<<std::setw(15)<< contrasena << "\n";
	file.close();
}

 void Usuario::mostrarUsuario()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Detalles de Usuario -------------------------"<<endl;
	file.open("Usuario.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre >> contrasena;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del Usuario: "<<id<<endl;
			cout<<"\t\t\t Nombre del Usuario: "<<nombre<<endl;
			cout<<"\t\t\t Contraseña del Usuario: "<<contrasena<<endl;
			file >> id >> nombre >> contrasena;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay Usuarios...";
		}
	}
	file.close();
}

 void Usuario::modificarUsuario()
{
	system("cls");
	fstream file,file1;
	string Usuario_id;
	int found=0;
	cout<<"\n------------------------- \"Modificacion Detalles Usuario\" -------------------------"<<endl;
	file.open("Usuario.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese ID del Usuario que quiere modificar: ";
		cin>>Usuario_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> nombre >> contrasena;
		while(!file.eof())
		{
			if(Usuario_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::left<<std::setw(15)<< contrasena << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del Usuario: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre del Usuario: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese la contraseña del Usuario: ";
				cin>>contrasena;
                file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::left<<std::setw(15)<< contrasena << "\n";
				found++;
			}
			file >> id >> nombre >> contrasena;

		}
		file1.close();
		file.close();
		remove("usuario.txt");
		rename("Record.txt","Jugador.txt");
	}
}

 void Usuario::buscarUsuario(){
	system("cls");
	fstream file;
	int found=0;
	file.open("Usuario.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del Usuario buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string Usuario_id;
		cout<<"\n-------------------------Datos del Usuario buscado------------------------"<<endl;
		cout<<"\nIngrese Id del Usuario que quiere buscar: ";
		cin>>Usuario_id;
		file >> id >> nombre >> contrasena;
		while(!file.eof())
		{
			if(Usuario_id==id)
			{
				cout<<"\n\n\t\t\t ID Usuario: "<<id<<endl;
				cout<<"\t\t\t Nombre Usuario: "<<nombre<<endl;
				cout<<"\t\t\t Contraseña Usuario: "<<contrasena<<endl;
				found++;
			}
			file >> id >> nombre >> contrasena;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Usuario no encontrado...";
		}
		file.close();
	}
}

 void Usuario::borrarUsuario()
{
	system("cls");
	fstream file,file1;
	string Usuario_id;
	int found=0;
	cout<<"\n-------------------------Detalles del Usuario a Borrar-------------------------"<<endl;
	file.open("Usuario.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Usuario que quiere borrar: ";
		cin>>Usuario_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> nombre >> contrasena;
		while(!file.eof())
		{
			if(Usuario_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< contrasena << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado del Usuario exitoso";
			}
			file >> id >> nombre  >> contrasena;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Usuario no encontrado...";
		}
		file1.close();
		file.close();
		remove("Usuario.txt");
		rename("Record.txt","Usuario.txt");
	}
}

bool Usuario::loginUsuario()
{
    string usuario, contra;
    int contador=0;
    bool ingresa=false;
    do{
        system("cls");
        cout<<"--------------------------"<<endl;
        cout<<"AUTENTICACION DE ADMINISTRADOR "<<endl;
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

        if (buscarLoginUsuario(usuario, contra)){
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
    } else {
        cout<<"\n=== Bienvenido ==="<<endl;
        cin.get();
    }
    return ingresa;
}

bool Usuario::buscarLoginUsuario(string user, string passw)
{
    fstream file;
    int found=0;
    file.open("Usuario.txt", ios::in);
    if (!file)
    {
        cout<<"\n-------------------------------------------------"<<endl;
        cout<<"\n\t\t\t";
    }
    else
    {
        file >> id >> nombre >> contrasena;
        while(!file.eof())
        {
            if(user==nombre)
            {
                if (passw == contrasena)
                {
                    found++;
                }
            }
            file >> id >> nombre >> contrasena;
        }
        if(found==0)
        {
            return false;
        }
        else
            return true;

        file.close();}
}
