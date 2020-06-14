#include <iostream>
#include <stdlib.h> // para evitar que el ejecutador de cierra
#include <time.h> // para generar el numero aleatorio

using namespace std;

void preparaRandom(void)
{
    srand(time(NULL));
}
int main()
{
    preparaRandom();
    int numero;
    int numeroAdivinado = 0;
    int numeroParaAdivinar = rand()%100;// limite superior e inferior
    int cantidadOportunidades = 0;
    while (!numeroAdivinado){
        if (cantidadOportunidades > 4 ){ // los intentos no tienen que ser mayor a 4
            cout << " La cantidad de Oportunidades fue superada \n"<< endl;
            cout << " El numero correcto era: "<< numeroParaAdivinar; // si no acierta ensenara el numero correcto
            return 0;
        }
        cout << " Escribe un numero entre 1 y 100: ";
        cin >> numero;
        if (numeroParaAdivinar == numero){ // el numero a divinar tiene que ser igual al ingresado
            numeroAdivinado = 1; //tiene que empezar con uno 
        }
        if (numero > numeroParaAdivinar){ // si el numero es menor mostrara un mensaje
            cout << " Digite un Numero Menor,";
        }
        if (numero < numeroParaAdivinar){
            cout << " Digite un Numero Mayor,";
        }
        ++cantidadOportunidades;

    }
    cout << " Felicidades Adivinastes " << endl;
}