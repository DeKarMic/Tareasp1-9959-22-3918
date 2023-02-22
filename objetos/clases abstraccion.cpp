#include <iostream>
using namespace std;
class Perro
{
public:
    string mLadrido;
    Perro(string Nombre, string tipoLadrido)
    {
        mLadrido = tipoLadrido;
        nNombre = Nombre;
    }
    string getNombre()
    {
        return nNombre;
    }
    void setNombre(string pNombre)
    {
        nNombre = pNombre;
    }
    void Ladrar()
    {
        cout<< mLadrido << endl;
    }
private:
    string nNombre;
};
int main()
{
    Perro PerroUno("Bobby","Ladrido1");
    cout << PerroUno.getNombre()<<endl;
    PerroUno.setNombre("Heron");
    cout <<PerroUno.getNombre()<<endl;
    PerroUno.Ladrar();
    Perro PerroDos("Rudolf", "Ladrido2");
    cout<< PerroDos.getNombre()<<endl;
    PerroDos.setNombre("Lazzie");
    cout<< PerroDos.getNombre()<<endl;
    PerroDos.Ladrar();
    return 0;
}
