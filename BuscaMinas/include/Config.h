#ifndef CONFIG_H
#define CONFIG_H


class Config
{
    public:
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);
        int getFilasTablero();
        int setFilasTablero(int filasTablero);
        int getColumnasTablero();
        int setColumnasTablero(int columnasTablero);
        int getMinasTablero();
        int setMinasTablero(int minasTablero);
        int getModoDesarrolladorTablero();
        int setModoDesarrolladorTablero(int modoDesarrolladorTablero);
        int getVidasTablero();
        int setVidasTablero(int vidasTablero);
        void menuConfiguracion;


    protected:

    private:
        int filasTablero;
        int columnasTablero;
        int minasTablero;
        bool modoDesarrolladorTablero;
        int vidasTablero;
};

#endif // CONFIG_H
