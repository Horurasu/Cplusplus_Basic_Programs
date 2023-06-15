#include <iostream>

using namespace std;

int main()
{
    int array[] = {0,1,2,3,4,5,6,7,8,9,10};
    int limite_inferior, limite_superior, puntero, dato, x;
    char flag='f';

    cout << "que numero desea buscar?" << endl;
    cin >> dato;

    limite_inferior = 0;
    limite_superior = 11;
    x=0;

    while( (limite_inferior<=limite_superior)&&(x<limite_superior) )
    {
        puntero = (limite_inferior+limite_superior)/2;
        if(array[puntero] == dato)
        {
            flag='v';
            break;
        }
        if(array[puntero] > dato)
        {
            limite_superior = puntero;
            puntero = (limite_inferior+limite_superior)/2;
        }
        if(array[puntero] < dato)
        {
            limite_inferior = puntero;
            puntero = (limite_inferior+limite_superior)/2;
        }
    }

    if(flag == 'f')
    {
		cout<<"El numero buscado no existe en el arreglo"<<endl;
		cout<<endl;
		cout<<endl;
	}
	else if(flag == 'v')
	{
		cout<<"El numero "<<dato<<" a sido encontrado en la posicion: "<<puntero<<endl;
		cout<<endl;
		cout<<endl;
	}

    return 0;
}

