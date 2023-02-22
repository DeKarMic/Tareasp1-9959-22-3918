#include <iostream>
using namespace std;

class Persona
{
public:
    int nEdad;
    Persona(int edadPersona)
    {
        nEdad = edadPersona;
    }
    void pensamientoPersona()
    {
        cout<< obtenerPensamientos() <<endl;
    }
private:
    int nivelInteligencia;
    int nivelSocial;
    int nivelSuerte;
    string obtenerPensamientos()
    {
        nivelSocial = 0;
        nivelInteligencia = 10;
        nivelSuerte = 10;
        if (nivelSocial + nivelSuerte > 100)
        {
            return "Estoy pensando algo muy bueno y me causa felicidad";
        }
        else if(nivelSocial > nivelInteligencia)
        {
            return "Soy un suertudo";
        }
        else if(nEdad > 18 )
        {
            return "Soy un adulto";
        }
        else
        {
            return "No estoy pensando nada";
        }
    }
};

int main()
{
    Persona Roberto(19);
    Roberto.pensamientoPersona();
    return 0;
}
