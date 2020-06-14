////////////////////////////////////////////Verifique si la palabra ingresada es mayor a 10 caracteres o no y si la longitud es par o impar///////////////////////
#include <cstring>
#include <iostream>
using namespace std;
 
int main()
{
    char texto1[10];
 
    cout << "Introduce una palabra: ";
    cin >>  texto1;
 
    int comparacion = strlen(texto1);
    
    
    if (comparacion == 10){
        cout << "Es igual a 10 caracteres " << endl;
    }else if(comparacion > 10){
        cout << " Tiene mas de 10 caracteres " << endl;
    }else if(comparacion < 10){
        cout << " Tiene menos de 10 caracteres " << endl;
    }
    cout << " \n La Palabra ingresada es  : " << texto1 << endl;
     if (comparacion %  2 == 0){
        cout << " La Longitud de los caracteres es Par " << endl;
    }else{
        cout << " La Longitud de los caracteres es Impar " << endl ;
    }
       
      return 0;
}