#include <ctime>
#include <iostream>

using namespace std;
int main(void){

time_t tiempoactual = time(NULL);
struct tm tiempoactual_tm = *localtime( &tiempoactual);

struct tm then_tm = tiempoactual_tm;
then_tm.tm_sec += 1;
mktime( &then_tm);

cout << "La hora y fecha actual es " << asctime( &tiempoactual_tm);
cout << "Y con un segundo mas es " << asctime( &then_tm) << endl;
return 0;
}
