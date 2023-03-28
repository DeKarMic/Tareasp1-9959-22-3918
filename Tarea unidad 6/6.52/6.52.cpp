#include <iostream>
using namespace std;
template < typename T >
T maximo( T valor1, T valor2){
    T valorMaximo = valor1;
    if ( valor2 > valorMaximo ){
        valorMaximo = valor2;
    }
    return valorMaximo;
}
int main(){
    int intn, intm;
    cout << "Primer valor de tipo entero: ";
    cin >> intn;
    cout << "Segundo valor de tipo entero: ";
    cin >> intm;
    cout << "\nEl valor -int- maximo es: " << maximo(intn , intm) << endl;
    float floatn, floatm;
    cout << "\nPrimer valor de tipo flotante: ";
    cin >> floatn;
    cout << "Segundo valor de tipo flotante: ";
    cin >> floatm;
    cout << "\nEl valor -flotante- maximo es: " << maximo(floatn , floatm) << endl;
    char charn, charm;
    cout << "\nPrimer valor de tipo caracter: ";
    cin >> charn;
    cout << "Segundo valor de tipo caracter: ";
    cin >> charm;
    cout << "\nEl valor -caracter- maximo es: " << maximo(charn , charm) << endl;
}
