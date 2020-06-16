#include <iostream>

using namespace std;
bool anioBisiesto (int anio){
    return ((anio % 4) == 0 && (anio % 100) != 0) || ((anio % 400) == 0);
}
int DiaMes(int mes, int anio){
    int dias = 31;
     if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
         dias = 30;
     }else if (mes == 2){
         if(anioBisiesto(anio)){
             dias = 28 && 29;
         }else {
            cout << " La fecha No es bisiesta ";
         }

     }
          
     return dias;
    
}
int main(){
    int dia;
    int mes;
    int anio;
    char separador;
    
    cout << " Ingrese el dia, mes y año " << endl;
    cin >> dia >> separador >> mes >> separador >> anio;
    dia ++;
     if (dia > DiaMes(mes,anio) ){
         dia = 1;
         mes ++;
         if (mes > 12){
             mes = 1;
             anio ++;
         } else {
             
         }
          cout << " Error de Digitalizacion "  << endl;
          return 0;
     } 
     
   
     cout << dia << '/' << mes << '/' << anio << endl;
}