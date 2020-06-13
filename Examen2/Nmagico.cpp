#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    //La linea de abajo es el seed para que el numero al azar siempre sea diferente en cada ejecucion
    //Para ello se usa el tiempo del sistema
  srand((unsigned) time(0));
  int randomNumber = rand() % 100 + 1; //El % es para asignar el rango, la cual es de 1 a 100
  int i, Number;
  
  cout << "BIENVENIDO AL JUEGO DEL NUMERO MAGICO" << endl << "Intente adivinar un numero del 1 al 100 e intente ganar" << endl;
  cout << "Tiene 5 intentos" << endl;
  cout << "Si ya no quiere jugar, ingrese 0" << endl;
  for (i = 5; i >= 1; i--){ //La iteracion que se repite con los 5 intentos
      cout << "Ingrese el numero" << endl;
      cin >> Number;

      if (Number == 0){ //Esta condicional es para salirse del juego en caso de que el usuario quiera
        break;
      }
      if (Number == randomNumber){ //Esta es para en caso de que el usuario haya adivinado el numero
          break;
      }
      else if (i - 1 == 0){ //Esta es en caso de que el usuario no haya adivinado y no tenga intentos
          break;
      }
      else{ //Esta es para seguir con el juego
          cout << "Mala suerte, no es el numero, intentelo de nuevo" << endl;
          cout << "Le quedan " << i - 1  << " intentos" << endl;
      }
      if (Number < randomNumber && i - 1 > 0){ //Para asignar que pista dar, si es mayor o menor
          cout << "Pista: El numero magico es mayor al numero que ingreso" << endl;
      }
       else if (Number > randomNumber && i - 1 > 0){
          cout << "Pista: El numero magico es menor al numero que ingreso" << endl;
      }
      
  }

  if (Number == randomNumber){ //Estas ultimas dos es para verificar si el usuario ha dado con el numero o no
      cout << "Felicidades, ha adivinado el numero" << endl;
  }
  else if (Number < randomNumber && Number > randomNumber){
      cout << "No ha conseguido adivinar el numero, mala suerte" << endl;
  }
  return 0;
}