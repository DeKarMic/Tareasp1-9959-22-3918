//Fecha de creacion: 06 de febrero del 2023
//autor Geovanny
//Este programa tiene como objetivo mostrar el curso de funciones a traves de una calculadora
#include <iostream>
#include <cstdlib>

using namespace std;

//Definicion de prototipos
void sumar();
void restar();
void multiplicar();
void division();

int main (){
    int operaciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout<<"\n\n\t\t\tCalculadora Ejemplo"<<endl;
        cout<<"\t\t\t-----------------------"<<endl;
        cout<<"\t1. Sumar dos numeros"<<endl;
        cout<<"\t2. restar dos numeros"<<endl;
        cout<<"\t3. multiplicar dos numeros"<<endl;
        cout<<"\t4. division numeros"<<endl;
        cout<<"\t5. SALIR "<<endl;
        cout<<"\n\tIngrese una opcion: "<<endl;
        cin>> operaciones;
        switch (operaciones)
        {
        case 1:
                sumar();
                break;
        case 2:
                restar();
                break;
        case 3:
                multiplicar();
                break;
        case 4:
                division();
                break;
        case 5:
                repetir = false;
                break;
        }
    } while(repetir);
    return 0;
}

    //Implementacion de funciones
    void sumar()
{
    int primerNumero, segundoNumero;
    float resultadoSumar;
    cout<<"\n\tIngrese primer numero"<<endl;
    cin>>primerNumero;
    cout<<"\n\tIngrese Segundo numero"<<endl;
    cin>>segundoNumero;
    cout<<"\n\t---------------------"<<endl;
    resultadoSumar = primerNumero + segundoNumero;
    cout<<"\tResultado de la suma: "<< resultadoSumar<<endl;
    system("pause>nul");
}
    void restar()
{
    int primerNumero, segundoNumero;
    float resultadoRestar;
    cout << "\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoRestar = primerNumero - segundoNumero;
    cout << "\tResultado de la resta: " << resultadoRestar << endl;
    system("pause>nul");
}
void multiplicar()
{
    int primerNumero, segundoNumero;
    float resultadoMultiplicar;
    cout << "\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoMultiplicar = primerNumero * segundoNumero;
    cout << "\tResultado de la multiplicacion: " << resultadoMultiplicar << endl;
    system("pause>nul");
}
void division()
{

    int primerNumero, segundoNumero;
    float resultadoDividir;
    cout << "\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    if (segundoNumero == 0)
    {
        cout << "\tSegundo numero no puede ser cero (0) ERROR" << endl;
    } else
    {
        resultadoDividir = primerNumero / segundoNumero;
        cout << "\tResultado de la division: " << resultadoDividir << endl;
    }
    system("pause>nul");
}

