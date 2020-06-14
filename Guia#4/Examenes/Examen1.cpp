#include <iostream>

using namespace std;


float  SalarioTotal (float HorasTrabajadas, float HorasExtras){ // funcion de horas trabajadas por cada uno de los valores.
    HorasTrabajadas *= 1.75; 
    HorasExtras *= 2.50;
    
    return HorasTrabajadas + HorasExtras; // returna la funcion.
   
    
}
float SalarioReal (float TotalEmpleado ){ // Funcion para hacer el descuento de AFP, Seguro y si es mayor a 500 hara el descuento de la renta.
    double Seguro = 0.04; 
    double AFP = 0.0625;
    double Renta = 0.1;

    Seguro *= TotalEmpleado; 
    AFP *= TotalEmpleado;

    if (TotalEmpleado >= 500) { // validacion de descuendo si es mayor  $500.

            Renta *= TotalEmpleado; // La renta por el salario del empleado pero si es mayor a $500.
            TotalEmpleado -=  Renta; // El Salario total menos la renta.
    }
            TotalEmpleado -=  AFP; // de lo contrario si no es mayor o igual a 500 solo evaluara el despuesto del AFP y el Seguro.
            TotalEmpleado -=  Seguro;
    return TotalEmpleado;
        
}
int main(){
    int Opciones;
    float HorasTrabajadas;
    float HorasExtras;
    float SalariosTotal;
    float SalariosReal;
    
    while ( Opciones != 2){ // menu para ingresar empleados
        cout <<  " 1. Ingrese Empleados " << endl;
        cout <<  " 2. Terminar " << endl ;
        cin >> Opciones;
    switch (Opciones){
    case 1:
            cout << " Ingrese las Horas Trabajadas: ";
            cin >> HorasTrabajadas;
            cout << " Ingrese las Horas Extras: ";
            cin >> HorasExtras;

            SalariosTotal = SalarioTotal( HorasTrabajadas,HorasExtras); // manda a llamar la funcion para hacer el total del salario
            SalariosReal = SalarioReal( SalariosTotal);

            cout << " El Salario Total de los Empleados es: $" << SalariosTotal << endl;
            cout << " El Salario Real de los Empleados es: $" << SalariosReal << endl;
        break;
   
    default:
        break;
    }

    }
     return 0;
 }
     