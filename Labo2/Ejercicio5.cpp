#include <iostream>
#include <string>

using namespace std;

int main (void){
    string palabra;
    int finalpalabra;
    cout << "Escriba la palabra" << endl;
    cin >> palabra;
    finalpalabra = palabra.length();

    if (palabra.at(0) == palabra.at(finalpalabra - 1)){
        cout << "La palabra empieza y termina la misma letra" << endl;
    } 
    else{
        cout << "La palabra no empieza ni termina en la misma letra" << endl;
    }
    
    return 0;
}