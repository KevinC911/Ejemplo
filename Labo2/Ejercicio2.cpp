#include <iostream>

using namespace std;

int main (void){
    int numero;
    cout << "Soy un programa que puede verificar si un numero es par o impar"<< endl;
    cout << "Ingrese el numero" << endl;
    cin >> numero;

    if (numero % 2 == 0){
        cout << "El numero es par" << endl;
    }
    else{
        cout << "El numero no es par" << endl;
    }
return 0;
}