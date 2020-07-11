#include <iostream>

using namespace std;

const int longCad = 20;   // Longitud de la cadena
struct CostoPorArticulo{         // declaracion de variable del tipo de la estructura como un nuevo tipo de dato.
    char NombreArticulo[longCad + 1]; // declaracion de una cadena de Longitud carcacteres
    int Cantidad;
    float Precio;
    float CostoPorArticulo;
};

void DatosNombre(CostoPorArticulo Articulo[], int Cantidad){

        cout << '\n' << endl;
        cout << " Ingrese los datos de los articulos  " <<endl;
        for(int i = 0; i < Cantidad; i++){                  
            cin.ignore(100,  '\n');        // ignora las entradas hasta 100
            cout << " Ingrese Nombre del Articulo : ";
            cin.getline(Articulo[i].NombreArticulo, 21 , '\n'); // lee incluye espacios
            cout << " Ingrese Cantidad de Articulo: ";
            cin >> Articulo[i].Cantidad; // ordena y guarda en la variable indicada
            cout << " Ingrese el Precio Unitario :";
            cin >> Articulo[i].Precio;
            cout << "*********** Contenido de Compra ****** " << endl;
        }

}

void CostoArticulo(CostoPorArticulo Articulo[], int Cantidad){
     for(int i = 0; i < Cantidad; i++){
        Articulo[i].CostoPorArticulo = Articulo[i].Precio*Articulo[i].Cantidad;  // ordena y guarda la variable es igual precio por el articulo que seria el costo del articulo.
    }
}

void MostrarDatos(CostoPorArticulo Articulo[], int Cantidad){
    
    for(int i = 0; i < Cantidad; i++){
        cout << " Nombre del Articulo: " << Articulo[i].NombreArticulo << endl;  // guarda y ordena los datos ingresados.
        cout << " Cantidad de Articulos: " << Articulo[i].Cantidad << endl;
        cout << " Precio Unitario del Articulo: " << Articulo[i].Precio << endl;
        cout << " Precio Total: " << Articulo[i].CostoPorArticulo << endl;
    }
}

float CostoTotalCompra(CostoPorArticulo Articulo[],int Cantidad){
    float Total;
    for(int i = 0; i < Cantidad; i++){                            // donde el total sera igual al costo por articulo mas total ordenado en la variable.
        Total = Articulo[i].CostoPorArticulo + Total; 
    }
    return Total;
}

int main(){
    
    int CantidadArticulos, Total;               
    cout << " Cantidad de Articulos : "; 
    cin >> CantidadArticulos;

    
    CostoPorArticulo ArticulosGuardados[CantidadArticulos];       // se llaman a las funciones para hacer el procesamiento de la factura, con las variables y su resultado guardado.
    DatosNombre(ArticulosGuardados, CantidadArticulos);
    CostoArticulo(ArticulosGuardados, CantidadArticulos);
    MostrarDatos(ArticulosGuardados, CantidadArticulos);
    cout << " Precio Total de Compra: " << CostoTotalCompra(ArticulosGuardados, CantidadArticulos); /*precio total sera la funcion costo total de compra y llamando las variables de 
                                                                                                    datos guardados.*/

    return 0;
}