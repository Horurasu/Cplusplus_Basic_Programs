#include <iostream>

using namespace std;

int main()
{
    int numeros[] ={3,4,2,1,5};
    int i, pos, aux;


    cout << "Orden Desordenado" << endl;
    for(i = 0; i < 5; i++)
    {
        cout<< numeros[i]<<" ";
    }
    cout <<endl;

    for(i = 0; i < 5; i++)
    {
        pos = i;
        aux = numeros[i];

        while((pos>0) && (numeros[pos-1] > aux))
        {
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos]=aux;
    }

    cout << "Orden Ascendente" << endl;
    for(i = 0; i < 5; i++)
    {
        cout<< numeros[i]<<" ";
    }

    cout <<endl;
    cout << "Orden Descendente" << endl;
    for(i = 4; i >= 0; i--)
    {
        cout<< numeros[i]<<" ";
    }



    return 0;
}
