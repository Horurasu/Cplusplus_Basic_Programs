#include <iostream>

using namespace std;


int main()
{

    int r;
    int a;
    int copiaarreglo[10];
    int cuenta=0;


    do{

        int iniciador_para_poder_pedir_un_valor = 0;

        while(iniciador_para_poder_pedir_un_valor == 0)
        {

            cout<<endl;
            cout<<endl;
            cout<<"TAQUERIA DE LOS PANISFRESKI ";
            cout<<endl;
            cout<<endl;
            cout<<"MENU DE OPCIONES " <<endl;
            cout<<endl;
            cout<<"opcion: 1 :HACER UNA ORDEN DE TACOS " <<endl;
            cout<<"opcion: 2 :VER MI PEDIDO " <<endl;
            cout<<"opcion: 3 :REVISAR MI ORDEN " <<endl;
            cout<<"opcion: 4 :SALIR " <<endl;
            cout<<endl;
            cout<<endl;
            cout<<"INTRODUCE UNA OPCION" <<endl;
            cin>>a;
            system("cls");

            if ((a>=1) && (a<=4))
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
                cuenta=0;
                cout<<endl;
                cout<<" CUANTOS TACOS VAS A QUERER GUERO " <<endl;
                cout << "Cantidad maxima 10 y cantidad minima 2  " << endl;
                cin>>r;
                cuenta= cuenta+r;
                cout<<endl;
                cout<<"EL PRECIO DE TODOS LOS TACOS ES DE 12 PESOS" <<endl;
                cout<<endl;
                cout<<"MENU DE TACOS" <<endl;
                cout<<endl;
                cout<<" 0 = TACO DE SAL" <<endl;
                cout<<" 1 = TACO DE PASTOR" <<endl;
                cout<<" 2 = TACO DE SUAPERRO" <<endl;
                cout<<" 3 = TACO DE BUCHE" <<endl;
                cout<<" 4 = TACO DE TRIPA" <<endl;
                cout<<" 5 = TACO DE BISTEC" <<endl;
                cout<<" 6 = TACO DE PURA TORTILLA" <<endl;
                cout<<" 7 = TACO DE QUESO" <<endl;
                cout<<" 8 = TACO DE CHICHARRON" <<endl;
                cout<<" 9 = TACO DE BARBACOA" <<endl;
                cout<<" 10 = TACO DE NADA" <<endl;
                cout<<endl;




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
            for(i = 0; i<r; )
            {
                cout<<"que taco desea ordenar como su eleccion " <<i+1 <<": "; //el programa cuenta desde 0
                                                                    // pero se le sumo 1 aqui para que se muestren posiciones desde el 1
                cin>>arreglo[i];

                if((arreglo[i]>=0) && (arreglo[i]<=10))
                {
                    i++;


                }else
                {
                    cout <<endl;
                    cout << " ERROR  ";
                    cout <<endl;
                    cout << " INTRODUCE EL NUMERO DE NUEVO:  ";
                    cout <<endl;
                    cout <<endl;

                }
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
            cout<<endl;
            cout<<"EL PRECIO DE TODOS LOS TACOS ES DE 12 PESOS" <<endl;
            cout<<endl;
            cout<< endl;
            cout<< "PRODUCTOS" << endl;
            cout<<endl;
            cout<<"MENU DE TACOS" <<endl;
            cout<<endl;
            cout<<" 0 = TACO DE SAL" <<endl;
            cout<<" 1 = TACO DE PASTOR" <<endl;
            cout<<" 2 = TACO DE SUAPERRO" <<endl;
            cout<<" 3 = TACO DE BUCHE" <<endl;
            cout<<" 4 = TACO DE TRIPA" <<endl;
            cout<<" 5 = TACO DE BISTEC" <<endl;
            cout<<" 6 = TACO DE PURA TORTILLA" <<endl;
            cout<<" 7 = TACO DE QUESO" <<endl;
            cout<<" 8 = TACO DE CHICHARRON" <<endl;
            cout<<" 9 = TACO DE BARBACOA" <<endl;
            cout<<" 10 = TACO DE NADA" <<endl;
            cout<<endl;
            cout<<endl;
            if((cuenta>1)&&(cuenta<11))
                {
                    cout<<endl;
                    cout<<"SU ORDEN FUE: " <<endl;
                    for(int i=0; i<r; i++)
                    {
                        cout<<" " <<copiaarreglo[i]<<" ";
                    }
                    cout<<endl;
                    cout<<endl;
                    cout<<"TACOS   "<<cuenta<<"*" <<12<<"        :"<<"   $ "<<cuenta*12 <<".00" <<" PESOS" <<endl;
                    cout<<"IVA                 :  "<<" $ "<<15 <<".00" <<" PESOS" <<endl;
                    cout<<"PROPINA OBLIGATORIA :  "<<" $ "<<5 <<".00" <<"  PESOS" <<endl <<endl;
                    cout<<"----------------------------------------------" <<endl;
                    cout<<"PRECIO TOTAL        :  "<<" $ "<<(cuenta*12)+20 <<".00" <<" PESOS";
                    cout<<endl;
                    cout<<endl;
                    cout<<"ESTARA LISTA EN UN MOMENTO PRIMO " <<endl;
                }else{
                    cout<<endl;
                    cout<<"REALIZA TU ORDEN PRIMERO PRIMO uwu " <<endl;
                    cout<<endl;
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
            cout<<endl;
            cout<<"MENU DE TACOS" <<endl;
            cout<<endl;
            cout<<" 0 = TACO DE SAL" <<endl;
            cout<<" 1 = TACO DE PASTOR" <<endl;
            cout<<" 2 = TACO DE SUAPERRO" <<endl;
            cout<<" 3 = TACO DE BUCHE" <<endl;
            cout<<" 4 = TACO DE TRIPA" <<endl;
            cout<<" 5 = TACO DE BISTEC" <<endl;
            cout<<" 6 = TACO DE PURA TORTILLA" <<endl;
            cout<<" 7 = TACO DE QUESO" <<endl;
            cout<<" 8 = TACO DE CHICHARRON" <<endl;
            cout<<" 9 = TACO DE BARBACOA" <<endl;
            cout<<" 10 = TACO DE NADA" <<endl;
            cout<<endl;


            if((cuenta>1)&&(cuenta<11))
                {
                    cout << endl;
                    cout << "ORDENO" << endl;
                    for(int i=0; i<r; i++)
                    {
                        cout<<copiaarreglo[i]<<" ";
                    }

                    cout<<endl;
                    cout<<endl;
                    char flag ='F';
                    int contador=0;
                    int dato=0;


                    cout<<endl;
                    cout<<"introdusca el tipo de taco que desea buscar " << endl <<endl;
                    cout<<"si el taco se repite solo se mostrara la primera vez que lo pidio " << endl;
                    cout<<endl;
                    cin>>dato;
                    cout<<endl;
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
                        cout<<" Usted no pidio de ese tipo de tacos" << endl;
                        cout<<endl;
                        cout<<endl;
                    }
                    else if (flag =='V')
                    {
                        cout<<"el tipo de taco : " <<dato <<" si lo pidio y fue su eleccion numero: " <<contador  << endl;
                        cout<<endl;
                        cout<<endl;
                    }

                }else{
                    cout<<endl;
                    cout<<"REALIZA TU ORDEN PRIMERO PRIMO uwu " <<endl;
                    cout<<endl;
                }

            cout<<endl;
            system("pause");
            system("cls");
            break;}

        case 4:{
            cout<<endl;
            cout<< " EL PROGRAMA SE CERRARA " <<endl;
            cout<<endl;
            cout<< " VUELVA PRONTO uwu/" <<endl;
            cout<<endl;

            return 0;
            break;
            }
            }


    }while ((a>=1 && a<=4));
        cout<<endl;
        cout<<"ERROR ";
        cout<<endl;
        cout<<endl;
        cout<<" VUELVA PRONTO uwu/ " <<endl;
        cout<<endl;

}

