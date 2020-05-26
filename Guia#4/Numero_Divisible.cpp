//////////////////////////////////////verifique si un número es divisible entre otro./////////////////////////////////////
#include <iostream>

using namespace std;

int main(void)
{
    int numero1;
    int numero2;
    
    cout << " Ingrese 2 numeros deseado: " << endl;
    cin >> numero1 >> numero2 ;
    if (numero1 % numero2 == 0){
        cout << " Es divisible " << endl;
    }else{
        cout << " No es divisible" ;
    }
    
    cout << " \n Numeros ingresados son : " << numero1 << numero2 << endl;
    return 0;

}