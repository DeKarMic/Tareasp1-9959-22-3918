#include <iostream>
using namespace std;
//Definici�n de prototipos de resultado
void saludar(void);
void mostrarResultado(int resultado);
int sumar(int a, int b);

int main()
{

int resultado, a, b;
saludar();
cin>>a>>b;
resultado = sumar(a,b);
mostrarResultado(resultado);
return 0;
}

//implementaci�n de funciones
void saludar(void)
{
    cout<<"Hola, Buenos d�as, Ingresa dos n�meros"<<endl;
    return;
}
void mostrarResultado(int resultado)
{
cout<<"El resultado es: "<<resultado<<endl;
return;
}
int sumar(int a, int b)
{
    return(a+b);
}
