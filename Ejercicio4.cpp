#include <iostream>

using namespace std;

int main (void){
    char producto[25];
    int cantidad;
    float precio, total;

    cout << "Bienvenido al asistente de compra" << endl << "Ingrese el nombre del producto: ";
    cin >> producto;
    cout << "Precio del producto: $";
    cin >> precio;
    cout << "Ingrese la cantidad que desea comprar: ";
    cin >> cantidad;
    
    total = precio*cantidad;

    cout << "Su factura:" << endl;
    cout << producto << "   $" << total;

}
