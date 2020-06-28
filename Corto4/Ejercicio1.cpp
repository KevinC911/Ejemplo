#include <iostream>
#include <string>

using namespace std;

char CodMur(char B[], int a);

int main(void){
    int n;
    cout << "BIENVENIDO AL CONVERSOR DE CLAVE MURCIELAGO" << endl;
    cout << "Introduzca la frase que desea convertir" << endl;
    string Palabra;
    getline (cin, Palabra);
    n = Palabra.length();
    char Codigo[Palabra.length()];
    for(int i=0; i < Palabra.length(); i++){
        Codigo[i] = Palabra.at(i);
    }
    cout << endl;
    CodMur(Codigo, n);
    Codigo[n] = ' ';

    cout << "Su frase con la clave Murcielago, es: " << Codigo << endl;

    return 0;
}

char CodMur(char Codigo[], int n){
    for (int i=0; i < n; i++){
        switch (Codigo[i]){
            case 'm':
            Codigo[i] = 48;
            break;
            case 'u':
            Codigo[i] = 49;
            break;
            case 'r':
            Codigo[i] = 50;
            break;
            case 'c':
            Codigo[i] = 51;
            break;
            case 'i':
            Codigo[i] = 52;
            break;
            case 'e':
            Codigo[i] = 53;
            break;
            case 'l':
            Codigo[i] = 54;
            break;
            case 'a':
            Codigo[i] = 55;
            break;
            case 'g':
            Codigo[i] = 56;
            break;
            case 'o':
            Codigo[i] = 57;
            break;

        }
    }
    return Codigo[n];
}
