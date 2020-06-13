#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    int numempleados, i;
    float horasp=1.75, hextrasp=2.50, horas, hextras, imprenta=0;

    cout << "BIENVENIDO AL ASISTENTE DE CALCULO DE SALARIOS" << endl;
    cout << "¿De cuantos empleados desea calcular su salario?" << endl;
    cin >> numempleados;

    for (i=numempleados ; i > 0 ; i = i - 1){  //Este es el bucle, pedira la informacion uno por uno de los empleados
        cout << "Ingrese las horas normales y extras que el empleado" << " ha trabajado" << endl;
        cout << "Horas normales: "; cin >> horas; cout << "Horas extras: "; cin >> hextras; cout << endl;
        float salariototal = (horas * horasp) + (hextras * hextrasp); //Proceso para calcular el salario total primero
        cout << "El salario total del empleado " << "es de: $" << salariototal << endl;
        float impseguro = (salariototal/100) * 4; //Estos ultimos son para sacar los impuestos en porcentajes del salario total sin modificar el salario total
        float impafp = (salariototal/100) * 6.25;
        impafp = ceil(impafp * 100) / 100; //Debido a ser float, esta variable muestra 6 decimales y el dinero no funciona a 6 decimales, este calculo es una aproximacion a 2 decimales
        if (salariototal > 500){ //La condicion en caso de que el salario total sea mayor a 500.
            imprenta = (salariototal/100) * 10;
        }
        float salarioreal = salariototal - (impseguro + impafp + imprenta); //Proceso para sacar el salario real
        cout << "El salario real del empleado" << " es de: $" << salarioreal << endl;
    }
    return 0;
}
