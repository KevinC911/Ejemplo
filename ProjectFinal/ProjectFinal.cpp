#include <iostream>
#include <string.h>

using namespace std;

const int longCad = 20;

struct costoPorArticulo{
char nombreArticul[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;
};

void LecturaArt(struct costoPorArticulo C[], int n);
void CostArt(struct costoPorArticulo A[], int n);
void DespArt(struct costoPorArticulo B[], int n);
float TotalArts(struct costoPorArticulo D[], int n);

int main(void){
    int n;
    cout << "\\\\\\\\\\\\\\\\BIENVENIDO AL ASISTENTE DE COMPRA///////////" << endl;
    cout << "¿Cuantas compras desea realizar?" << endl;
    cin >> n;
    cin.ignore(100, '\n');
    cout << "Ahora ingrese el nombre del articulo, el precio y la cantidad que desea comprar" << endl;
    costoPorArticulo Compras[n];
    LecturaArt(Compras, n);
    CostArt(Compras, n);
    DespArt(Compras, n);
    cout << "El total de compra es de: $" << TotalArts(Compras, n) << endl;
    return 0;

}

void LecturaArt(struct costoPorArticulo C[], int n){
    string Art;
    for(int i = 0; i < n; i++){
        cout << "Nombre del articulo: ";
        getline(cin, Art, '\n');
        strncpy(C[i].nombreArticul, Art.c_str(), longCad);
        C[i].nombreArticul[longCad+1] = '\0';
        cout << "Precio del articulo: ";
        cin >> C[i].precio;
        cout << "La cantidad que desea comprar: ";
        cin >> C[i].cantidad;
        cout << "-----------------------------------" << endl;
        cin.ignore(100, '\n');
    }
}

void CostArt(struct costoPorArticulo A[], int n){
    for(int i=0; i < n; i++){
        A[i].costoPorArticulo =(float) A[i].precio*A[i].cantidad;
    }
}

void DespArt(struct costoPorArticulo B[], int n){
    cout << "\\\\\\\\\\FACTURA DE COMPRA//////" << endl;
    for(int i = 0; i < n ; i++){
        cout << B[i].nombreArticul << "    $" << B[i].costoPorArticulo << endl;
    }
}

float TotalArts(struct costoPorArticulo D[], int n){
    float Aux = 0;
    for(int i = 0; i < n; i++){
        Aux = Aux + D[i].costoPorArticulo;
    }
    return Aux;
}