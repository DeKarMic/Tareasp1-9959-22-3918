#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

const int NUMERO_EquiposNa = 5;
const int NUMERO_LigasNa =4;
const int MAX_CALIFICACIONNa = 50;
const int MIN_CALIFICACIONNa = 0;
const int MAXIMA_LONGITUD_CADENANa = 50;

const int NUMERO_ALUMNOS = 5;
const int NUMERO_MATERIAS =4;
const int MAX_CALIFICACION = 50;
const int MIN_CALIFICACION = 0;
const int MAXIMA_LONGITUD_CADENA = 50;

const int NUMERO_ALUMNOSAdmi = 5;
const int NUMERO_MATERIASAdmi =4;
const int MAX_CALIFICACIONAdmi = 50;
const int MIN_CALIFICACIONAdmi = 0;
const int MAXIMA_LONGITUD_CADENAAdmi = 50;

int busquedaAleatoriosAdmi(int minimoAdmi, int maximoAdmi);
void llenarMatrizAdmi(float matrizAdmi[NUMERO_ALUMNOSAdmi][NUMERO_MATERIASAdmi + 1]);
void imprimirMatrizLinea();
void imprimirMatrizAdmi(float matrizAdmi[NUMERO_ALUMNOSAdmi][NUMERO_MATERIASAdmi + 1], char alumnosAdmi[NUMERO_ALUMNOSAdmi][MAXIMA_LONGITUD_CADENAAdmi]);

int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1]);
void imprimirMatrizLinea();
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA]);

int opc;
char inicio;
int busquedaAleatoriosNa(int minimoNa, int maximoNa);
void llenarMatrizNa(float matrizNa[NUMERO_EquiposNa][NUMERO_LigasNa + 1]);
void imprimirMatrizLinea();
void imprimirMatrizNa(float matrizNa[NUMERO_EquiposNa][NUMERO_LigasNa + 1], char EquiposNa[NUMERO_EquiposNa][MAXIMA_LONGITUD_CADENANa]);

int main()
{
    cout<<"\n\t*******PASION POR EL FUTBOL****";
    cout<<" "<<endl;

    do {
    cout<<"lIGA DESEA VER HOY?";
    cout<<" "<<endl;
    cout<<"\n\t     1. LIGA NACIONAL";
    cout<<"\n\t     2. LIGA ESPANIOLA";
    cout<<"\n\t     3. LIGA FRANCESA";

    cout<<"\n INGRESE LA OPCION: "<<endl;
    cin>>opc;

    if(opc==1)
    {
    srand(getpid());
    float matrizNa[NUMERO_EquiposNa][NUMERO_LigasNa + 1];
    char equipoNa[NUMERO_EquiposNa][MAXIMA_LONGITUD_CADENANa] = {"GUASTATOYA    ","MUNICIPAL     ", "COMUNICACIONES", "AURORA        ", "MALACATECO    "};
    llenarMatrizNa(matrizNa);
    imprimirMatrizNa(matrizNa, equipoNa);
    }

    if(opc==2)
    {
 srand(getpid());
    float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1];
    char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA] = {"REAL MADRID       ","BARCELONA         ", "ATLETICO DE MADRID", "VILLAREAL         ", "REAL SOCIEDAD     "};
    llenarMatriz(matriz);
    imprimirMatriz(matriz, alumnos);
    }

     if(opc==3)
    {
 srand(getpid());
    float matrizAdmi[NUMERO_ALUMNOSAdmi][NUMERO_MATERIASAdmi + 1];
    char alumnosAdmi[NUMERO_ALUMNOSAdmi][MAXIMA_LONGITUD_CADENAAdmi] = {"PARIS SAINT-GERMAIN","AS MONACO          ", "MARSEILLE          ", "LYON               ", "LENS               "};
    llenarMatrizAdmi(matrizAdmi);
    imprimirMatrizAdmi(matrizAdmi, alumnosAdmi);
    }
        cout<<"\n Desea Continuar (S/N)? ";
		cin>>inicio;
	} while ((inicio=='S')||(inicio=='s'));
		cout<<"\n\t QUE TENGA UN EXCELENTE DIA!!"<<endl;
}
int busquedaAleatoriosNa(int minimoNa, int maximoNa)
{
    return minimoNa + rand() / (RAND_MAX / (maximoNa - minimoNa + 1) + 1);
}

void llenarMatrizNa(float matrizNa[NUMERO_EquiposNa][NUMERO_LigasNa + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_EquiposNa; y++)
    {
        float suma = 0;
        for (x = 0; x < NUMERO_LigasNa; x++)
        {
            int calificacionNa = busquedaAleatoriosNa(MIN_CALIFICACIONNa, MAX_CALIFICACIONNa);
            suma += (float)calificacionNa;
            matrizNa[y][x] = calificacionNa;
        }
        // Agregar promedio
        float promedioNa = suma / NUMERO_LigasNa;
        matrizNa[y][NUMERO_LigasNa] = promedioNa;
    }
}

void imprimirMatrizLineaNa()
{
    int x;
    cout << "+--------";
    for (x = 0; x < NUMERO_LigasNa + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}

void imprimirMatrizNa(float matrizNa[NUMERO_EquiposNa][NUMERO_LigasNa + 1], char equiposNa[NUMERO_EquiposNa][MAXIMA_LONGITUD_CADENANa])
{
    int y, x;
    float promedioMayorNa = matrizNa[0][NUMERO_LigasNa];
    float promedioMenorNa = matrizNa[0][NUMERO_LigasNa];
    char equipoPromedioMayorNa[MAXIMA_LONGITUD_CADENANa];
    char equipoPromedioMenorNa[MAXIMA_LONGITUD_CADENANa];
    memcpy(equipoPromedioMayorNa, equiposNa[0], MAXIMA_LONGITUD_CADENANa);
    memcpy(equipoPromedioMenorNa, equiposNa[0], MAXIMA_LONGITUD_CADENANa);

    imprimirMatrizLineaNa();
    cout << setw(9) << "    EQUIPO";
    for (x = 0; x < NUMERO_LigasNa-1; x++)
    {
        cout << setw(9) << "         201" << x + 1;
    }
    cout << setw(8) << "    2014"  ;

    cout << setw(8) << "    Prom" << endl;
    imprimirMatrizLineaNa();

    for (y = 0; y < NUMERO_EquiposNa; y++)
    {
        cout << "|" << setw(8) << equiposNa[y] << "|";
        float suma = 0;
        for (x = 0; x < NUMERO_LigasNa; x++)
        {
            int calificacionNa = matrizNa[y][x];
            cout << setw(9) << calificacionNa << "|";
        }
        float promedioNa = matrizNa[y][NUMERO_LigasNa];
        if (promedioNa > promedioMayorNa)
        {
            promedioMayorNa = promedioNa;
            memcpy(equipoPromedioMayorNa, equiposNa[y], MAXIMA_LONGITUD_CADENANa);
        }
        if (promedioNa < promedioMenorNa)
        {
            promedioMenorNa = promedioNa;
            memcpy(equipoPromedioMenorNa, equiposNa[y], MAXIMA_LONGITUD_CADENANa);
        }
        cout << setw(9) << fixed << setprecision(2) << promedioNa << "|" << endl;
        imprimirMatrizLineaNa();
    }
    cout << "CAMPEON DE LA LIGA: " << setw(10) << equipoPromedioMayorNa << " PROMEDIO: " << setw(10) << promedioMayorNa << endl;
    cout << "ULTIMO EN LA TABLA: "<< setw(10) << equipoPromedioMenorNa<< " PROMEDIO: " << setw(10) << promedioMenorNa << endl;
}




int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {
        float suma = 0;
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            suma += (float)calificacion;
            matriz[y][x] = calificacion;
        }
        // Agregar promedio
        float promedio = suma / NUMERO_MATERIAS;
        matriz[y][NUMERO_MATERIAS] = promedio;
    }
}

void imprimirMatrizLinea()
{
    int x;
    cout << "+--------";
    for (x = 0; x < NUMERO_MATERIAS + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz[0][NUMERO_MATERIAS];
    float promedioMenor = matriz[0][NUMERO_MATERIAS];
    char alumnoPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumnoPromedioMenor[MAXIMA_LONGITUD_CADENA];
    memcpy(alumnoPromedioMayor, alumnos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(alumnoPromedioMenor, alumnos[0], MAXIMA_LONGITUD_CADENA);

    imprimirMatrizLinea();
    cout << setw(9) << "    EQUIPO";
    for (x = 0; x < NUMERO_MATERIAS-1; x++)
    {
        cout << setw(9) << "          201" << x + 1;
    }
    cout << setw(8) << "2014"  ;

    cout << setw(8) << "Prom" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {
        cout << "|" << setw(8) << alumnos[y] << "|";
        float suma = 0;
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = matriz[y][x];
            cout << setw(9) << calificacion << "|";
        }
        float promedio = matriz[y][NUMERO_MATERIAS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumnoPromedioMayor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumnoPromedioMenor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    cout << "CAMPEON DE LA LIGA: " << setw(10) << alumnoPromedioMayor << " PROMEDIO: " << setw(10) << promedioMayor << endl;
    cout << "ULTIMO EN LA TABLA: " << setw(10) << alumnoPromedioMenor << " PROMEDIO: " << setw(10) << promedioMenor << endl;
}




int busquedaAleatoriosAdmi(int minimoAdmi, int maximoAdmi)
{
    return minimoAdmi + rand() / (RAND_MAX / (maximoAdmi - minimoAdmi + 1) + 1);
}

void llenarMatrizAdmi(float matrizAdmi[NUMERO_ALUMNOSAdmi][NUMERO_MATERIASAdmi + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_ALUMNOSAdmi; y++)
    {
        float suma = 0;
        for (x = 0; x < NUMERO_MATERIASAdmi; x++)
        {
            int calificacionAdmi = busquedaAleatoriosAdmi(MIN_CALIFICACIONAdmi, MAX_CALIFICACIONAdmi);
            suma += (float)calificacionAdmi;
            matrizAdmi[y][x] = calificacionAdmi;
        }
        // Agregar promedio
        float promedioAdmi = suma / NUMERO_MATERIASAdmi;
        matrizAdmi[y][NUMERO_MATERIASAdmi] = promedioAdmi;
    }
}

void imprimirMatrizLineaAdmi()
{
    int x;
    cout << "+--------";
    for (x = 0; x < NUMERO_MATERIASAdmi + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}

void imprimirMatrizAdmi(float matrizAdmi[NUMERO_ALUMNOSAdmi][NUMERO_MATERIASAdmi + 1], char alumnosAdmi[NUMERO_ALUMNOSAdmi][MAXIMA_LONGITUD_CADENAAdmi])
{
    int y, x;
    float promedioMayorAdmi = matrizAdmi[0][NUMERO_MATERIASAdmi];
    float promedioMenorAdmi = matrizAdmi[0][NUMERO_MATERIASAdmi];
    char alumnoPromedioMayorAdmi[MAXIMA_LONGITUD_CADENAAdmi];
    char alumnoPromedioMenorAdmi[MAXIMA_LONGITUD_CADENAAdmi];
    memcpy(alumnoPromedioMayorAdmi, alumnosAdmi[0], MAXIMA_LONGITUD_CADENAAdmi);
    memcpy(alumnoPromedioMenorAdmi, alumnosAdmi[0], MAXIMA_LONGITUD_CADENAAdmi);

    imprimirMatrizLineaAdmi();
    cout << setw(9) << "    EQUIPO";
    for (x = 0; x < NUMERO_MATERIASAdmi-1; x++)
    {
        cout << setw(9) << "          201" << x + 1;
    }
    cout << setw(8) << "2014"  ;

    cout << setw(8) << "Prom" << endl;
    imprimirMatrizLineaAdmi();
    for (y = 0; y < NUMERO_ALUMNOSAdmi; y++)
    {
        cout << "|" << setw(8) << alumnosAdmi[y] << "|";
        float suma = 0;
        for (x = 0; x < NUMERO_MATERIASAdmi; x++)
        {
            int calificacionAdmi = matrizAdmi[y][x];
            cout << setw(9) << calificacionAdmi << "|";
        }
        float promedioAdmi = matrizAdmi[y][NUMERO_MATERIASAdmi];
        if (promedioAdmi > promedioMayorAdmi)
        {
            promedioMayorAdmi = promedioAdmi;
            memcpy(alumnoPromedioMayorAdmi, alumnosAdmi[y], MAXIMA_LONGITUD_CADENAAdmi);
        }
        if (promedioAdmi < promedioMenorAdmi)
        {
            promedioMenorAdmi = promedioAdmi;
            memcpy(alumnoPromedioMenorAdmi, alumnosAdmi[y], MAXIMA_LONGITUD_CADENAAdmi);
        }
        cout << setw(9) << fixed << setprecision(2) << promedioAdmi << "|" << endl;
        imprimirMatrizLineaAdmi();
    }
    cout << "CAMPEON DE LA LIGA " << setw(10) << alumnoPromedioMayorAdmi << " PROMEDIO: " << setw(10) << promedioMayorAdmi << endl;
    cout << "ULTIMO EN LA TABLA " << setw(10) << alumnoPromedioMenorAdmi << " PROMEDIO: " << setw(10) << promedioMenorAdmi;
}
