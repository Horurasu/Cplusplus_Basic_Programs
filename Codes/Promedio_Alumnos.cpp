#include <iostream>

using namespace std;

int alumno[4]; //variables globales que utliza todo el programa incluidas las funciones

void calcularpromedio(int a1,int a2,int a3) //funcion para calcular el promedio
{
    int promedio;
    promedio=(a1+a2+a3)/3;

    cout << "el promedio de los 3 alumnos es: "<< promedio << endl;
}

void sumatotal(int a1,int a2,int a3)//funcion para calcular suma total
{
    int suma;
    suma=a1+a2+a3;

    cout << "la suma de las calif. de los 3 alumnos es: "<< suma << endl;
}

void copyright() //funcion para para desplegar el copyright
{
    cout << endl;
    cout << endl;
    cout << "2021, Prof. Zarate, todos los derechos reservados "<< endl;
}

int main()
{
    cout << "programa para calcular el promedio de 3 alumnos" << endl;

    for(int j=1; j<=3; j++)
    {
        cout <<endl;
        cout << "escriba la calificacion del alumno "<<j <<": ";
        cin>>alumno[j];
    }

    copyright();

    calcularpromedio(alumno[1], alumno[2], alumno[3]); //en numero de los parentesis es el numero en esa posicion

    sumatotal(alumno[1], alumno[2], alumno[3]);



    return 0;
}
