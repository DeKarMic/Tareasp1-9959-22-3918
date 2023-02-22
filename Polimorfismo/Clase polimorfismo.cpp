#include <iostream>
using namespace std;
class Animal
{
public:
    void SonidoAnimal()
    {
        cout<<"Los animales hacen sonidos"<<endl;
    }
};
class Cerdo: public Animal
{
public:
    void SonidoAnimal()
    {
        cout<<"El cerdo dice: oing oing"<<endl;
    }
};
class Perro: public Animal
{
public:
    void SonidoAnimal()
    {
        cout<<"El perro dice: Guau Guau"<<endl;
    }
};

int main()
{
    Animal miAnimal;
    Cerdo miCerdo;
    Perro miPerro;

    miAnimal.SonidoAnimal();
    miCerdo.SonidoAnimal();
    miPerro.SonidoAnimal();

    return 0;
}
