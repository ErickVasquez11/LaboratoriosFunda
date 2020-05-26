////////////////////////////////////// verifique si un número es par o impar /////////////////////
#include <iostream>

using namespace std;

int main(void)
{
    int numero;
       
    cout << " Ingrese el numero a verificar: " << endl;
    cin >> numero ;
    if (numero %  2 == 0){
        cout << " El numero es Par " << endl;
    }else{
        cout << " El numero es Impar" ;
    }
    
    cout << " \n Numeros ingresados son : " << numero << endl;
    return 0;

}
