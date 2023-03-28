#include <iostream>
#include <cmath>

using namespace std;

double Hipo(double lado1, double lado2);

int main()
{
    double val1 = 3.0, val2 = 4.0, val3 = 5.0, val4 = 12.0, val5 = 8.0, val6 = 15.0;


    cout << "\nLa hipotenusa del triagnulo 1 es = " << Hipo(val1,val2);
    cout << "\nLa hipotenusa del triagnulo 2 es = " << Hipo(val3,val4);
    cout << "\nLa hipotenusa del triagnulo 3 es = " << Hipo(val5,val6);

}

double Hipo(double lado1, double lado2)
{

    double hipotenusa;
    hipotenusa = sqrt((pow(lado1,2)+pow(lado2,2)));

    return hipotenusa;
}
