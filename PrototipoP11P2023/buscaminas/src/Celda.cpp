#include "Celda.h"
#include <iostream>
Celda::Celda()
{
}
Celda::Celda(int cordenadaX, int cordenadaY, bool estadoMina)
{
    this->cordenadaX = cordenadaX;
    this->cordenadaY = cordenadaY;
    this->mina = estadoMina;
    this->minaDescubierta = false;

}

int Celda::setCordenadaX(int cordenadaX)
{
    this->cordenadaX = cordenadaX;
}
int Celda::getCordenadaX()
{
    return this ->cordenadaX;
}
int Celda::setCordenadaY(int cordenadaY)
{
    this->cordenadaY = cordenadaY;
}
int Celda::getCordenadaY()
{
    return this ->cordenadaY;
}
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina())
    {
        return false;
    }
    else{
    this->mina = estadoMina;
    return true
    }
}
bool Celda::getMina()
{
    return this->mina;
}
bool Celda::setMinaDescubierta(bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta;
}
bool Celda::getMinaDescubierta()
{
    return this->minaDescubierta;
}
void Celda::imprimirCelda()
{
    cout<<"Celda en "<<this->cordenadaX<<", " << this->cordenadaY<<" con mina?"<<this->mina<<"/n";
}
