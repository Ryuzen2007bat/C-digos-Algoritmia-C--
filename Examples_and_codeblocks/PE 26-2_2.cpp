/*Diseñe un programa en C++, que permita leer un número entero positivo en el sistema de base diez. Luego el programa debe indicar
en qué bases (del 3 al 9) la representación de dicho número es PAR.
No puede emplear arreglos, ni funciones predefinidas, ni funciones propias.*/    
#include<iostream>
using namespace std;
int main(){
    int n, resto;
    cout<<"Ingrese el numero a evaluar: ";
    cin>>n;
    cout<<"El numero es par en las bases:";
    for(int base=3; base<=9; base++){
        resto=n%base;
        if(resto%2==0)cout<<" "<<base;}
    return 0;
}
