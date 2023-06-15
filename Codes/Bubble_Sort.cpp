#include <iostream>

using namespace std;

int main()
{
    cout << endl;
    cout << "TAREA: Martin Joaquin Aguilar Munoz " << endl;

    int numeros[20] = {9,14,8,10,18,5,2,1,3,4};
    int auxiliar;

    cout << endl;
    cout << "Lista desordenada " << endl;

    for(int i=0; i<10; i=i+1)
    {
        cout<<numeros[i]<<" ";
    }

    for(int i=0; i<10; i=i+1)
    {
        for(int j=0; j<9; j=j+1)
        {
            if(numeros[j] > numeros[j+1])
            {
                auxiliar = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = auxiliar;
            }
        }
    }
    cout << endl;
    cout << endl;
    cout << "Lista ordenada de menor a mayor (orden Ascendente): " << endl;
    for(int i=0; i<10; i=i+1)
    {
        cout<<numeros[i]<<" ";
    }
    cout << endl;

    cout << endl;
    cout << "Lista ordenada de mayor a menor (orden Descendente): " << endl;
    for(int i=9; i>=0; i=i-1)
    {
        cout<<numeros[i]<<" ";
    }
    cout << endl;


    return 0;
}
