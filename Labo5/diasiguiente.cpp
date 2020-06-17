#include <iostream>

using namespace std;

int compExcDia();
int bisiesto();
void CompFechaMan();
int dia, mes, year;

int main (void){
    cout<< "CALCULAR EL DIA SIGUIENTE" << endl;
    cout << "Ingrese el dia, mes y año: " << endl;
    cin >> dia; 
    cin >> mes; 
    cin >> year;
    compExcDia();
    bisiesto();
    CompFechaMan();
    return 0;


}

int compExcDia(){
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ( mes < 1 || mes > 12 || dia > days[mes-1])
     return true;
  else 
     return false;
}

int bisiesto(){
    if (year % 400 == 0){ 
        return true;
    }
    else if (year % 4 == 0 && ! year % 10 == 0){
        return true;
    }
    else{
        return false;
    }
}

void CompFechaMan(){
    int Mandia, Manmes, Manyear;
  int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
  if ( year < 0 ){
       cout << year << " no es un año valido" << endl;
       exit(1);
  }
  if (compExcDia()){
    if (mes == 2 && dia == 29){
        if (! bisiesto()){
          cout << year << " no es un año bisiesto, Febrero no tiene 29 dias" << endl;
          exit(1);
        }
    }
    else
    {
      cerr << "El mes " << mes << " no tiene " << dia << " dias "<< endl;  
      exit(1);
    }
  }
  Mandia=dia;
  Manmes=mes;
  Manyear=year;
  Mandia++;
 if (Mandia > days[mes-1]){
   Mandia=1;
   Manmes++;
   if ( Manmes > 12 ){
       Manyear++;
     Manmes=1; 
     }
 }
 cout << "El siguiente dia sera: " << Mandia << "/" << Manmes << "/" << Manyear << endl;;
}
