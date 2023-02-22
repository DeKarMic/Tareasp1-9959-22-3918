#include <iostream>
using namespace std;

class Mago
{
public:
    Mago(int CantidadPoder, int CantidadVida, string Nombre)
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

class MagoHielo: public Mago
{
public:
    MagoHielo(int CantidadPoder, int CantidadVida, string Nombre): Mago(CantidadPoder, CantidadVida, Nombre)
    {
        nCantidadPoder = CantidadPoder +1;
        nCantidadVida = CantidadVida +1;
        nNombre = Nombre;
    }

};

class MagoFuego: public Mago
{
public:
    MagoFuego(int CantidadPoder, int CantidadVida, string Nombre): Mago(CantidadPoder, CantidadVida, Nombre)
    {
        nCantidadPoder = CantidadPoder +100;
        nCantidadVida = CantidadVida +1;
        nNombre = Nombre;
    }
};

int main()
{
    Mago Gandalf(11, 100, "Gandalf");
    cout<<"El Nombre del mago es: "<<Gandalf.getnNombre()<<endl;
    cout<<"La cantidad de vida del mago "<< Gandalf.getnNombre()<<" es: "<< Gandalf.getVida()<<endl;
    cout<<"La cantidad de Poder del mago "<< Gandalf.getnNombre()<<" es: "<<Gandalf.getPoder()<<endl;
    MagoHielo Dumblerdore(11, 100, "Dumblerdore");
    cout<<"El Nombre del mago es: "<<Dumblerdore.getnNombre()<<endl;
    cout<<"La cantidad de vida del mago "<< Dumblerdore.getnNombre()<<" es: "<< Dumblerdore.getVida()<<endl;
    cout<<"La cantidad de Poder del mago "<< Dumblerdore.getnNombre()<<" es: "<<Dumblerdore.getPoder()<<endl;
     MagoFuego Harry(11, 100, "Harry");
    cout<<"El Nombre del mago es: "<<Dumblerdore.getnNombre()<<endl;
    cout<<"La cantidad de vida del mago "<< Harry.getnNombre()<<" es: "<< Harry.getVida()<<endl;
    cout<<"La cantidad de Poder del mago "<< Harry.getnNombre()<<" es: "<<Harry.getPoder()<<endl;
    return 0;
}
