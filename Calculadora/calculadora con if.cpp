#include <iostream>
using namespace std;
int main(){
//
int num1, num2, resultado;
char op;

cout<<"Ingrese el primer numero"<<endl;
cin >> num1;

cout<<"Ingresa la operacion: [+, -, *, /]"<<endl;
cin >> op;

cout<<"Ingresa el segundo numero:"<<endl;
cin >> num2;

if(op == '+')
    resultado = num1 + num2;
    else if(op == '-')
    resultado = num1 - num2;
    else if(op == '*')
    resultado = num1 * num2;
    else if(op == '/')
    resultado = num1 / num2;

cout<< num1 << op << num2 << " = " << resultado <<endl;

return 0;
}
