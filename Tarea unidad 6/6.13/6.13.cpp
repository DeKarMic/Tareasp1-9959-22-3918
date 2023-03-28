#include <iostream>
#include <cmath>

using namespace std;

float aproxEntero(float num);
float aproxDecimas(float num);
float aproxCentesimas(float num);
float aproxMilesima(float num);

int main()
{
float numero;

    cout << "Ingrese un valor para redondear ";
    cin >>  numero;

    cout << "\n "<< numero <<" aproximado de forma original a entera = " << aproxEntero(numero);
    cout << "\n "<< numero <<" aproximado de forma original a decima = " << aproxDecimas(numero);
    cout << "\n "<< numero <<" aproximado de forma original a centesima = " << aproxCentesimas(numero);
    cout << "\n "<< numero <<" aproximado de forma original a milesima = " << aproxMilesima(numero);

}

float aproxEntero(float num)
{
    float y = floor((num * 10) + 0.5);

    return y;
}

float aproxDecimas(float num)
{
    float y = floor(num  + 0.5)/100;

    return y;
}

float aproxCentesima(float num)
{
    float y = floor((num * 10) + 0.5)/10;

    return y;
}

float aproxCentesimas(float num)
{
    float y = floor(num * 100 + 0.5)/100;

    return y;
}

float aproxMilesima(float num)
{
    float y = floor(num * 1000 + 0.5)/1000;

    return y;
}
