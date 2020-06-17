#include <iostream>

using namespace std;

int mcd(int, int);
int main(void){
    int mayor, menor;
cout << "CALCULADOR DE MCD" << endl;
cout << "Digite el número mayor: ";
cin >> mayor;
cout << "Digite el número menor: ";
cin >> menor;

cout << "El MCD es: " << mcd(menor,mayor);
cout << endl;
return 0;
}

int mcd(int menor, int mayor){
int residuo;
do
{
residuo = mayor % menor;
if(residuo != 0){
mayor = menor;
menor = residuo;
}
}
while(residuo != 0);
return menor;
}
