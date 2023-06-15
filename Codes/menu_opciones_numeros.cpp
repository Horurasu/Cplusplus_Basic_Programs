#include <iostream>

using namespace std;


int main()
{

    int r;
    int a;
    int copiaarreglo[10];


    do{

        int iniciador_para_poder_pedir_un_valor = 0;

        while(iniciador_para_poder_pedir_un_valor == 0)
        {
            cout<<endl;
            cout<< "TAREA DE MARTIN JOAQUIN AGUILAR MUNOZ" <<endl;
            cout<<endl;
            cout<<" --ISW18-- ";
            cout<<endl;
            cout<< " MENU DE OPCIONES " <<endl;
            cout<<endl;
            cout<< "opcion: 1 :INGRESAR VALORES" <<endl;
            cout<< "opcion: 2 :MOSTRAR LISTA DE DATOS DESORDENADOS" <<endl;
            cout<< "opcion: 3 :MOSTRAR LISTA DE DATOS ORDENADOS" <<endl;
            cout<< "opcion: 4 :BUSCAR UN DATO" <<endl;
            cout<< "opcion: 5 :CERRAR PROGRAMA" <<endl;
            cout<<endl;
            cout<<endl;
            cout<<"INTRODUCE UNA OPCION" <<endl;
            cin>>a;
            system("cls");

            if ((a>=1) && (a<=5))
            {
                iniciador_para_poder_pedir_un_valor=1;
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

        switch(a)
        {
        case 1:{
            cout<<endl;


            int iniciador_para_poder_pedir_un_valor_nuevo = 0;

            while(iniciador_para_poder_pedir_un_valor_nuevo == 0)
            {
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
            for(i = 0; i<r; i++ )
            {
                cout<<"ingrese el numero en la posicion " <<i+1 <<": "; //el programa cuenta desde 0
                                                                    // pero se le sumo 1 aqui para que se muestren posiciones desde el 1
                cin>>arreglo[i];
            }


            for(int l=0; l<r;l++)
            {
                copiaarreglo[l]=arreglo[l];

            }

            cout<<endl;
            system("pause");
            system("cls");
            break;}
        case 2:{
            cout << endl;
            cout << "Lista desordenada" << endl;

            for(int i=0; i<r; i++)
            {
                cout<<copiaarreglo[i]<<" ";
            }
            cout<<endl;
            cout<<endl;
            system("pause");
            system("cls");
            break;}
        case 3:{

            int auxiliar;

            for(int q=0; q<r; q=q+1)
            {
                for(int k=0; k<r-1; k=k+1)
                {
                    if(copiaarreglo[k] > copiaarreglo[k+1])
                    {
                        auxiliar = copiaarreglo[k];
                        copiaarreglo[k] = copiaarreglo[k+1];
                        copiaarreglo[k+1] = auxiliar;
                    }
                }
            }

            cout << endl;
            cout << "ALGORITMO DE BURBUJA" << endl;
            cout << endl;

            cout << endl;
            cout << "Lista ordenada ascendente" << endl;

            for(int i=0; i<r; i++)
            {
                cout<<copiaarreglo[i]<<" ";
            }

            cout<<endl;
            cout << endl, cout << endl;
            cout << "Lista ordenada desendente" << endl;

            for(int i=r-1; i>=0; i--)
            {
                cout<<copiaarreglo[i]<<" ";
            }
            cout << endl;


            cout<<endl;
            system("pause");
            system("cls");
            break;}
        case 4:{

            int auxiliar;

            for(int q=0; q<r; q=q+1)
            {
                for(int k=0; k<r-1; k=k+1)
                {
                    if(copiaarreglo[k] > copiaarreglo[k+1])
                    {
                        auxiliar = copiaarreglo[k];
                        copiaarreglo[k] = copiaarreglo[k+1];
                        copiaarreglo[k+1] = auxiliar;
                    }
                }
            }

            cout << endl;
            cout << "Lista de datos" << endl;

            for(int i=0; i<r; i++)
            {
                cout<<copiaarreglo[i]<<" ";
            }

            cout<<endl;
            cout<<endl;
            char flag ='F';
            int contador=0;
            int dato=0;

            cout<<"Busqueda Lineal o Secuencial" << endl;
            cout<<"introdusca el numero que desea buscar" << endl;
            cin>>dato;
            while((flag =='F')&&(contador<r))
            {
                if (copiaarreglo[contador] == dato)
                {
                    flag ='V';
                }
                contador++;
            }
            if (flag =='F')
            {
                cout<<"el numero NO fue encontrado" << endl;
                cout<<endl;
                cout<<endl;
            }
            else if (flag =='V')
            {
                cout<<"el numero : " <<dato <<" fue encontrado en la posicion: " <<contador  << endl;
                cout<<endl;
                cout<<endl;
            }


            cout<<endl;
            system("pause");
            system("cls");
            break;}

        case 5:{
            cout<<endl;
            cout<< " EL PROGRAMA SE CERRARA " <<endl;
            cout<<endl;
            cout<< " NOS VEMOS uwu/" <<endl;
            cout<<endl;

            return 0;
            break;
            }
            }


    }while ((a>=1 && a<=5));
        cout<<endl;
        cout<<"ERROR ";
        cout<<endl;
        cout<<endl;
        cout<<"EL PROGRAMA SE CERRARA " <<endl;
        cout<<endl;

}


