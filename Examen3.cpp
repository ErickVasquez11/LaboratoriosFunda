#include <iostream>
using namespace std;

bool YearBisiesto(int year) // funcion para calcular el anio bisiesto
{
    if ((year % 400) == 0)  // hace el calculo de que cada 4 anios es bisiesto
        return true; // si lo es retorna verdadero
    else if ((year % 4) == 0 && (year % 100) != 0) // si el año% 4 = 0 y el año% 100 = 0, entonces no lo es,si el año% 4 = 0 y el año% 100 = 0 y el año% 400 = 0 entonces lo es.
        return true;
    else
    
        return false;
    
    
}
int main()
{
      int year;
      cout << " Ingrese el año : ";
       cin >> year;

       if ((YearBisiesto(year)) == true) // evalua si el anio es verdadero sera Bisiesto
           cout << " El año ingresado es Bisiesto ";
       else // de lo contrario no sera bisiesto
           cout << " El año ingresado no es bisiesto ";
       
       return 0;

}