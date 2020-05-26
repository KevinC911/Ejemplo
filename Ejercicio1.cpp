#include <iostream>
#include <cmath>

using namespace std;

int main (void)
{
    int a, b, c;
    float total;

    cout << "Hola, soy un programa que puede darte un promedio de tres numeros." << endl << "Ingrese su primer numero:" << endl;
    cin >> a;
    cout << "Ingrese su segundo numero:" << endl;
    cin >> b;
    cout << "Ingrese su tercer numero:" << endl;
    cin >> c;

    total = (float) (a + b + c)/3;

    cout << "Este es el resultado: " << total;

    return 0;
    
}