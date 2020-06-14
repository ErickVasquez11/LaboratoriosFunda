///////////////////////////////////// verifique si un número es positivo, negativo o cero ///////////////////////
#include <iostream>

using namespace std;

int main(void)
{
    int numero;
    cout << "Ingrese el numero a verificar : " << endl;
    cin >> numero;
    
    if (numero < 0 ) // menor que cero
    {
        cout << " El numero es negativo ";
    }else if(numero > 0){ //mayor que cero
        cout << " El numero es Positivo ";
    }
    else{ // de lo contrario sera un cero
        cout << " El numero es un Cero ";
    }
    
}