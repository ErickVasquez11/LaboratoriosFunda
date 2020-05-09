#include "iostream";

using namespace std;
int main(){

    string nombre;
    int precio;
    int cantidadComprada;
    
    cout<<"Digite el nombre del producto comprado: ";
     cin>>nombre;
     cout<<"Digite el precio del producto comprado: ";
     cin>>precio;
     cout<<"Digite la cantidad de producto comprado: ";
     cin>>cantidadComprada;

    int promedio = precio * cantidadComprada;
     cout<<"Dinero Gastado : $"<<promedio<<endl;
}