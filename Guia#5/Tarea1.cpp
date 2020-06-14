////////////////  Su función debera retornar el mcd de los dos enteros recibidos y  deberá ser desplegado en pantalla. ////////////

#include <iostream>

using namespace std;

int mcd(int a,int b)
{
  int resultado = 1;
    for (int i = 1; i <= a; i++){
        if ((a % i == 0) && (b % i == 0)) {
             resultado = i;
        }
    }
    return resultado;
}
int main()
{
    int a;
    int b;
    cout << " Ingrese el Primer Numero: " << endl;
    cin >> a;
    cout << " Ingrese el Segundo Numero: " << endl;
    cin >> b;
    
    int resultado = mcd(a,b);
    cout << " El Maximo Comun Divisor de " << a << " y " << b << " es : " << resultado << endl;
    return 0;
}