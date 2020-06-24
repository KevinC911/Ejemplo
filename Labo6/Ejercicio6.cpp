#include <iostream>

using namespace std;

int main (void){
    int n, b ,Aux=0;
    cout << "Ingrese la longitud del arreglo: ";
    cin >> n;
    int Array[n];
    for(int i=0; i<n; i++){
        cout<<"Ingrese un dato: "; 
        cin>>Array[i];
    }
    cout << "Ahora ingrese el numero que quiera encontrar en el arreglo: ";
    cin >> b;
    for(int i=0; i<=n; i++){
        if(Array[i] == b){
            Aux = Aux + 1;
        }
    }
    cout << "El numero " << b << " se ha encontrado " << Aux << " veces en el arreglo" << endl;
    return 0;
}
