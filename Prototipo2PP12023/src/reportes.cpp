#include "reportes.h"
#include "Catalogo.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;
void reportes::rep()
{

 int opcion;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t |   REPORTES  |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t 1. VENTAS"<<endl;
	cout<<"\t\t\t 2. PERDIDAS"<<endl;
	cout<<"\t\t\t 3. DEVOLUCIONES"<<endl;
	cout<<"\t\t\t 4. COMPRA"<<endl;
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

