#include <iostream>
#include <string>
#include <string.h>
using namespace std;
const int longCad = 20;
struct costoPorArticulo
{
    char nombreArticulo[longCad+1];
    int cantidad;
    float precio;
    float subtotal;
    float total;
    float costoporArticulo;
};
void DatosDeArticulos(int n, int cantidad, char articulo, float precio,string cad, costoPorArticulo arreglo[]){ 
    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese el nombre del articulo: ";
        getline(cin,cad, '\n');
        strncpy(arreglo[i].nombreArticulo, cad.c_str(), longCad);
        arreglo[i].nombreArticulo[longCad]='\0';
        cout<<"Ingrese la cantidad que de ese articulo: ";
        cin>>arreglo[i].cantidad;
        cout<<"Ingrese el precio del articulo: ";
        cin>>arreglo[i].precio;
        cin.ignore(100, '\n');
    }
    
}
void CostoporArt(float precio, int n, costoPorArticulo arreglo[], int cantidad, float costoporArticulo){ 

    for (int i = 0; i < n; i++)
    {
        arreglo[i].costoporArticulo =   arreglo[i].precio * arreglo[i].cantidad; //arreglar
    }
    
}
void DesplieguedelArray(int n, costoPorArticulo arreglo[],float costoporArticulo){ 
    cout<<"----------------------------------------------------------------------------------------------------+"<<endl;
    cout<<"nombre del articulo"<<"\tcantidad del articulo"<<"\tprecio unitario de cada articulo"<<"\tcosto por articulo  |"<<endl;
    cout<<"----------------------------------------------------------------------------------------------------+"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arreglo[i].nombreArticulo<<' ';
        cout<<"\t\t\t";
        cout<<arreglo[i].cantidad<<' ';
        cout<<"\t\t\t";
        cout<<arreglo[i].precio<<' ';
        cout<<"\t\t\t";
        cout<<arreglo[i].costoporArticulo<<' '<<endl;
    }
    cout<<"----------------------------------------------------------------------------------------------------+\n";
}
float TotalCosto(int n, costoPorArticulo arreglo[], float costoporArticulo,float IVA, float subtotal, float total){ 

    for (int i = 0; i < n; i++)
    {
        subtotal = (arreglo[i].costoporArticulo + subtotal);
        IVA= subtotal * 0.13;
        total = subtotal + IVA;
        cout<<"subtotal: "<<subtotal<<endl;
        cout<<"Totals: "<<total<<endl;

    }

}

int main(){ 
     int articulo;
    int cantidad;
    string cad;
    float precio;
    float costoporArticulo;
    float subtotal;
    float IVA;
    float total;
    char x;
    int n, i;
    cout<<"Ingrese la catidad de articulos que llevara: ";
    cin>>n;
    cin.ignore(100, '\n');
    costoPorArticulo arreglo[n];
    DatosDeArticulos(n,cantidad,articulo,precio,cad, arreglo);
    CostoporArt(precio,n,arreglo,cantidad, costoporArticulo);
    DesplieguedelArray(n,arreglo,costoporArticulo);
    TotalCosto(n,arreglo,costoporArticulo,IVA, subtotal, total);
    cout<<"\t\t\t\t\t\t\t\t\t\t\tSubtotal: "<<subtotal<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\tTotal: "<<total;
    return 0;
}