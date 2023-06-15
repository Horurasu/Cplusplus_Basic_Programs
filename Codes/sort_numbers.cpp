#include <iostream>

using namespace std;

int main()
{
	int numeros[] = {7,8,6,9,13,12,10,11,3,4,5,2,1};
	int i,j,aux,min;

    cout<<" Martin Joaquin Aguilar Munoz ;-; isw18 " <<endl;
    cout<<endl;


	cout<<"Orden Desordenado: " <<endl;
	for(i=0;i<13;i++)
    {
		cout<<numeros[i]<<" ";
	}
	cout<<endl;



	for(i=0;i<13;i++)
    {
		min = i;
		for(j=i+1;j<13;j++)
        {
			if(numeros[j] < numeros[min])
			{
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}

	cout<<"Orden Ascendente: " <<endl;
	for(i=0;i<13;i++)
    {
		cout<<numeros[i]<<" ";
	}
	cout<<endl;

	cout<<"Orden Descendente: " <<endl;
	for(i=12;i>=0;i--)
    {
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
}
