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
            cout<<"Has escogido el problema 2 "<<endl;
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
            cout<<"Has escogido el problema 3 : ";

            int dia, mes;
            cout<<"Ingrese un dia y un mes: "<<endl;
            cin>>dia>>mes;

            if(mes == 1 || mes == 3 || mes == 5 || mes == 7|| mes == 8 || mes == 10 || mes == 12){
                if (dia<=31){
                    cout<<dia<<"/"<<mes<<" es una fecha válida. "<<endl;
                }else{
                    cout<<"Dia invalido.";
                }
            }
            else if(mes == 4 || mes == 6 || mes == 9 || mes == 11 ){

                if (dia<=30){
                    cout<<dia<<"/"<<mes<<" es una fecha válida. "<<endl;
                }else{
                    cout<<"Día invalido. ";

                }


            }else if(mes == 2){


                if(dia<29 && dia>0){
                    cout<<dia<<" / "<<mes<<" es una fecha valida. "<<endl;

                }else if(dia == 29){
                    cout<<dia<<"/"<<mes<<" es valido en bisiesto"<<endl;
                }else{
                    cout<<dia<<" es un dia invalido. "<<endl;
                }

            }else if(mes>=13){
                cout<<"Fecha invalida."<<endl;
            }

            break;

        break;

            }

    break;

     // confirmador de horas

    case 4:{

        int hora, duracion, horas, minutos,  hora_original, minutos_original, minutos_duracion, horas_duracion;
        int horas_totales,  minutos_totales;

        cout << "Introduce la hora en formato HHMM: ";
        cin >> hora;

        cout << "Introduce la duracion en formato HHMM: ";
        cin >> duracion;

        // Para extraer las horas y los minutos de la hora original y la duración
        hora_original = hora / 100;
        minutos_original = hora % 100;
        horas_duracion = duracion / 100;
        minutos_duracion = duracion % 100;

        // para Calcular la hora resultante
        horas_totales = hora_original + horas_duracion;
        minutos_totales = minutos_original + minutos_duracion;

        // Ajustar la hora resultante si los minutos si se pasa 60
        if(minutos_totales >= 60) {
                horas_totales += 1;
                minutos_totales -= 60;
        }

        // Ajustar la hora resultante si las horas se pasa de 24
        if(horas_totales >= 24) {
                horas_totales -= 24;
        }


        cout << "La hora es: " << horas_totales << minutos_totales << endl;


        break;

        }

    //figura
    case 5: {cout<<"Has escogido el problema 5 : ";



        int numero;
        int ast=0, esp=0;
        cout<<"Ingrese un numero impar: ";
        cin>>numero;
        if (numero%2!=0){
                for (int i=1; i<=(numero/2)+1;i++){ //para recorrer cada fila
                    for(esp=i; esp<=numero-1; esp++){
                        cout<<" ";
                    }
                    for(ast=1; ast<=(2*i)-1; ast++){ //para los asteriscos
                        cout<<"*";
                    }
                    cout<<endl;
                }
                for (int i=numero/2; i>=1;i--){ //lo mismo del for anterior, pero a la inversa
                    for(esp=i; esp<=numero-1; esp++){
                        cout<<" ";
                    }
                    for(ast=1; ast<=(2*i)-1; ast++){
                        cout<<"*";
                    }
                    cout<<endl;
                }

        }
        else{
                cout<<"No es un numero impar, por favor intente de nuevo. ";
        }


        break;
    }

      }




    }



    return 0;
}
