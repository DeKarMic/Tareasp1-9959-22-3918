#include <iostream>
using namespace std;
template < typename T >
T minimo( T valor1, T valor2){
    T valorMinimo = valor1;
    if ( valor2 < valorMinimo ){
        valorMinimo = valor2;
    }
    return valorMinimo;
}
int main(){
    int intn, intm;
    cout << "Primer valor de tipo entero: ";
    cin >> intn;
    cout << "Segundo valor de tipo entero: ";
    cin >> intm;
    cout << "\nEl valor -int- maximo es: " << minimo(intn , intm) << endl;
    float floatn, floatm;
    cout << "\nPrimer valor de tipo flotante: ";
    cin >> floatn;
    cout << "Segundo valor de tipo flotante: ";
    cin >> floatm;
    cout << "\nEl valor -flotante- maximo es: " << minimo(floatn , floatm) << endl;
    char charn, charm;
    cout << "\nPrimer valor de tipo caracter: ";
    cin >> charn;
    cout << "Segundo valor de tipo caracter: ";
    cin >> charm;
    cout << "\nEl valor -caracter- maximo es: " << minimo(charn , charm) << endl;
}
