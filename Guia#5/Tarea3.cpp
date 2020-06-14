#include <iostream>
using namespace std;

bool YearBisiesto(int year)
{
    if ((year % 400) == 0) 
        return true; 
    else if ((year % 4) == 0 && (year % 100) != 0) 
        return true;
    else
    
        return false;
    
    
}
int main()
{
      int year;
      cout << " Ingrese el año : ";
       cin >> year;

       if ((YearBisiesto(year)) == true) 
           cout << " El año ingresado es Bisiesto ";
       else 
           cout << " El año ingresado no es bisiesto ";
       
       return 0;

}