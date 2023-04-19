#include "Catalogo.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;
void Catalogo::iniciar()
{

 int opcion;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t |   Catalogo  |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t 1. ALTAS"<<endl;
	cout<<"\t\t\t 2. BAJAS"<<endl;
	cout<<"\t\t\t 3. MODIFICACIONES"<<endl;
	cout<<"\t\t\t 4. CONSULTA"<<endl;
	cout<<"\t\t\t 5. Salir del Menu"<<endl;

	cout<<"\t\t\t---------------------------------------"<<endl;
    cout<<"Ingresa una Opcion: ";
    cin>>opcion;

    switch(opcion)
    {
	case 5:
		exit(0);
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		}
	getch();
    }while(opcion!= 5);
}
