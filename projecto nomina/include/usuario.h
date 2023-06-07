#ifndef USUARIO_H
#define USUARIO_H
//Librerias
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;

class Usuario  //Clase Usuario para Login
{
	public:
		void registroUsuario();
		bool loginUsuario();
        bool buscarLoginUsuario(string user, string passw);

    private:
    string idUsuario, nombreUsuario, contraUsuario;
};

#endif // USUARIO_H
