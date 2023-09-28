/*
Practica 1
Harold Jose Urquijo Duran
cc. 1193093197
*/

#include <iostream>


using namespace std;

//Prototipo de las funciones....

bool EsPrimo(int n);
int mcm(int a, int b);
int maxFactorPrimo(int n);
bool es_palindromo(int n);


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

    case 6: { cout<<"Has escogido el problema 6 : ";

        //serie de euler = 1/0! + ....

        int A;
        float factorial_total = 1.0;
        float sum = 0.0;
        cout <<"Ingrese un numero: ";
        cin>>A;
        A=A-1;//porque la sumatoria va de 0 hasta n-1
        int i=A;
        while(i>0){
                while(A>=1){
                    factorial_total*=A;
                    A=A-1;
                }
                A=i-1;
                i=i-1;
                sum=sum+(1/factorial_total);
                factorial_total=1.0;
        }
        cout<<"e es aproximadamente "<<sum+1.0<<endl;


        break;
    }

    case 7: { cout<<"Has escogido el problema 7 : ";
        //serie de fibonacci y sume los numeros pares.

        int A=1,B=1,C,numero,sumpares=0;
        cout<<"Ingrese un numero: ";
        cin>>numero;
        while(B<=numero){
                C=A+B;//1235..
                A=B;//112
                B=C;//123
                if(B%2==0){  //comprabar si es par.
                    if(B<numero){
                        sumpares+=B;
                    }
                }
        }
        cout<<"El resultado de la suma es: "<<sumpares<<endl;

        break;
    }

    case 8: { cout<<"Has escogido el problema 8 : ";


        //multiplos de a y b menores que c.
        int a,b,c;
        cout << "Ingrese el primero numero: ";
        cin >> a; //5
        cout << "Ingrese el segundo numero: ";
        cin >> b; //3
        cout << "Ingrese el tercer numero: ";
        cin >> c; //10
        int d=0, e=0;
        for(int cont=a;cont<c;cont++){ //5;5<10;6 para encontrar los multiplos de a.
                if(cont%a==0){
                    cout << cont <<"+";
                    d=d+cont;
                }
                else if(cont%b==0){

                }
        }
        for(int cont=b;cont<c;cont++){//3;3<10  Para encontrar los multiplos de b.
                if(cont%a==0){

                }
                else if(cont%b==0){
                    if(cont==c-1){
                        cout<<cont;
                        e=e+cont;
                    }
                    else {
                        cout<<cont<<"+";
                        e=e+cont;
                    }
                }
        }
        cout << " = "<<d+e<<endl;

        break;
    }

    case 9: { cout<<"Has escogido el problema 9: ";

        //Suma de numeros elevados a la N.

        //Problema 9:
        int n, digito, potencia = 0, suma = 0;

        cout << "Ingrese un numero entero: "<<endl;
        cin >> n;


        while (n != 0) {         //Para que salga cuando ya se descomponga todo el n
                digito = n % 10;
                potencia = digito;
                for (int i = 1; i < digito; i++) {  //Calculo de la potencia sin pow
                    potencia = potencia * digito;
                }
                suma = suma + potencia;
                n = n / 10;    //para pasar al siguiente numero
        }

        cout << "El resultado de la suma es: " << suma << endl;

        break;
    }

    case 10: { cout<<"Has escogido el problema 10 : ";
        // Funcion si el numeroe s primo:
        int n, contador = 0,i=2;
        bool val = false;

        cout<<"Ingrese un numero primo: "<<endl;
        cin>>n;
        while(n!=contador){
                if(EsPrimo(i)){
                    contador = contador + 1;

                }
                i++;
        }
        cout<<"El primo "<<n<<" es "<<i-1<<endl;



        break;
    }
    case 11: {cout<<"Has escogido el problema 11 : ";
        // minimo comun multiplo
        int n;
        cout << "Ingrese un numero: ";
        cin >> n;
        int lcm = 1;
        for (int i = 2; i <= n; i++) {
                lcm = mcm(lcm, i); //Invocando la funcion para calcular el mcm
        }
        cout << "El minimo comun multiplo es: "<< " "<<lcm << endl;


        break;
    }

    case 12: {cout<<"Has escogido el problema 12 : ";
        //el maximo factor primo de un num.

        int n, maxFactor;
        cout << "Ingrese un numero: ";
        cin >> n;
        maxFactor = maxFactorPrimo(n);
        cout << "El mayor factor primo de " << n << " es: " << maxFactor << endl;


        break;
    }
    case 13: {cout<<"Has escogido el problema 13 : ";

        //Calcula la suma de todos los primos menores al ingresado.
        int num, suma = 0;
        cout<<"Digite un numero: ";
        cin>>num;


        for(int i = 2; i < num; i++){
                if(EsPrimo(i)){
                    suma = suma + i;
                }
        }
        cout <<"El resultado de la suma es: "<<suma<<endl;

        break;
    }

    case 14: { cout<<"Has escogido el problema 14 : ";

        //palindromo mas grande.

        int palindromo_mas_grande = 0;

        for (int i = 100; i < 1000; i++) {
                for (int j = 100; j < 1000; j++) { // iterar entre los 2 numeros menores de 1000 para multiplicarlos y comprobar un palindromo
                    int producto = i * j;

                    if (es_palindromo(producto) && producto > palindromo_mas_grande) {
                        palindromo_mas_grande = producto;
                    }
                }
        }

        cout << "El palindromo mas grande es: " << palindromo_mas_grande << endl;

        break;
    }
    case 15: {cout<<"Has escogido el problema 15 : ";

        //La espiral


        cout<<"Ingrese un numero impar: ";
        int N;
        int contador1=0;
        cin>>N;

        if (N%2==0){
                cout<<"El numero ingresado es par"<<endl;
        }
        else {

                int suma_principal=0;
                for(int i=3;i<=N;i+=2){

                    contador1+=1;
                    suma_principal+=i*i;

                }

                int suma_pares=0;

                for(int i=2;i<=contador1*2;i+=2){
                    suma_pares+=i;
                }

                int suma_total=0;

                int au;
                au=suma_principal;

                for(au;au!=(suma_principal-(suma_pares*4));au-=suma_pares){
                    suma_total+=au;
                }

                suma_total++;

                cout<<"En una espiral de "<<N<<"x"<<N<<", la suma es: "<<suma_total<<endl;
        }

        break;
    }
    case 16: {cout<<"Has escogido el problema 16 : ";

        //serie de collatz

        int k;
        cout << "Ingrese un numero entero k: ";
        cin >> k;

        int j = 1; // semilla inicial
        int m = 1; // longitud de la serie más larga
        for (int i = 2; i < k; i++) {
                int n = i; // valor actual de la semilla
                int count = 1; // longitud de la serie actual
                while (n != 1) {    //la serie termina al llegar a un elemento que sea 1
                    if (n % 2 == 0) {
                        n /= 2;   // asi es la formula por si el siguiente num es par
                    } else {
                        n = 3*n + 1; // asi es la formula si el siguiente num es impar
                    }
                    count++;
                }
                if (count > m) {
                    j = i;
                    m = count;
                }
        }

        cout << "La serie mas larga es con la semilla: " << j << ", teniendo " << m << " terminos." << endl;



        break;
    }
    case 17: {cout<<"Has escogido el problema 17 : ";

        //secuencia de numeros triangulares.

        int k;
        cout << "Ingrese un valor para k: ";
        cin >> k;

        int n = 1;
        int num_divisores = 1;
        while (num_divisores <= k) {
                int triangular = n*(n+1)/2;   //formula
                num_divisores = 0;
                for (int i = 1; i <= triangular; i++) {
                    if (triangular % i == 0) {
                        num_divisores++;
                    }
                }
                n++;
        }

        cout << "El numero es: " << (n-1)*(n)/2 << " que tiene " << num_divisores << " divisores." << endl;


        break;
    }
    default:{ if(opcion!=0)cout<<"Opcion invalida: ";

        break;
    }
    }
    }


    return 0;

}
bool EsPrimo(int n){
    for (int i = 2; i <= n/2; i++){
    if (n%i == 0){
        return false;
    }
    }

    return true;

}
int mcm(int a, int b) {
    int m = a * b;
    while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
    }
    return m / a;
}
int maxFactorPrimo(int n) {
    int maxFactor = 1;
    for (int i = 2; i <= n; i++) {
    if (n % i == 0 && EsPrimo(i)) {
        maxFactor = i;
    }
    }
    return maxFactor;
}
bool es_palindromo(int n) {
    int original = n;
    int inverso = 0;

    while (n > 0) {
    inverso = inverso * 10 + n % 10;
    n /= 10;
    }

    return original == inverso;
}

