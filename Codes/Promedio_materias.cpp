#include <iostream>

using namespace std;

int main()
{
    string student;
    double grade;
    double average=0;




    cout << "MARTIN JOAQUIN AGUILAR MUNOZ HOMEWORK" << endl;
    cout <<endl;
    cout << "PROGRAM THAT CAN CALCULATE YOUR GRADE POINT AVERAGE";
    cout <<endl;
    cout <<endl;
    cout << "INTRODUCE YOUR NAME:  ";
    cin>>student;
    cout <<endl;
    system("cls");


    for(int i=0;i<5;)
    {
        cout << "INTRODUCE YOUR GRADE  " <<i+1 <<" :  ";
        cin>>grade;

        if((grade>=0) && (grade<=10))
            {
                average=average+grade;
                i++;
                system("cls");
            }else
            {
                cout <<endl;
                cout << " ERROR  ";
                cout <<endl;
                cout << " INTRODUCE THE NUMBER AGAIN:  ";
                cout <<endl;
                cout <<endl;
                system("pause");
                system("cls");
            }
    }

    cout <<endl;
    cout << "AVERAGE:  " <<average/5;;
    cout <<endl;
    if(average/5>6.9)
            {
                cout<<student <<" HAVE A APPROVATORY GRADE  :D ";
                cout<<endl;
            }else
            {
                cout<<student <<" DONT HAVE A APPROVATORY GRADE  :C ";
                cout<<endl;
            }




    return 0;
}
