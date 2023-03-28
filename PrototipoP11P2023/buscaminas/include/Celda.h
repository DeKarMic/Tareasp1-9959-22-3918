#ifndef CELDA_H
#define CELDA_H
//libreria que guarda los atributos y los prototipos de los metodos utilizados para crear y administrar las celdas del juego
//Fecha 17 de marzo 2023

class Celda
{
    public:
        Celda();
        Celda(int cordenadaX, int cordenadaY, bool estadoMina);
        void imprimirCelda();
        int setCordenadaX(int cordenadaX);
        int getcordenadaX();
        int setCordenadaY(int cordenadaY);
        int getCordenadaY();
        bool setMina(bool estadoMina);
        bool getMina();
        bool setMinaDescubierta(bool minaDescubierta);
        bool getMinaDescubierta();
        void imprimirCelda();
    protected:

    private:
        int cordenadaX, cordenadaY;
        bool mina, minaDescubierta;


};

#endif // CELDA_H
