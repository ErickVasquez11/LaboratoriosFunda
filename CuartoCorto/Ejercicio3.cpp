#include <iostream>

using namespace std;

void Matriz(float matriz[][5], int cantidad) // se le asignan valores a las matrices tiniendo en cuenta que en una matriz en donde tendra 5 columnas
{
    float nota;
    for(int i = 0; i < cantidad; i++){  // se hace las instruccion for en la cual se guardaran los datos .
        for (int j = 0; j < 5; j++){
            cout << " Ingrese la nota " << (j+1) << " del alumno " << (i+1) << " : "; 
            cin >> nota;
            matriz[i][j]=nota; // la matriz llevara en sus filas la variable i y en sus columnas j teniendo que sera la la nota y el numero de alumno. 
        }
        cout << "\n";
    }
}

void Promedio(float matriz[][5], int cantidad){
    float promedio;
    for(int i = 0; i < cantidad; i++){
        for(int j = 0; j < 5; j++){
            promedio += ((matriz[i][j])*0.2);  // con los for se declara las datos que guardara la matriz
        }
        cout << " La nota final del alumno " << (i+1) << " es: " << promedio << endl;
        if(promedio >= 6)                                           // teniendo presente que si es mayor o igual a 6 esta aprobado de lo contrario reprobara
            cout << " El Estudiante Aprobo " << endl << endl;
        else
            cout << " El Estudiante Reprobo " << endl << endl;

        promedio = 0;          // variable en la cual se guardan los datos del promedio igualandola a cero
        }
    }

int main(){
    int NumeroEstudiantes = 0;
    cout << " Ingrese el numero de Estudiantes : ";
    cin >> NumeroEstudiantes;                       // se guarda el numero de registros hacer por el usuario
    cout << "\n";

    float notas[NumeroEstudiantes][5];   // en la matriz se llama la fila del numero de estudiantes y las 5 columnas de las notas.
    Matriz(notas,NumeroEstudiantes);
    Promedio(notas,NumeroEstudiantes);

    return 0;
}