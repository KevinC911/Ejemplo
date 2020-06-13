#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    int year;
    cout << "Bienvenido, con este programa podras saber si un año es bisisesto o no" << endl;
    cout << "Ingrese el año" << endl;
    cin >> year;
    
    if (year % 400 == 0){ //El primer proceso para saber si un año es bisiesto
        cout << "El año es bisiesto" << endl;
    }
    else if (year % 4 == 0 && ! year % 10 == 0){ //El segundo proceso, el cual se compone de dos condiciones que tiene que cumplirse
        cout << "El año es bisiesto" << endl;
    }
    else{
        cout << "El año no es bisiesto" << endl;
    }
    return 0;
}