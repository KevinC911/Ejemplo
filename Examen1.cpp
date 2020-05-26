#include <iostream>
#include <cmath>

using namespace std;

int main (void){
    int a, b, c;

    cout << "Ingrese a";
    cin >> a;
    cout << "Ingrese b";
    cin >> b;
    cout << "Ingrese c";
    cin >> c;

    if(2*sqrt(a)*sqrt(c) == fabs(b))
    {
        cout << "Este es un trinomio cuadrado perfecto" << endl;
    }
    else
    {

        cout << "Este no es un trinomio cuadrado perfecto";
    }
    
    return 0;
}