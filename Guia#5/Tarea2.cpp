//////Construya un programa que lea la hora, hh, mm y ss, en el modo de 24 horas. Luego calcule y despliegue cuál es la hora un segundo después./////
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int SegundoDespues (){
    int horas;
    int minutos;
    int segundos;
    char caracter;

     segundos = segundos + 1;
    if (segundos >= 60 ){
        segundos = 0;
        minutos = minutos + 1;
    if (minutos >= 60){
        minutos = 0;
        horas = horas + 1;
    }else
    {
        cout << " ERROR: Hora Incorrecta " << endl;
    }
       return 0;
    }
}
int main()
{
    int horas;
    int minutos;
    int segundos;
    char caracter;
    
    cout << " Introduzca Horas: " << endl;
    cin >>  horas, caracter;
    cout << " Introduzca Minutos: " << endl;
    cin >> minutos, caracter;
    cout << " Introduzca Segundos: " << endl;
    cin >> segundos;
    
    segundos = segundos + 1;
    if (segundos >= 60 ){
        segundos = 0;
        minutos = minutos + 1;
    if (minutos >= 60){
        minutos = 0;
        horas = horas + 1;
    }else
    {
        cout << " ERROR: Hora Incorrecta " << endl;
    }
    
    }
    cout << " Un Segundo Despues la Hora es: " << horas << ':' << minutos << ':' << segundos << endl;
}