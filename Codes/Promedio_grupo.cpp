#include <iostream>

using namespace std;

int main()
{
    int alumno[100];
    int promedio_de_alumnos=0;
    int cantidad_alumnos=0;
    int iniciador_para_poder_pedir_un_valor_nuevo=0;

    cout << "Programa hecho por Martin Aguilar, 2020 todos los derechos reservados" << endl;
    cout << endl;

    while(iniciador_para_poder_pedir_un_valor_nuevo == 0){

                cout<<endl;
                cout<<"CAPTURA LA CANTIDAD DE ALUMNOS QUE NECESITAS PARA EL PROMEDIO" <<endl;
                cout << "Cantidad maxima 50 y cantidad minima 1  " << endl;
                cin>>cantidad_alumnos;

                if ((cantidad_alumnos>0) && (cantidad_alumnos<=50))
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
            for(int cont=0; cont<cantidad_alumnos; cont=cont+1)
                    {
                        cout << "Escriba la calificacion del alumno  "<<cont+1 << endl;
                        cin >>alumno[cont];
                        promedio_de_alumnos=promedio_de_alumnos+alumno[cont];
                    }

                    promedio_de_alumnos=(promedio_de_alumnos)/cantidad_alumnos  ;
                    cout<<"el promedio de todos los alumnos es: " <<promedio_de_alumnos <<endl;
                    cout << endl;
                    return 0;


}
