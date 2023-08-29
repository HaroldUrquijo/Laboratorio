/*
Practica 1
Harold Jose Urquijo Duran
cc. 1193093197
*/
#include <iostream>

using namespace std;



int main()
{
    int opcion = 1;

    while(opcion =! 0){
        cout <<"Ingrese su opcion preferida: "<<endl;
        cin>>opcion;

    switch(opcion){
            //1 letra o vocal
        case 1: { cout<<"Has escogido el problema 1 "<<endl;
            char letra;
            cout<<"Ingresa una letra en minuscula: "<<endl;
            cin>>letra;
            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){

                cout<<"Es una vocal";
                cout<<endl;

            }else{

                cout<<"Es una letra: ";
                cout<<endl;
            }

            break;
            }
        //2. Maquina contadora de $
        case 2:{
            int din;
            cout<<"Ingrese la cantidad de dinero: "<<endl;
            cin>>din;

            cout<<"50000: "<<din/50000<<endl;
            din%=50000;
            cout<<"20000: "<<din/20000<<endl;
            din%=20000;
            cout<<"10000: "<<din/10000<<endl;
            din%=10000;
            cout<<"5000: "<<din/5000<<endl;
            din%=5000;
            cout<<"2000: "<<din/2000<<endl;
            din%=2000;
            cout<<"1000: "<<din/1000<<endl;
            din%=1000;
            cout<<"500: "<<din/500<<endl;
            din%=500;
            cout<<"200: "<<din/200<<endl;
            din%=200;
            cout<<"100: "<<din/100<<endl;
            din%=100;
            cout<<"50: "<<din/50<<endl;
            din%=50;
            cout<<"Faltante :"<<din<<endl;

            break;

            }

         // 3. Fecha valida:

        case 3:{



        break;

            }

    break;

        }


    }



    return 0;
}
