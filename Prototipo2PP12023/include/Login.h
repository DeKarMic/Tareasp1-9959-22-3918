#ifndef JUGADOR_H
#define JUGADOR_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;

class Usuario
{
    public:
        void menuUsuario();
        void agregarUsuario();
        void mostrarUsuario();
        void modificarUsuario();
        void buscarUsuario();
        void borrarUsuario();
        bool loginUsuario();
        bool buscarLoginUsuario(string user, string passw);



    protected:

    private:
        string id;
        string nombre;
        string contrasena;

};

#endif // JUGADOR_H
