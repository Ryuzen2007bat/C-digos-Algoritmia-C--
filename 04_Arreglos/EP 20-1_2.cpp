/*Escriba un algoritmo que lea una cadena compuesta por palabras conteniendo letras y
dígitos, luego utilizando solo la cadena leída, realice lo siguiente:
a) Elimine de la cadena las letras sucesivas repetidas y los dígitos.
Ejemplo: Luiis11a estu78udia1 en la1 Uni1
Resultado: Luisa estudia en la UNI
b) Forme un número con los dígitos retirados de la cadena
Resultado: 1178111
c) Determine cuantas letras retiró y cuantos dígitos retiró
d) Resultado: Se retiraron 2 letras y 7 dígitos*/
#include<iostream>
#include<string.h>
using namespace std; 
int main(){
	char cadena[50];int orden[50],c=0;
	cin.getline(cadena,50);
	for(int i=0; i<50;i++){
		if(isdigit(cadena[i])){
			for(int j=i; j<c; j++){
		cadena[j]=cadena[j+1];i--;orden[c]=cadena[j];
	}c++;			
		}
	}
	cout<<"\n"<<cadena<<endl;
	cout<<"Se retiraron "<<c<<" numeros:";
	for(int i=0; i<3; i++){
		cout<<orden[i];
	}
	
	
	return 0;
}
