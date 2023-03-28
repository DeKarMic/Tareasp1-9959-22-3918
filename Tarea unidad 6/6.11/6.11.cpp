#include <iostream>
#include <math.h>

using namespace std;
int main()
{

cout<<"instruccion fabs en x=7.5:   "<< fabs(7.5)<<endl;
cout<<"instruccion floor en x=7.5:   "<< floor(7.5)<<endl;
cout<<"instruccion fabs en x=0.0:   "<< fabs(0.0)<<endl;
cout<<"instruccion ceil en x=0.0   "<< ceil(0.0)<<endl;
cout<<"instruccion fabs en x=-6.4:   "<< fabs(-6.4)<<endl;
cout<<"instruccion ceil en x=-6.4:   "<< ceil(-6.4)<<endl;
cout<<"instruccion ceil,fabs y floor en:   "<< ceil(-fabs(-8+floor(-5.5)))<<endl;

    return 0;
}
