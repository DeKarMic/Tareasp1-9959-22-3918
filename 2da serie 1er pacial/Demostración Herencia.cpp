#include <iostream>
using namespace std;

class Pikachu
{
public:
    Pikachu(int CantidadPoder, int CantidadVida, string Nombre)
    {
        nCantidadPoder = CantidadPoder;
        nCantidadVida = CantidadVida;
        nNombre = Nombre;
    }
    int getVida()
    {
        return nCantidadVida;
    }
    string getnNombre()
    {
        return nNombre;
    }
    int getPoder()
    {
        return nCantidadPoder;
    }

protected:
    int nCantidadPoder, nCantidadVida;
    string nNombre;
};

class Pichu: public Pikachu
{
public:
    Pichu(int CantidadPoder, int CantidadVida, string Nombre): Pikachu(CantidadPoder, CantidadVida, Nombre)
    {
        nCantidadPoder = CantidadPoder +1;
        nCantidadVida = CantidadVida +1;
        nNombre = Nombre;
    }

};

class Raichu: public Pikachu
{
public:
    Raichu(int CantidadPoder, int CantidadVida, string Nombre): Pikachu(CantidadPoder, CantidadVida, Nombre)
    {
        nCantidadPoder = CantidadPoder +100;
        nCantidadVida = CantidadVida +1;
        nNombre = Nombre;
    }
};

int main()
{
    Pikachu Pikachu(11, 100, "Pikachu");
    cout<<"El Nombre del Pokemon es: "<<Pikachu.getnNombre()<<endl;
    cout<<"La cantidad de vida del Pokemon "<< Pikachu.getnNombre()<<" es: "<< Pikachu.getVida()<<endl;
    cout<<"La cantidad de Poder del Pokemon "<< Pikachu.getnNombre()<<" es: "<<Pikachu.getPoder()<<endl;
    Pichu Pichu(11, 100, "Pichu");
    cout<<"El Nombre del Pokemon es: "<<Pichu.getnNombre()<<endl;
    cout<<"La cantidad de vida del Pokemon "<< Pichu.getnNombre()<<" es: "<< Pichu.getVida()<<endl;
    cout<<"La cantidad de Poder del Pokemon "<< Pichu.getnNombre()<<" es: "<<Pichu.getPoder()<<endl;
     Raichu Raichu(11, 100, "Raichu");
    cout<<"El Nombre del Pokemon es: "<<Raichu.getnNombre()<<endl;
    cout<<"La cantidad de vida del Pokemon "<< Raichu.getnNombre()<<" es: "<< Raichu.getVida()<<endl;
    cout<<"La cantidad de Poder del Pokemon "<< Raichu.getnNombre()<<" es: "<<Raichu.getPoder()<<endl;
    return 0;
}
