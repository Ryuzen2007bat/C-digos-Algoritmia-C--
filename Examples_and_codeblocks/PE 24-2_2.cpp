/*Desarrolla un programa en C++ que calcule el promedio de un conjunto de números 
positivos ingresados por el usuario. 
El programa debe detenerse cuando el usuario ingrese un número negativo.*/
#include<iostream>
using namespace std; 
int main(){
	float n=0, suma=0, contador=-1;
	float promedio;
	cout<<"Introduzca los numeros a promediar (Ingrese un negativo para terminar):\n";
	while(n>=0){
		suma+=n;
		contador++;
			cin>>n; 
	}
	if(contador>0){
	promedio=(suma)/contador;
	cout<<"El promedio de los numeros ingresados es: "<<promedio; 
	return 0;}else cout<<"No se ingreso ningun numero ";
}
