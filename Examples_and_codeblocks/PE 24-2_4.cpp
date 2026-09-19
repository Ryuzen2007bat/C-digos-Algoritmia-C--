/*Desarrolla un programa en C++ que permita ingresar números enteros 
hasta que el usuario ingrese un valor centinela (-999). El programa debe:

Descartar (ignorar, sin detener el programa) cualquier número que sea igual a 0.
Calcular el promedio de los números válidos ingresados.
Determinar el mayor y el menor de esos mismos números.
Contar cuántos de los números ingresados fueron pares y cuántos impares.
Al finalizar, mostrar: promedio, mayor, menor, cantidad de pares y cantidad de impares.

Nota: No se deben usar arreglos ni funciones.*/
#include<iostream>
using namespace std; 
int main(){
	
int n, contador=0, pares=0, impares=0, mayor, menor; 
float promedio, suma=0;  
bool primero=true;
 cout<<"Ingrese los numeros a evlauar (-999 para terminar): \n";
 cin>>n;
while(n!=-999){
	if(n!=0 ){
	if (primero){
		mayor=n; menor=n; 
	primero=false; 
	} if(n<menor)menor=n;
	if(n>mayor)mayor=n;
	contador++;
	suma+=n;
	if(n%2==0){
	pares++;}else {impares++;
	}
	
	} cin>>n;
}if(contador>0){
promedio=suma/contador; 
cout<<"El promedio de los numeros ingresados es: "<<promedio<<endl;
cout<<"El mayor numero es: "<<mayor<<" y menor numero es: "<<menor<<endl;
cout<<"La cantidad de numeros pares ingresados es: "<<pares<<" y la cantidad de numeros impares ingresados es: "<<impares<<endl;} else {
	cout<<"No se registro ningun numero valido";
} 
	return 0; 
}
