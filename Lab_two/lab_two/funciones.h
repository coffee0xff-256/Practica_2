#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
using namespace std;

bool problem_3(){
    char cadena_one[20] = {0};
    char cadena_two[20] = {0};
    cout<<"Ingresa una palabra"<<endl;
    cin >> cadena_one;
    cout<<"Ingresa otra palabra"<<endl;
    cin >> cadena_two;
    bool comprobacion[20] = {true};
    for(int i = 0; i < 20;i++){
        if(cadena_one[i] == cadena_two[i]){comprobacion[i]=true;}
        else{comprobacion[i]=false;}
    }
    for(int i = 0; i < 20;i++){
        if(comprobacion[i] == false){
            cout<<"Las cadenas de caracteres no son iguales"<<endl;
            return 0;
            break;

        }
    }
    cout<<"Las cadenas de caracteres  son iguales"<<endl;
    return 0;}

void problem_5(){
    int x = 0;
    cout<<"Ingresa un numero "<<endl;
    cin >> x;
    char numero[15] = {};
    char numero_ascii[15] = {};
    int indice = 0;

    while(x > 0){
        numero[indice] = '0'+(x%10);
        x/=10;
        indice ++;
    }

    int indice_2 = 0;

    for(int i = indice; i >= 0 ; i--  ){
        numero_ascii[indice_2] = numero[i];
        indice_2 ++;
    }
    numero_ascii[indice_2] = '\0';

    for(int i = 0; i < 20; i++){
        cout<<numero_ascii[i];
    }
}

void problem_7(){
    char array[15] = {};
    cout<<"Ingresa una palabra"<<endl;
    cin >> array;
    int indice = 0;

    while(array[indice] != '\0'){
        int j = indice + 1;

        while(array[j]!= '\0' ){
        if(array[indice] == array[j]){
            int k = j;
            while(array[k] != '\0' ){
                array[k] = array[k+1];
                k++;
            }
        }
        else{j++;}


    }
        indice ++;
}

    for(int i = 0;i<15;i++){
    cout<<array[i];
    }

}

void problem_11(){
    const int filas = 15;
    const int asientos = 20;

    char sala[filas][asientos];

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < asientos; j++)
        {
            sala[i][j] = '_';
        }
    }

    int opcion = 0;

    while (opcion != 4)
    {
        cout << "MENU" << endl;
        cout << "1. Mostrar sala" << endl;
        cout << "2. Reservar asiento"<< endl;
        cout << "3. Cancelar reserva"<< endl;
        cout << "4. Salir "<< endl;
        cout << "Seleccione: ";
        cin >> opcion;

        if (opcion == 1)
        {
            cout << "   ";
            for (int j = 0; j < asientos; j++)
                cout << j + 1 << " ";
            cout << endl;

            for (int i = 0; i < filas; i++)
            {
                cout << char('A' + i) << "  ";
                for (int j = 0; j < asientos; j++)
                    cout << sala[i][j] << " ";
                cout << endl;
            }
        }

        else if (opcion == 2)
        {
            char fila;
            int asiento;

            cout << "Fila (A-O): ";
            cin >> fila;
            cout << "Asiento (1-20): ";
            cin >> asiento;

            int f = fila - 'A';
            int a = asiento - 1;

            if (f >= 0 && f < filas && a >= 0 && a < asientos)
            {
                if (sala[f][a] == '_')
                {
                    sala[f][a] = 'X';
                    cout << "Reservado"<<endl;
                }
                else
                {
                    cout << "Ocupado"<<endl;
                }
            }
            else
            {
                cout << "Datos invalidos"<<endl;
            }
        }

        else if (opcion == 3)
        {
            char fila;
            int asiento;

            cout << "Fila (A-O): ";
            cin >> fila;
            cout << "Asiento (1-20): ";
            cin >> asiento;

            int f = fila - 'A';
            int a = asiento - 1;

            if (f >= 0 && f < filas && a >= 0 && a < asientos)
            {
                if (sala[f][a] == 'X')
                {
                    sala[f][a] = '_';
                    cout << "Cancelado" << endl;
                }
                else
                {
                    cout << "Ya esta libre" <<endl;
                }
            }
            else
            {
                cout << "Datos invalidos"<<endl;
            }
        }
    }

}


    
}



void problem_13(){

    int galaxia[6][8] = {
        {0, 3, 4, 0, 0, 0, 6, 8},
        {5, 13, 6, 0, 0, 0, 2, 3},
        {2, 6, 2, 7, 3, 0, 10, 0},
        {0, 0, 4, 15, 4, 1, 6, 0},
        {0, 0, 7, 12, 6, 9, 10, 4},
        {5, 0, 6, 10, 6, 4, 8, 0}
    };

    int (*galaxi)[8]= galaxia;
    int *ptr = *(galaxi + 1); // accedo al trece
    int star = 0;
    //cout << *((ptr+1)-8);
    float formula = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6 ; j++){
             ptr += 1;
            formula = ((*ptr) + (*(ptr - 1))+(*(ptr + 1))+(*(ptr - 8))+(*(ptr + 8)))/5; // aplico la formula
            if(formula >= 6){star ++;}

            cout<<*ptr<<endl;
        }
        ptr +=2 ;
    }

    cout<<"El numero de estrellas que hay en la galaxia  NGC 1300 es de : "<<star<<" stars"<<endl;

}

void problem_15(){
    int x = 0, y = 0 ,ancho = 0 , alto = 0;
    int a1[4] = {0,0,8,4};
    int a2[4] = {5,2,6,7};
    int a3[4] = {};


    if(a1[0] > a2[0]){
        x = a1[0];
    }else{x = a2[0];}

    if(a1[1] > a2[1]){
        y = a1[1];
    }else{y = a2[1];}

    int derecha1= a1[0]+a1[2];
    int derecha2 = a2[0]+a2[2];

    int bajo1 = a1[1]+a1[3];
    int bajo2 = a2[1]+a2[3];

    if(derecha1 < derecha2){
        ancho = derecha1-x;
    }else{ancho = derecha2 - x;}

    if (bajo1 < bajo2){
        alto = bajo1 - y;
    }else{alto = bajo2 - y;}

    if (ancho > 0 && alto > 0) {
        a3[0] = x;
        a3[1] = y;
        a3[2] = ancho;
        a3[3] = alto;
        cout<<"el rectangulo intersectado es "<< endl;
        for(int i = 0; i < 4; i++){
            cout<<a3[i]<<" ";
        }
        cout <<endl;

    }
    else{cout<<"los rectangulos no se interceptan "<<endl;}




}

void problem_17(){
    int limite, total = 0;
    cout << "ingrese un numero: ";
    cin >> limite;

    for (int a = 1; a < limite; a++) {
        int suma_a = 0;
        for (int i = 1; i < a; i++) {
            if (a % i == 0) {
                suma_a = suma_a + i;
            }
        }
        int b = suma_a;
        if (b > a && b < limite) {
            int suma_b = 0;
            for (int i = 1; i < b; i++) {
                if (b % i == 0) {
                    suma_b = suma_b + i;
                }
            }
            if (suma_b == a) {
                total = total + a + b;
            }
        }
    }
    cout << "el resultado de la suma es: " << total << endl;


}


#endif // FUNCIONES_H
