#include <iostream>

using namespace std;

const int longCad = 10;   // Longitud de la cadena
struct PrecioArticulo{         // declaracion de variable del tipo de la estructura como un nuevo tipo de dato.
    char NombreProducto[longCad + 1]; // declaracion de una cadena de Longitud carcacteres
    int TotalProducto;
    double Precio;
    double CostoPorArticulo;
};
void CostoArticulo(PrecioArticulo Articulo[], int TotalProducto){
     for(int n = 0; n < TotalProducto; n++){
        Articulo[n].CostoPorArticulo = Articulo[n].Precio*Articulo[n].TotalProducto;  // ordena y guarda la variable es igual precio por el articulo que seria el costo del articulo.
    }
}

void DatosNombre(PrecioArticulo Articulo[], int TotalProducto){

        cout << '\n' << endl;
        cout << " Ingrese los datos de los articulos  " <<endl;
        for(int n = 0; n < TotalProducto; n++){                  
            cin.ignore(500,  '\n');        // no lea el enter y sale a la siguiente iteracion.
            cout << " Nombre del Articulo : ";
            cin.getline(Articulo[n].NombreProducto, 10 , '\n'); // lee incluye espacios
            cout << " Cantidad de Articulo: ";
            cin >> Articulo[n].TotalProducto;// ordena y guarda en la variable indicada
            cout << " Precio Unitario : $";
            cin >> Articulo[n].Precio;
            cout << "\n";
          
        }

}

void DatosMostrar(PrecioArticulo Articulo[], int TotalProducto){
    cout << "******* Contenido de Compra ****** " << endl; // Titulo de la factura y separador de compra.
    for(int n = 0; n < TotalProducto; n++){
        cout << "* Nombre del Articulo: " << Articulo[n].NombreProducto << endl;  // guarda y ordena los datos en la estructura.
        cout << " Cantidad de Articulos: " << Articulo[n].TotalProducto << endl;
        cout << " Precio Unitario del Articulo: " << Articulo[n].Precio << endl;
        cout << " Precio Total: $ " << Articulo[n].CostoPorArticulo << endl;
        cout << "\n";
    }
}

float CostoTotalCompra(PrecioArticulo Articulo[],int TotalProducto){
    float Total;
    for(int n = 0; n < TotalProducto; n++){                            // donde el total sera igual al costo por articulo mas total ordenado en la variable.
        Total = Articulo[n].CostoPorArticulo + Total; 
    }
    return Total;                                                          // retorna el costo de cada producto.
}

int main(){
    
    int TotalProducto;
    int Total;               
    cout << " Cantidad de Articulos : "; 
    cin >> TotalProducto;


    PrecioArticulo Datos[TotalProducto];       // se llaman a las funciones para hacer el procesamiento de la factura, 
    DatosNombre(Datos, TotalProducto);            // con las variables y el resultado llamando todo a la estructura   
    CostoArticulo(Datos, TotalProducto);
    DatosMostrar(Datos, TotalProducto);
    cout << " Precio Total de Compra: $" << CostoTotalCompra(Datos, TotalProducto); /*precio total sera la funcion costo total de compra y llamando las variables de 
                                                                                                    datos guardados.*/

    return 0;
}