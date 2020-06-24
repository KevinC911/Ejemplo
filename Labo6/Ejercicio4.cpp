#include <iostream>

using namespace std;

int Arreglo(int A[], int e);
int SArreglo(int E[], int F[], int a, int b, int c, int U[]);
void desplegar(int G[], int h);

int main (void){
    int n, b, c;
    cout << "Soy un programa que puede generar arreglos" << endl;
    cout << "Ingrese la longitud del arreglo: ";
    cin >> n;
    b = n;
    c = n;

    int Array[n];
    int BArray[b];
    int SArray[c];
    Arreglo(Array, n);
    cout << "Ahora ingrese los datos del segundo arreglo" << endl;
    Arreglo(BArray, b);
    SArreglo(Array,BArray,n,b,c,SArray);
    desplegar(SArray, c);
    return 0;
}

int Arreglo(int Arr[], int n){
for(int i=0; i<n; i++){
        cout<<"Ingrese un dato: "; 
        cin>>Arr[i];
    }
    return Arr[n];
}

int SArreglo(int Array[],int BArray[], int n, int b, int c, int SArray[]){
int Aux;
for (int i = 0; i<=n; i++){
    Aux = Array[i] + BArray[i];
    SArray[i] = Aux;
    Aux = 0; 
}
return SArray[c];
}

void desplegar(int SArray[], int c){
    cout << "El arreglo de la suma de los dos arreglos es: [";
    for(int i=0; i<c; i++){
        cout<< SArray[i]<< " "; 
    }
    cout<<"]" << endl;
}