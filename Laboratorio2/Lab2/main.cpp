/******************************************************************************
Practica 2.
Harold Jose Urquijo Duran.
1193093197
*******************************************************************************/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <algorithm>

using namespace std;
//Prototipo de las funciones:
bool igual(string, string);
int convertir(string);
void convertir2(int ,string &);
string minamayus(string);
void separar(string, string&,string&);
void cinema();
void numberStars(int **,int ,int );
void rotacion(int **);
int factorial(int n);
void problem7();
int lengthArrayChar(char array[]);

int main()
{
    int opcion = 1;
    while(opcion !=0){
        cout<<"Ingrese su opcion preferida: "<<endl;
        cin>>opcion;
        switch(opcion){
        case 1:{
            cout<<"Ha escogido el problema 1"<<endl;
            cout<<"Problema de maquina registradora en arduino."<<endl;
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
        case 2:{
            cout<<"Ha escogido el problema 2, 200 letras aleatorias. "<<endl;

            char arreglo[200],letras[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},aux2;
            srand(time(NULL));
            int aux, k, i, j;
            for ( i=0;i<200;i++){
                aux=65;
                aux=aux+rand()%25;   //generador de letras aleatorias sumando desde la posicion A numeros desde el 0 al 25.
                arreglo[i]=aux;      //agrega los datos al arreglo llamado arreglo.
                cout<<arreglo[i];    //imprime los arreglos desde la posicion x.
            }
            cout<<endl;     //imprime un salto de linea
            aux=0;
            for ( j=0;j<26;j++){    //cicla entre las 26 letras del abcdario (sin contar la enie)
                aux2=letras[j];
                for (k=0;k<200;k++){   //compara entre las 200 letras cada una de las letras contenidas en el arreglo "letras".
                    if (aux2==arreglo[k]){
                        aux=aux+1;      //Cantidad de letra
                    }
                }
                cout<<"\n" <<letras[j]<<" : "<<aux<<endl;     //imprime las letras con la cantidad de veces que aparecen, y reinicia a 0 la variable aux.
                aux=0;
            }

            break;

        }

        case 3:{
            cout<<"Ha escogido el problema 3, comparar dos cadenas."<<endl;

            string a,b;
            cout<<"Ingrese la primer cadena: "<<endl;
            cin>>a;
            cout<<"Ingrese la segunda cadena: "<<endl;
            cin>>b;
            cout<<"Tamaño de la primera cadena "<<a.size()<<endl;
                    cout<<"Tamaño de la segunda cadena "<<b.size()<<endl;
                if (igual(a,b)){
                cout<<"Las dos cadenas son iguales."<<endl;

            }
            else{
                cout<<"Las dos cadenas son diferentes. "<<endl;
            }

            break;

        }

        case 4:{
            cout<<"Ha escogido el problema 4, cadena a entero."<<endl;

            int num;
            string frase;
            cout<<"Escriba la frase a transformar: "<<endl;
            cin>>frase;
            num = convertir(frase);
            cout<<"EL numero es: "<<num<<endl;
            return 0;


            break;
        }
        case 5:{
            cout<<"Ha escogido el problema 5, entero a cadena."<<endl;

            int num;
            string frase;
            cout<<"Ingrese el numero entero a convertir."<<endl;
            cin>>num;
            convertir2(num, frase);
            cout<<"La cadena de caracteres es: "<<frase<<endl;


            break;
        }
        case 6:{
            cout<<"Ha escogido el problema 6, minuscula a mayuscula."<<endl;
            string minus;
            cout<<"ingrese la palabra que desea convertir en mayusculas: "<<endl;
            cin>>minus;
            cout<<minamayus(minus)<<endl;
            return 0;

            break;
        }
        case 7:{
            cout<<"Ha escogido el problema 7, repetidos."<<endl;

            problem7();

            break;
        }
        case 8:{
            cout<<"Ha escogido el problema 8, cadena separa numeros."<<endl;

            string str, str2 = "\0", num = "\0";
            cout<<"digite la cadena de caracteres a separar: "<<endl;
            cin>>str;
            separar(str,str2,num);
            cout<<"Letras: "<<str2<<endl;
            cout<<"Numeros: "<<num<<endl;


            break;
        }
        case 9:{
            cout<<"Ha escogido el problema 9, separacion de numeros y suma."<<endl;

            int n=3,cond=0,acum=0,it=0,acum1=0,cambio=1;
            cout << "Ingrese n: ";
            cin>>n;
            char arreglo[] = "87512395";
            cout<< "Ingrese el arreglo: ";cin>>arreglo;
            int longitud = strlen(arreglo);
            int paso = longitud-1 ;

            while(cond!=n){
                while(it!=n){
                    if(paso<0){
                        break;}
                    else{
                        acum += (arreglo[paso] - '0') * cambio;
                        paso--;
                        cambio*=10;
                        it++;
                    }
                }
                acum1+=acum;
                acum=0;
                cond++;
                it=0;
                cambio=1;

            }
            cout<<"Original: "<<arreglo<<endl;
            cout<<"Suma: "<<acum1<<endl;

            break;
        }
        case 10:{
            cout<<"Ha escogido el problema 10, romano arabigo."<<endl;
            break;
        }
        case 11:{
            cout<<"Ha escogido el problema 11, cine"<<endl;

            cinema();

            break;
        }
        case 12:{
            cout<<"Ha escogido el problema 12, matriz magica."<<endl;

            int n=0 , sumadiagonal=0 , sumasfilas=0, sumascolumnas=0 ;
            bool Cuadrado =false;

            cout <<"Ingrese valores de las filas y las columnas:";
            cin >> n;

            int matriz [n][n] , sumaf[n] , sumac[n]  ;

            //Asignale valores a las posiciones de la matriz
            for(int i=0 ; i<n ; i++){                                           //Filas
                for(int j=0 ; j<n ; j++){                                       //Columnas
                    cout << "Ingrese el valor de la matriz[" << i << "]" << "[" << j << "]: ";
                    cin >> matriz [i][j];
                }
            }

            cout << endl << "La matriz es: " << endl;

            //Imprimir la matriz
            for (int i=0 ; i<n ; i++){
                for(int j=0 ; j<n ; j++)
                    cout << " | " << matriz [i][j];

                cout << " |" << endl;
            }



            //Suma filas
            for (int i=0 ; i<n ; i++){
                for(int j=0 ; j<n ; j++){
                    sumasfilas+=matriz[i][j];
                }

                sumaf[i]=sumasfilas;
                sumasfilas=0;
            }



            //Suma columnas
            for (int j=0 ; j<n ; j++){
                for(int i=0 ; i<n ; i++){
                    sumascolumnas+=matriz[i][j];

                }

                sumac[j]=sumascolumnas;
                sumascolumnas=0;
            }



            //Suma diagonal
            for(int i=0 , j=0 ; j<n ;j++ , i++){
                sumadiagonal+= matriz[i][j];
            }



            //Compara la suma de las filas con la suma de las columnas y la suma de la diagonal

            for (int i=0; i<n ; i++){

                if ((*(sumaf+i) == *(sumac+i)) && sumadiagonal == *(sumaf+i))
                    Cuadrado=true;

                else
                    Cuadrado=false;}

            if(Cuadrado==true)

            cout << endl << " SI,si es un cuadrado magico  " << endl;

            else
                cout << endl << "     NO,no es un cuadrado magico   " << endl;


            break;
        }
        case 13:{
            cout<<"Ha escogido el problema 13, cuadrado magico."<<endl;

            int filas=0,columnas=0;
            cout<<"Introduzca el numero de filas de la matriz: "; cin>>filas;
            cout<<"Introduzca el numbero de columnas de la matriz: "; cin>>columnas;
            int **matrix;
            matrix= new int *[filas];  //reservamos espacio.
            for(int i=0;i<filas;i++){
                matrix[i]=new int[columnas];
            }
            for(int j=0; j<filas;j++){
                for(int k=0;k<columnas;k++){
                    cout<<"Ingrese el valor para la posicion ["<<j<<"]["<<k<<"] "<<endl; cin>>*(*(matrix+j)+k);
                }
            }
            numberStars(matrix,filas,columnas);
            delete [] matrix;   //Liberamos espacio.


            break;
        }
        case 14:{
            cout<<"Ha escogido el problema 14, rotacion matriz."<<endl;

            int **matrix;
            matrix = new int*[5];
            for(int i=0;i<5; i++){
                matrix [i] = new int[5];   //reservando memoria.
            }
            int num = 1;
            for(int i=0; i<5; i++){
                for(int j=0; j<5; j++){
                    *(*(matrix+i)+j)= num;
                    cout<<num<<" ";
                    num += 1;
                }
                cout<<endl;
            }
            cout<<endl;

            int opcion;
            cout<<"Ingrese cual opcion es la preferida: "<<endl;
            cout<<"1 si quiere Rotar 90°"<<endl;
                        cout<<"2 si quiere Rotar 180°"<<endl;
                        cout<<"3 si quiere Rotar 270°"<<endl;
                        cin>>opcion;

            for(int i=0;i<opcion;i++){  //La funcion rota 9 grados, y se hace el numero de veces que el usuario lo necesite.
                rotacion(matrix);
            }
            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    cout<<*(*(matrix+i)+j)<<" ";
                }
                cout<<endl;
            }

            delete [] matrix; //Liberando memoria;

            break;
        }
        case 15:{
            cout<<"Ha escogido el problema 15"<<endl;

            //ff

            break;
        }
        case 16:{
            cout<<"Ha escogido el problema 16, caminos que tiene en una matriz nxn"<<endl;

            int tam=0;
            cout<<"Escriba un numero n: ";
            cin>>tam;
            int respuesta= (factorial(tam+tam))/(factorial(tam)*factorial(tam)); //Asi es la formula para que de los caminos.
            cout<<"Para una malla "<<tam<<"x"<<tam<<" hay "<<respuesta<<" caminos."<<endl;
            break;
        }


        case 17:{
            cout<<"Ha escogido el problema 17, numeros amigables."<<endl;
            int a=0,cont=0,cont1=0,suma=0;
            int almaceni=0;
            int almacenj=0;
            cout<<"Ingrese el valor de a: ";cin>>a;
            for(int i=a-1;i>=1;i--){
                for(int j=a-2;j>=1;j--){
                    for(int m=i-1;m>0;m--){
                        if(i%m==0){
                            cont+=m;
                        }
                    }
                    for(int r=j-1;r>0;r--){
                        if(j%r==0){
                            cont1+=r;
                        }
                    }
                    if(cont1==i && cont==j)
                    {
                        if(i!=j && almaceni!=j && almacenj!=i)
                        {

                            cout<<i<<" = "<<cont<<endl;
                            cout<<j<<" = "<<cont1<<endl;
                            suma+=cont1+cont;
                            almaceni=i;
                            almacenj=j;

                        }
                    }
                    else{cont=0;
                        cont1=0;}
                }
            }
            cout<<"El resultado de la suma es: "<<suma<<endl;


            break;
        }


        case 18:{
            cout<<"Ha escogido el problema 18, permutacion lexografica."<<endl;
            //Permutacion:

            int array[] = {0,1,2,3,4,5,6,7,8,9};
            int  n = 0;
            cout << "Ingrese el numero de la permutacion: ";cin >> n;

            for(int i=1;i<n;i++){
                next_permutation(array,array+10); //Halla la siguiente permutacion del arreglo

            }

            cout<<"La permutacion numero: "<<n<<" es ";

            cout << array[0] << array[1] << array[2] << array[3] << array[4] << array[5] << array[6] << array[7] << array[8] << array[9]  << endl;

            break;
        }
        }
    }
    return 0;
}
bool igual(string a, string b){
    if(a==b){
        return true;
    }
    else{
        return false;
    }
}
int convertir(string frase){
    int num = 0;
    for (int i = 0; i < frase.length(); i++) { //.length es el tamaño de la cadena.
        num = num * 10 + (frase[i] - '0'); //Con ascii formula para cambiar a numero.
    }
    return num;
}
void convertir2(int num,string &frase){
    //int num2 = 0;
    frase = "";
    if (num < 0) {
        frase += '-';
        num = -num; // por si el numero es negativo para trabajar en positivos.
    }
    if (num == 0) {
        frase += '0'; //por si el numero es cero:
    }
    while (num > 0) {
        char numero = (num % 10) + '0';
        frase = numero + frase; //se devuelve frase;
        num /= 10;
    }
}
string minamayus(string min){
    string pal,str2;
    char aux;
    int largo,aux2;
    largo=min.length(); //hallamos el tamaño
    for (int x=0;x<largo;x++){
        aux=min[x];
        aux2=min[x];
        if ((aux>=97)||(aux>=122)){ //entre la a y la z
            aux=(aux2-32); //Es la diferencia que hay entre Mayusculas y min en ascii.
            str2=str2+aux;
        }else if(aux==-92){
            aux=(aux2+1);
            str2=str2+aux;
        }else
            str2=str2+aux;
    }
    return str2;
}
void separar(string str,string& str2,string& num){
    char aux;
    for(int i=0; i<str.size(); i++){
        aux = str[i];
        if ((aux<48) || (aux<58)){ //para saber si es del 0 al 9;
            num += aux;
        }
        else{
            str2 += aux;
        }
    }
}
void cinema(){
    int **matrix;
    matrix=new int *[15];
    for(int i=0;i<15;i++){
        matrix[i]=new int[20];
    }
    for(int j=0;j<15;j++){
        for(int k=0;k<20;k++){
            *(*(matrix+j)+k)=0;
        }

    }
    bool finished=false;
    while(finished==false){
        for(int j=0;j<15;j++){
            for(int k=0;k<20;k++){
                if((*(*(matrix+j)+k))==0) cout<<"- ";  //Para cuando esta libre es 0.
                else cout<<"+ ";           //Cuando esta ocupado es 1.
            }
            cout<<endl;
        }
        char fila, option; int columna;
        cout<<"Ingrese a para reservar un asiento "<<endl<<"Ingrese b para cancelar una reserva "<<endl<<"Ingrese una letra diferente para salir "<<endl;
        cin>>option;
        if(option!='a' && option!='b') break;
        cout<<"Ingrese la fila A-O "<<endl; cin>>fila;
        cout<<"Ingrese la columna 1-20 "<<endl; cin>>columna;
        switch (fila) {
        case 'A':{
            if(option=='a') *(*(matrix)+(columna-1))=1;
            else *(*(matrix)+(columna-1))=0;
            break;
        }
        case 'B':{
            if(option=='a') *(*(matrix+1)+(columna-1))=1;
            else *(*(matrix+1)+(columna-1))=0;
            break;
        }
        case 'C':{
            if(option=='a') *(*(matrix+2)+(columna-1))=1;
            else *(*(matrix+2)+(columna-1))=0;
            break;
        }
        case 'D':{
            if(option=='a') *(*(matrix+3)+(columna-1))=1;
            else *(*(matrix+3)+(columna-1))=0;
            break;
        }
        case 'E':{
            if(option=='a') *(*(matrix+4)+(columna-1))=1;
            else *(*(matrix+4)+(columna-1))=0;
            break;
        }
        case 'F':{
            if(option=='a') *(*(matrix+5)+(columna-1))=1;
            else *(*(matrix+5)+(columna-1))=0;
            break;
        }
        case 'G':{
            if(option=='a') *(*(matrix+6)+(columna-1))=1;
            else *(*(matrix+6)+(columna-1))=0;
            break;
        }
        case 'H':{
            if(option=='a') *(*(matrix+7)+(columna-1))=1;
            else *(*(matrix+7)+(columna-1))=0;
            break;
        }
        case 'I':{
            if(option=='a') *(*(matrix+8)+(columna-1))=1;
            else *(*(matrix+8)+(columna-1))=0;
            break;
        }
        case 'J':{
            if(option=='a') *(*(matrix+9)+(columna-1))=1;
            else *(*(matrix+9)+(columna-1))=0;
            break;
        }
        case 'K':{
            if(option=='a') *(*(matrix+10)+(columna-1))=1;
            else *(*(matrix+10)+(columna-1))=0;
            break;
        }
        case 'L':{
            if(option=='a') *(*(matrix+11)+(columna-1))=1;
            else *(*(matrix+11)+(columna-1))=0;
            break;
        }
        case 'M':{
            if(option=='a') *(*(matrix+12)+(columna-1))=1;
            else *(*(matrix+12)+(columna-1))=0;
            break;
        }
        case 'N':{
            if(option=='a') *(*(matrix+13)+(columna-1))=1;
            else *(*(matrix+13)+(columna-1))=0;
            break;
        }
        case 'O':{
            if(option=='a') *(*(matrix+14)+(columna-1))=1;
            else *(*(matrix+14)+(columna-1))=0;
            break;
        }
        default:{
            cout<<"Los valores ingresados son invalidos "<<endl;
        }
        }
    }
    delete [] matrix;
}
void numberStars(int **p,int filas ,int columnas){
    int result=0;
    int count=0;
    for(int i=1;i<(filas-1);i++){
        for(int j=1;j<(columnas-1);j++){   //se recorre las filas y las columnas.
            result=(*(*(p+i)+j)+*(*(p+(i-1))+(j-1))+*(*(p+(i-1))+(j+1))+*(*(p+(i+1))+(j-1))+*(*(p+(i+1))+(j+1)))/5; //aplicamos la formula que esta en la practica.
            if(result>6) count+=1;
        }
    }
    cout<<"El numero de estrellas encontradas es: "<<count<<endl;
}
void rotacion(int **p){
    int **p2;
    p2= new int*[5];
    for(int i=0;i<5;i++){
        p2[i]=new int[5];
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            *(*(p2+i)+j)=*(*(p+i)+j);
        }
    }
    for(int i=0;i<5;i++){
        int k=4;
        for(int j=0;j<5;j++){
            *(*(p+i)+j)=*(*(p2+k)+i);
            k-=1;
        }
    }
    delete [] p2; //liberando memoria.
}
int factorial(int n){
    int out=1;
    for(int i=n;i>=1;i--){
        out*=i;
    }
    return out;
}
int lengthArrayChar(char array[]){
    int count=1;
    int i=1;
    while(i!=0){
        if(array[i]=='\0')
            i=0;
        else{
            count+=1;
            i+=1;
        }
    }
    return count;
}

void problem7(){
    char word[25];
    cout<<"Ingrese la palabra a la cual se le retiraran las letras repetidas: "<<endl; cin>>word;
    int n=lengthArrayChar(word);
    char newWord[n];
    for(int i=0;i<n;i++){
        newWord[i]='-';
    }
    newWord[0]=word[0];
    int k=1;
    for(int i=1;i<n;i++){
        char lyrics=word[i];
        bool include=true;
        for(int j=0;j<n;j++){
            if(newWord[j]==lyrics){
                include=false;
                break;
            }
        }
        if(include==true){
            newWord[k]=lyrics;
            k+=1;
        }
    }
    newWord[k]='\0';
    for(int l=0;l<n;l++){
        cout<<newWord[l];
        if(newWord[l+1]=='\0') l=n;
    }
    cout<<endl;
}
