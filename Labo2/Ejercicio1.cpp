#include <iostream>

using namespace std;

int main (void){
    int numerador, denominador, cociente;
    cout << "Soy un programa que puede saber si un numero es divisible entre otro" << endl;
    cout << "Ingrese el primer numero o numerador" << endl;
    cin >> numerador;
    cout << "Ahora ingrese el segundo numero o denominador" << endl;
    cin >> denominador;
    cout << endl;

    while (numerador >= denominador){
        numerador = numerador - denominador;

    }

    if (numerador == 0){
        cout << "Los numeros son divisibles" << endl;
    }
    else {
        cout << "Los numeros  no son divisibles" << endl;
    }

return 0;
}

