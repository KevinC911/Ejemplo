#include <iostream>
#include <cmath>

using namespace std;

int main (void)
{
    float pi = 3.1416, rad, area, perim;

    cout << "Soy un programa que puede darte el area y perimetro de un circulo." << endl;
    cout << "Ingresa el radio del circulo que quieras calcular:" << endl;
    cin >> rad;

    area = pi * pow(rad, 2);

    cout << "Su area es: " << area << endl;

    perim = 2 * pi * rad;

    cout << "Su perimetro es: " << perim << endl;
}