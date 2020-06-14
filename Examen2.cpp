/*#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int numero;
    int dato;
    int contador = 0;

    srand(time(NULL));
    dato = 1 + rand ()%(100);
    cout << " Adivinar numero entre 1 y 100" <<endl;
    cout << " Tiene 5 intentos para adivinar el numero, si desea terminar de jugar presione ctrl+z + Enter " << endl;
     for (int i = 5; i >= 1; i--){ 
        cout << " Digite un Numero: ";
        cin >> numero;
          if (numero > dato ){
              cout << " Digite un Numero Menor ";
        }
         if (numero < dato){
             cout << " Digite un Numero Mayor ";
         }
         }
          contador ++;
    } while ( numero != dato);
         cout << " Numero de intentos: " << contador << endl;
         cout << " Felicidades el Numero secreto era: " << numero <<endl;
      system("pause");
    return 0;
    
}
*/
#include <iostream>
#include <stdlib.h> // para evitar que el ejecutador de cierra
#include <time.h> // para generar el numero aleatorio

using namespace std;
int numeroaleatorio()
{
    int numaleatorio;
     srand(time(NULL)); // Genera un Numero Aleatorio
      numaleatorio = 1+rand()%(101-1);  // limite inferior y superior 
        return numaleatorio; // retorna el valor aleatorio
}
int main()
{
    int numeroram = numeroaleatorio(), PosibleNumero;
    
    cout << " Adivinar Numero entre 1 y 100 " <<endl;
     cout << " Tiene 5 intentos para adivinar el numero, si desea terminar de jugar presion ctrl+s + Enter " <<endl;
      for (int i = 5; i >=1; i--)// ciclo For con variable inicial y valor final.
      { 
          cout << " Ingrese un Numero: ";
          cin>>PosibleNumero;
           if ( !cin>>PosibleNumero) //si la salida es igual al numero aleaotrio finalizara
           { 
               cout << " Juego Finalizado " << endl;
               cout << " El Numero Aleatorio era : " <<numeroram;
               break;
           }
            if (PosibleNumero==numeroram) // Si el Numero es igual al Aleatorio
            { 
                cout << " Felicidades Adivinastes el Numero Aleatorio ";
                break;
            }
            else if (PosibleNumero>numeroram && (i-1)!=0) // si la expresion del lado izquierdo es falta entonces la operacion del lado derecho nunca se evalua
             cout << " El Numero es Mayor al Numero Aleatorio \n Los intentos restantes son: " <<(i-1)<<endl<<endl;
            else if (PosibleNumero<numeroram && (i-1)!=0)
             cout << " El Numero es Menor al Numero Aleatorio \n Los intenos restantes son: " <<(i-1)<<endl<<endl;
            else 
             cout  << " Te Has Quedado Sin Intentos, El Numero Aleatorio es: " << numeroram;
      }
      return 0;
}