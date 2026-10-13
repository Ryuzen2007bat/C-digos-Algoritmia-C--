/*Escribe un programa que:

Lea 6 números enteros en un arreglo.
Muestre el arreglo.
Calcule y muestre la suma y el mayor*/
#include<iostream>
using namespace std; 
int main(){
	cout<<"Ingrese los 6 valores enteros a evaluar:\n";
int arreglo[6]={0};
int mayor, suma=0; 
for(int i=0; i<6; i++){
	cin>>arreglo[i];
}mayor=arreglo[0];
for(int i=0; i<6; i++){
	suma+=arreglo[i];
	if(arreglo[i]>mayor){mayor=arreglo[i];
	}
}
cout<<"La distribucion de los numeros:\n";
for(int i=0; i<6; i++){
	cout<<arreglo[i]<<" ";
}
cout<<"\nSuma de los numeros = "<<suma;
cout<<"\nMayor numero en el arreglo: "<<mayor; 
	return 0; 
}
