#include <iostream>

using namespace std;

int main()
{
    int a, b ;
    float alumnos[20][20];
    float promedio_de_salon[20];
    int cantidad_salones, cantidad_alumnos;
    int iniciador_para_pedir_numero_salones_alumnos;


    do{
        cout<<endl;
        cout<< "TAREA DE MARTIN JOAQUIN AGUILAR MUNOZ ;-;" <<endl;
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
                 cout<<endl;
                 iniciador_para_pedir_numero_salones_alumnos=0;

                 cout<<"PROGRAMA PARA SACAR PROMEDIOS DE SALONES"<<endl;


                 while(iniciador_para_pedir_numero_salones_alumnos == 0){

                        cout<<endl;
                        cout<<"INTRODUCE  LA CANTIDAD DE SALONES QUE NECESITAS PARA EL PROMEDIO" <<endl;
                        cout << "cantidad minima 1 y maxima 10   " << endl;
                        cantidad_salones=0;
                        cin>>cantidad_salones;

                        cout<<endl;

                        cout<<"INTRODUCE LA CANTIDAD DE ALUMNOS QUE NECESITAS PARA EL PROMEDIO" <<endl;
                        cout << "cantidad minima 1 y maxima 10   " << endl;
                        cantidad_alumnos=0;
                        cin>>cantidad_alumnos;

                    if ((cantidad_salones>0) && (cantidad_salones<=10)&&(cantidad_alumnos>0) && (cantidad_alumnos<=10))
                    {
                        iniciador_para_pedir_numero_salones_alumnos=1;
                    }else
                        {
                            cout<<endl;
                            cout<<"ERROR" <<endl <<endl;
                            cout<<"Alguno de los numeros capturados no esta en el rango establecido" <<endl <<endl;
                            cout<<endl <<endl;
                            system("pause");
                            system("cls");

                        }
                    }

                   for(int x=1; x<cantidad_salones+1; x++)  //el programa no empieza a contar desde 0
                    {
                        cout<<endl;
                        cout<<"ESCRIBA LAS CALIFICACIONES DEL SALON: " << x <<endl;
                        cout<<endl;
                        for(int y=1; y<cantidad_alumnos+1; y++)
                        {

                            cout<<"escriba la calificacion del alumno " << y <<endl;
                            cin>>alumnos[x][y];

                            promedio_de_salon[x]=promedio_de_salon[x]+alumnos[x][y];
                        }
                        promedio_de_salon[x]=(promedio_de_salon[x])/cantidad_alumnos;

                    }
                    cout<<endl;
                    cout<<endl;
                    cout<<"PROMEDIOS" <<endl;
                    for(int x=1; x<cantidad_salones+1; x++)
                    {
                        cout<<endl;
                        cout<<"el promedio del salon " <<x << " es: " <<endl;
                        cout<<promedio_de_salon[x] <<endl;
                        promedio_de_salon[x]=0;
                    }
                    cout<<endl;
                    system("pause");
                    system("cls");
                    break;}



        case 2:{
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
        cout<<endl;
        cout<<"ERROR";
        cout<<endl;


}

