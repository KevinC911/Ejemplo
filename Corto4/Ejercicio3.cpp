#include <iostream>

using namespace std;

void NEst(float **M, int n, int b);
void PromEst(float **M, int n, int b);

int main(void){
    int cols;
    int rows = 5;
    cout << "BIENVENIDO AL SISTEMA DE CALCULO DE NOTAS" << endl;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> cols;
    float** Matrix = new float*[rows];
    for (int i = 0; i <rows;++i){
        Matrix[i] = new float[cols];
    }
    NEst(Matrix, cols, rows);
    PromEst(Matrix, cols, rows);
    return 0;
    
}

void NEst(float **M, int n, int b){
    for(int i=0; i < n; i++){
       cout<<"- - - - - - - - - - - - - - - - - - "<<endl;
       for(int j=0; j < b;j++){
       cout <<"Ingrese nota del alumno: "<<i+1<<": ";
       cin >> M[i][j];
  }
    }
}

void PromEst(float **M, int n, int b){
    float Sumador;
    int j;
    for(int i=0; i < n; i++){
        Sumador = 0;
       for(j=0; j < b;j++){
       Sumador = Sumador + ((M[i][j]*20)/100);
       if(j == 4){
           if (Sumador >= 6){
               cout << "El estudiante " << i+1 << " ha sido aprobado con " << Sumador << endl; 
           }
           else if(Sumador <= 6){
               cout << "El estudiante " << i+1 << " ha sido reprobado con " << Sumador << endl;
           }
       }
       
  }
    }
}