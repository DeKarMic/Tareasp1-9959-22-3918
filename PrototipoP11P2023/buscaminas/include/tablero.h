#ifndef TABLERO_H
#define TABLERO_H
#include <vector>

class Tablero
{
    public:
        Tablero();
        Tablero(int ancho, bool modoPrivilegiado);
    protected:

    private:
        int alturaTablero, anchoTablero;
        bool modoPrivilegiado;
        vector<vector<celda>> contenido;
};

#endif // TABLERO_H
