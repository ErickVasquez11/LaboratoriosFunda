#include <iostream>
using namespace std;
float estatura[25];  // asignamos el valor del arreglo
void PromedioAltura (float arreglo[], float *total){ // La funcion del promedio se asigna el arreglo y un puntero y asi asignarle un valor en la memoria
    int i = 0;
  
    for (i = 0; i<25; i++){  // se calcula el promedio de los 25 alumnos
        
        *total += arreglo[i];
    }
        *total = *total/25;
    }
float EstaturaArribaAbajo(float arreglo[], int *sobre, int *bajo, float prom){
  for (int i = 0; i <25; i++){  // se calcula los que estan arriba o abajo de la media con un if 
      if (arreglo[i]> prom) 
          *sobre+= 1;   // de la media ascendera el conteo de los datos
      else 
         *bajo+=1; // de lo contrario descendera el conteo
      
  }
}
int main(){
  float promedio;
  float Estatura;
  int SobreMedia = 0;
  int BajoMedia = 0;

  cout << " Ingrese la estatura de los 25 alumnos " << endl;

  for (int i = 0; i < 25; i++){
      cout << " Ingrese la estatura del alumno " << (i + 1) << ":"; // ingreso de estatura de almunos se ira contando uno por uno hasta llegar a los 25 
      cin >> Estatura;
      estatura[i] = Estatura;
  }
  PromedioAltura(estatura,&promedio); // se manda a llamar la funcion para el promedio

  cout << " La media de la estatura es: " << promedio << endl;

  EstaturaArribaAbajo(estatura, &SobreMedia, &BajoMedia, promedio); // se lllama la funcion de estatura arriba o abajo teniendo operadores de asignacion.
  cout << " Hay " << SobreMedia << " Estatura arriba de la media " << endl; 
  cout << " Hay " << BajoMedia << " Estatura abajo de la media " << endl;
}
