#include <iostream>
#include <cmath>
using namespace std;

int main (){
    float radio;
    float area;
    float perimetro;

    cout<<"Ingrese el radio del circulo: ";
    cin>> radio;
    float PI = 3.14159265358979;
    area = PI * pow(radio,2);
    perimetro=2*PI*radio;
    cout<<"El resultado del area es: "<<area<<" y el perimetro es: "<<perimetro;
    return 0;
}