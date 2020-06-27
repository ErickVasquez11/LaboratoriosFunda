#include <iostream>
 
using namespace std;

char codiLetra( char caracter){  // asignamos caracteres.
    switch (caracter)    // hacemos un switch case para guardar cada uno de los caracteres asignados.
    {
        case 'm': caracter = '0'; break;
        case 'u': caracter = '1'; break;
        case 'r': caracter = '2'; break;
        case 'c': caracter = '3'; break;
        case 'i': caracter = '4'; break;
        case 'e': caracter = '5'; break;
        case 'l': caracter = '6'; break;
        case 'a': caracter = '7'; break;
        case 'g': caracter = '8'; break;
        case 'o': caracter = '9'; break;
    }
      return caracter; 
}

int main(){
    int i = 0; // asignamos valor a la variable i.
    int longitud;
    string arreglo; 
    
    cout << " Ingrese una palabra: ";
    getline(cin,arreglo);       
    longitud = arreglo.length(); // cuenta el numero de caracteres del arreglo.

    for (i = 0; i < longitud; i++){  // longitud no tiene que ser menor que 0. 
        cout << (codiLetra(arreglo[i])); // unimos la funcion con el arreglo y asi poder tener la combinacion de letras.
    }
    return 0;   
}