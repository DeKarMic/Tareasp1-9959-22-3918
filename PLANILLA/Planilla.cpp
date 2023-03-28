#include <iostream>
using namespace std;

int main(  ){
    struct datoPersona
    {
        string nombre;
        int codigoEmpleado;
        int apellido;
        float sueldo;
        string direccion;
        char puesto;
        int telefono;

    };
    datoPersona *persona = new datoPersona[10];
    persona.nombre ="Juan ";
    persona.codigoEmpleado ='J ';
    persona.edad = 20;
    persona.nota = 7.5;
    cout<<"La edad de la persona 1 es: " << persona.edad<<endl;
    datoPersona persona1;
    persona1.nombre ="Carlos";
    persona1.inicial ='C';
    persona1.edad = 23;
    persona1.nota = 10;
    cout<<"La edad de la persona 2 es: " << persona1.edad<<endl;
	return 0;
}
