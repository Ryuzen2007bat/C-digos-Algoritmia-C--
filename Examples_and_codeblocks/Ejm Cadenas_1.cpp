//CADENAS
//ELABORE UN PROGRAMA QUE INICIE UNA CADENA E INDIQUE DE CUANTOS CARACTERES ESTÁ COMPUESTO
//sin usar la función length
#include<iostream>
#include<locale>
using namespace std; 
int main(){
	setlocale(LC_ALL,"Spanish");
	//char cadena[100]="Hola mundo 'w'"; 
	char cadena[100];cin>>cadena[100];
	cout<<cadena; 
	int longitud=0; 
	while(cadena[longitud]!=0){
		longitud++;
	}
	cout<<"\nLa cadena: "<<cadena<<", tiene una longitud de "<<longitud<<" caracteres"; 
	return 0; 
}
