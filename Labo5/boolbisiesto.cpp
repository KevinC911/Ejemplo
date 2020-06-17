#include <iostream>
#include <cmath>

using namespace std;
bool bisiesto(int);

int main(void){
    int year;
    cout << "Bienvenido, con este programa podras saber si un año es bisisesto o no" << endl;
    cout << "Ingrese el año" << endl;
    cin >> year;

    if(bisiesto(year) == true){
        cout << "El año es bisiesto" << endl;
    }
    else{
        cout << "El año no es bisiesto" << endl;
    }
    
}

bool bisiesto(int year){
    if (year % 400 == 0){ 
        return true;
    }
    else if (year % 4 == 0 && ! year % 10 == 0){
        return true;
    }
    else{
        return false;
    }
    
}