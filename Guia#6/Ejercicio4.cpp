#include <iostream>

using namespace std;

void arreglo (int arr[], int n)
{
    for (int i = 0; i < n; i++){
        cout << " Ingrese el numero: " << endl;
        cin >> arr[i];
    }
}
void SumaArreglos (int arreglo1[], int arreglo2[],int n, int resultado [])
{
    for(int i = 0; i < n; i++){
        resultado[i] = arreglo1[i] + arreglo2[i];
    }
}
void DesplegarResultado(int resultado[], int n)
{
    cout << " El Resultado es : " << endl;
    for (int i = 0; i < n; i++){
        cout << resultado[i];
    }
}
int main(){
    int n = 5;
    int arreglo1[n];
    int arreglo2[n];
    int resultado[n];

    arreglo(arreglo1,n);
    arreglo(arreglo2,n);
    SumaArreglos(arreglo1,arreglo2,n,resultado);
    DesplegarResultado(resultado,n);
}