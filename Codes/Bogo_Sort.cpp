#include <iostream>

using namespace std;


void Quicksort(int* arreglo, int izq, int der)  // CREAR UNA FUNCION PARA PONER LA ACCION DEL ALGORITMO DE ORDENAMIENTO
{

     int i = izq, j = der, temporal;
     int num_central = arreglo[(izq + der) / 2];

     while (i <= j)
     {
          while (arreglo[i] < num_central) i++;
          while (arreglo[j] > num_central) j--;
          if (i <= j)
          {
               temporal = arreglo[i];
               arreglo[i] = arreglo[j];
               arreglo[j] = temporal;
               i++; j--;
          }
     }

     if (izq < j)
          Quicksort(arreglo, izq, j);
     if (i < der)
          Quicksort(arreglo, i, der);
}


int main()
{

    int r;
    int iniciador_para_poder_pedir_un_valor_nuevo;

    while(iniciador_para_poder_pedir_un_valor_nuevo == 0)
    {
        cout<<endl;
        cout<<"  TAREA DE MARTIN JOAQUIN AGUILAR MUNOZ      ";
        cout<<endl;
        cout<<"               --ISW18--  ";
        cout<<endl;
        cout<<"               QUICK SORT ";
        cout<<endl;
        cout<<" algoritmo de ordenamiento de numeros ";
        cout<<endl;
        cout<<endl;
        cout<<"CAPTURA LA CANTIDAD DE NUMEROS QUE NECESITAS" <<endl;
        cout << "Cantidad maxima 10 y cantidad minima 2  " << endl;
        cin>>r;

        if ((r>1) && (r<=10))
        {
            iniciador_para_poder_pedir_un_valor_nuevo=1;
        }else
        {
            cout<<endl;
            cout<<"ERROR" <<endl <<endl;
            cout<<"El numero capturado no esta en el rango establecido" <<endl <<endl;
            cout<<"INTRODUSCA UNO NUEVO" <<endl <<endl;
            system("pause");
            system("cls");
        }
    }


    int arreglo[r], i;
    for(i = 0; i<r; i++ ){
        cout<<"ingrese el numero en la posicion " <<i+1 <<": "; //el programa cuenta desde 0
                                                                // pero se le sumo 1 aqui para que se muestren posiciones desde el 1
        cin>>arreglo[i];
    }

    int auxiliar;

    cout << endl;
    cout << "Lista desordenada " << endl;

    for(int i=0; i<r; i++)
    {
        cout<<arreglo[i]<<" ";
    }

    Quicksort(arreglo, 0, r-1);  //llamar la funcion para que realize el acomodo de los numeros en el arreglo


    cout << endl, cout << endl;
    cout << "Lista ordenada ascendente" << endl;

    for(int i=0; i<r; i++)
    {
        cout<<arreglo[i]<<" ";
    }

    cout << endl, cout << endl;
    cout << "Lista ordenada desendente" << endl;

    for(int i=r-1; i>=0; i--)
    {
        cout<<arreglo[i]<<" ";
    }
    cout << endl;


    return 0;

}


