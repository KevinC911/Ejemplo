#include <iostream>

using namespace std;

int main (void){
    int numero;
    cout << "Soy un numero que puede saber si tu numero es negativo, positivo o cero" << endl;
    cout << "Ingrese el numero" << endl;
    cin >> numero;

    if (numero == 0){
        cout << "El numero es cero" << endl;
    }
    else if (numero >= 0){
        cout << "El numero es positivo" << endl;
    }
    else{
        cout << "El numero es negativo" << endl;
    }
return 0;
} 