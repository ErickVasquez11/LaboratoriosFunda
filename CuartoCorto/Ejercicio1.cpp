#include <iostream>
 
using namespace std;

char codiLetra( char valor){  // asignamos caracteres.
    switch (valor)    // hacemos un switch case para guardar cada uno de los caracteres asignados.
    {
        case 'm': valor = '0'; break;
        case 'u': valor = '1'; break;
        case 'r': valor = '2'; break;
        case 'c': valor = '3'; break;
        case 'i': valor = '4'; break;
        case 'e': valor = '5'; break;
        case 'l': valor = '6'; break;
        case 'a': valor = '7'; break;
        case 'g': valor = '8'; break;
        case 'o': valor = '9'; break;
    }
      return valor; 
}

int main(){
    
    int longitud;
    string arreglo; 
    
    cout << " Ingrese una palabra: ";
    getline(cin,arreglo);       
    longitud = arreglo.length(); // cuenta el numero de caracteres del arreglo.

    for ( int i = 0; i < longitud; i++){  // longitud no tiene que ser menor que 0. 
        cout << (codiLetra(arreglo[i])); // unimos la funcion con el arreglo y asi poder tener la combinacion de letras.
    }
    return 0;   
}