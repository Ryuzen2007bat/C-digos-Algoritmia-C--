/*Problema 4: Insertar una palabra en una cadena
Diseñe un programa que:
Lea una cadena principal
Lea una palabra
Lea una posición
El programa debe insertar la palabra dentro de la cadena en la posición indicada.
*/
#include<iostream>
#include<locale>
#include<string.h>
using namespace std; 
int main(){
	setlocale(LC_ALL,"Spanish");
	char cadena[100];
	char palabra[50];
	int c=0;
	cout<<"Escriba la frase a evaluar:"; cin.getline(cadena,100);
	while(cadena[c]!=0){
		c++;
	}
	cout<<"\nIntroduzca la palabra, respuesta o frase a concatenar:";cin.getline(palabra,50);
	int pos;
	cout<<"Ingrese la posición (de 0 a "<<c<<"):";cin>>pos;
	int lenCad=strlen(cadena);
	int lenPal=strlen(palabra);
	for(int i=lenCad;i>=pos;i--){
		cadena[i+lenPal]=cadena[i];
	}
	for(int i=0; i<lenPal;i++){
		cadena[pos+i]=palabra[i];
	}
	cout<<"Resultado: "<<cadena<<endl;	
	return 0;
}
