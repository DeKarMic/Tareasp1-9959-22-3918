#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

const int NUMERO_ALUMNOSInge = 5;
const int NUMERO_MATERIASInge =4;
const int MAX_CALIFICACIONInge = 50;
const int MIN_CALIFICACIONInge = 0;
const int MAXIMA_LONGITUD_CADENAInge = 50;

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
int busquedaAleatoriosInge(int minimoInge, int maximoInge);
void llenarMatrizInge(float matrizInge[NUMERO_ALUMNOSInge][NUMERO_MATERIASInge + 1]);
void imprimirMatrizLinea();
void imprimirMatrizInge(float matrizInge[NUMERO_ALUMNOSInge][NUMERO_MATERIASInge + 1], char alumnosInge[NUMERO_ALUMNOSInge][MAXIMA_LONGITUD_CADENAInge]);

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
    float matrizInge[NUMERO_ALUMNOSInge][NUMERO_MATERIASInge + 1];
    char alumnosInge[NUMERO_ALUMNOSInge][MAXIMA_LONGITUD_CADENAInge] = {"GUASTATOYA    ","MUNICIPAL     ", "COMUNICACIONES", "AURORA        ", "MALACATECO    "};
    llenarMatrizInge(matrizInge);
    imprimirMatrizInge(matrizInge, alumnosInge);
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
int busquedaAleatoriosInge(int minimoInge, int maximoInge)
{
    return minimoInge + rand() / (RAND_MAX / (maximoInge - minimoInge + 1) + 1);
}

void llenarMatrizInge(float matrizInge[NUMERO_ALUMNOSInge][NUMERO_MATERIASInge + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_ALUMNOSInge; y++)
    {
        float suma = 0;
        for (x = 0; x < NUMERO_MATERIASInge; x++)
        {
            int calificacionInge = busquedaAleatoriosInge(MIN_CALIFICACIONInge, MAX_CALIFICACIONInge);
            suma += (float)calificacionInge;
            matrizInge[y][x] = calificacionInge;
        }
        // Agregar promedio
        float promedioIng = suma / NUMERO_MATERIASInge;
        matrizInge[y][NUMERO_MATERIASInge] = promedioIng;
    }
}

void imprimirMatrizLineaInge()
{
    int x;
    cout << "+--------";
    for (x = 0; x < NUMERO_MATERIASInge + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}

void imprimirMatrizInge(float matrizInge[NUMERO_ALUMNOSInge][NUMERO_MATERIASInge + 1], char alumnosInge[NUMERO_ALUMNOSInge][MAXIMA_LONGITUD_CADENAInge])
{
    int y, x;
    float promedioMayorInge = matrizInge[0][NUMERO_MATERIASInge];
    float promedioMenorInge = matrizInge[0][NUMERO_MATERIASInge];
    char alumnoPromedioMayorInge[MAXIMA_LONGITUD_CADENAInge];
    char alumnoPromedioMenorInge[MAXIMA_LONGITUD_CADENAInge];
    memcpy(alumnoPromedioMayorInge, alumnosInge[0], MAXIMA_LONGITUD_CADENAInge);
    memcpy(alumnoPromedioMenorInge, alumnosInge[0], MAXIMA_LONGITUD_CADENAInge);

    imprimirMatrizLineaInge();
    cout << setw(9) << "    EQUIPO";
    for (x = 0; x < NUMERO_MATERIASInge-1; x++)
    {
        cout << setw(9) << "         201" << x + 1;
    }
    cout << setw(8) << "    2014"  ;

    cout << setw(8) << "    Prom" << endl;
    imprimirMatrizLineaInge();

    for (y = 0; y < NUMERO_ALUMNOSInge; y++)
    {
        cout << "|" << setw(8) << alumnosInge[y] << "|";
        float suma = 0;
        for (x = 0; x < NUMERO_MATERIASInge; x++)
        {
            int calificacionInge = matrizInge[y][x];
            cout << setw(9) << calificacionInge << "|";
        }
        float promedioInge = matrizInge[y][NUMERO_MATERIASInge];
        if (promedioInge > promedioMayorInge)
        {
            promedioMayorInge = promedioInge;
            memcpy(alumnoPromedioMayorInge, alumnosInge[y], MAXIMA_LONGITUD_CADENAInge);
        }
        if (promedioInge < promedioMenorInge)
        {
            promedioMenorInge = promedioInge;
            memcpy(alumnoPromedioMenorInge, alumnosInge[y], MAXIMA_LONGITUD_CADENAInge);
        }
        cout << setw(9) << fixed << setprecision(2) << promedioInge << "|" << endl;
        imprimirMatrizLineaInge();
    }
    cout << "CAMPEON DE LA LIGA: " << setw(10) << alumnoPromedioMayorInge << " PROMEDIO: " << setw(10) << promedioMayorInge << endl;
    cout << "ULTIMO EN LA TABLA: "<< setw(10) << alumnoPromedioMenorInge << " PROMEDIO: " << setw(10) << promedioMenorInge << endl;
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
