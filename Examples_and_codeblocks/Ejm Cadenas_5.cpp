/*Problema 5: Eliminar un carácter
Elabore un programa que lea una cadena y una posición, 
y elimine el carácter que se encuentra en dicha posición.*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	cout<<"Ingrese la cadena a evaluar: ";
	char cadena[100]; int c=0, n;
	cin.getline(cadena,100);
	while(cadena[c]!=0){c++;
	}
	do{cout<<"Escoja una posicion (entre 0-"<<c<<"):";cin>>n;
	}while(n<0 or n>c);
	for(int i=n; i<c; i++){
		cadena[i]=cadena[i+1];
	}
	cout<<"\nResultado: "<<cadena<<endl;
	return 0;
}
