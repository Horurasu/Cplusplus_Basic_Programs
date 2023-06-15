#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int numero;
    int boletos, lugares;
    int iniciador_para_el_rango;
    int a, b ;

    do{

        system("color B0");
        cout<<endl;
        cout<< "TRABAJO DE MARTIN JOAQUIN AGUILAR MUNOZ :3" <<endl;
        cout<<endl;
        cout<< "RIFA DE BOLETOS uwu" <<endl;
        cout<<endl;
        cout<< "opcion: 1 :EJECUTAR PROGRAMA" <<endl;
        cout<< "opcion: 2 :NO EJECUTAR PROGRAMA" <<endl;
        cout<<endl;
        cin>>a;
        cout<<endl;
        system("cls");

        switch(a)
        {
        case 1:{

                iniciador_para_el_rango = 0;
              while(iniciador_para_el_rango == 0){
                                    system("color 70");
                                    cout<<endl;
                                    cout<<"NO DEBE HABER MAS GANADORES QUE BOLETOS" <<endl;
                                    cout<<endl;
                                    cout<<"INTRODUCE  LA CANTIDAD DE BOLETOS VENDIDOS" <<endl;
                                    cout << "cantidad minima 1 y maxima 100   " << endl;
                                    boletos=0;
                                    cin>>boletos;

                                    cout<<endl;

                                    cout<<"INTRODUCE  LA CANTIDAD DE GANADORES" <<endl;
                                    cout << "cantidad minima 1 y maxima 10   " << endl;
                                    lugares=0;
                                    cin>>lugares;

                                if ((boletos>0) && (boletos<=100)&&(lugares>0) && (lugares<=10)&&(boletos>=lugares))
                                {
                                    iniciador_para_el_rango=1;
                                }else
                                    {
                                        cout<<endl;
                                        cout<<"ERROR" <<endl <<endl;
                                        cout<<"Alguno de los valores introducidos es incorrecto" <<endl <<endl;
                                        cout<<endl <<endl;
                                        system("pause");
                                        system("cls");

                                    }
                                }


                srand(time(0));

                for(int x=0; x<lugares; x++)
                {
                    numero=rand()% boletos+1;
                    cout << " El: "<<x+1 <<" lugar es el boleto num: "<<numero << endl; //empieza a contar desde 1
                    cout<<endl;
                }
                system("pause");
                system("cls");

        break;}



        case 2:{
            system("color 20");
            cout<<endl;
            cout<< " EL PROGRAMA SE CERRARA " <<endl;
            b=1;
            if(b = 1)
            {
                return 0;
            }
            else
            {
                return main();
            }
            break;
        }
        }


    }while (a>=1 && a<=2);

        system("color C7");
        cout<<endl;
        cout<<"ERROR   unu";
        cout<<endl;


}

























