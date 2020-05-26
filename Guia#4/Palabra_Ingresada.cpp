 ////////////////////////////////////// verifique si la palabra ingresada inicia y finaliza con la misma letra.////////////////////////
#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
  string palabra;
  cout << " Introduzca la palabra a verificar: " << endl;
  cin >> palabra;
  int comparacion = palabra.length();
  if((palabra  [0])== palabra [comparacion -1]){
      cout << " La palabra inicia y finaliza con la misma letra";      
  }else{
      cout << " La primera y la ultima letra ingresada son diferentes" ;
  }
    return 0;
}
