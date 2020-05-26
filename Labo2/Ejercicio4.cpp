#include <iostream>
#include <string>

using namespace std;

int main (void){
    string str, palabra;
    cout << "Soy un programa que puede saber el numero de caracteres de una palabra y si es mayor a 10 y si es par o impar" << endl;
    cout << "Ingrese la palabra" << endl;
    cin >> palabra;
    cout << palabra << " tiene una longitud de: " << palabra.length() << " caracteres" << endl;

    if (palabra.length() > 10){
        cout << "La palabra es mayor a 10 caracteres" << endl;
    }
    else{
        cout << "La palabra es menor a 10 caracteres" << endl;
    }
    if (palabra.length() % 2 == 0){
        cout << "El numero de caracteres de la palabra es par" << endl;
    }
    else{
        cout << "El numero de caracteres de la palabra es impar" << endl;
    }
    return 0;
}