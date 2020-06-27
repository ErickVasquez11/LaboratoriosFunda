
#include <iostream>

using namespace std;

int main()
{
    int valores[200];
    int numero = 0;
    int i = 0;
    for (i = 200; i >=0; i--){
        numero = numero + 1;
       
        if ( i%2!=0 ){ 

                    valores[i] = numero;
                
            cout << "Posicion ["<< i <<"]"  << endl;  
            
         }
 
    }
    return 0;
} 
    
