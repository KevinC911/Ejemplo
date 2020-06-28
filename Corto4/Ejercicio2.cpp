#include <iostream>

using namespace std;

float Media(float A[]);
int MBajo(float B[], float Q);
int MArriba(float C[], float W);


int main (void){
    int n = 25;
    float Prom, Estatura[25];
    cout << "BIENVENIDO AL PROGRAMA PARA EL PROMEDIO DE ESTATURAS" << endl;
    cout << "Ingrese la estatura de los 25 estudiantes en metros" << endl;
    for(int i = 0; i <= 25; i++){
        cin >> Estatura[i];
    }
    Prom = Media(Estatura);
    cout << "La estatura promedio es de: " << Prom << endl;
    cout << "Hay " << MArriba(Estatura, Prom) << " estudiantes por encima del promedio" << endl;
    cout << "Y hay " << MBajo(Estatura, Prom) << " estudiantes por debajo del promedio" << endl;
}

float Media(float Estatura[]){
    float Aux, media;
    for(int i = 0; i <= 25; i++){
        Aux = Aux + Estatura[i];
    }
    media = Aux/25;
    return media;
}

int MArriba(float Estatura[], float Prom){
    int arriba=0;
    for(int i = 0; i <= 25; i++){
        if (Estatura[i] > Prom){
            arriba = arriba + 1;
        }
    }
    return arriba;
}

int MBajo(float Estatura[], float Prom){
    int bajo=0;
    for(int i = 0; i <= 25; i++){
        if (Estatura[i] < Prom){
            bajo = bajo + 1;
        }
    }
    return bajo;
}