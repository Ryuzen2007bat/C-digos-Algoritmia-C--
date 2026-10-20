/*Problema 3: Concatenación de cadenas
Realice un programa que lea 3 cadenas de texto e imprima la concatenación de ambas.*/
#include<iostream>
#include<locale>
#include<string.h>
using namespace std; 
int main(){
	setlocale(LC_ALL,"Spanish");
	char cadena1[200], cadena2[200], cadena3[200];
	cout<<"Ingrese el texto perteneciente a la cadena 1: ";
	cin.getline(cadena1,200);
	cout<<"\nAhora ingrese el texto corespondiente a la cadena 2:";
	cin.getline(cadena2,200);
		/*int c1=0;while(cadena1[c1]!=0){c1++;}
		int c2=0;while(cadena2[c2]!=0){c2++;}
			for(int i=0; i<c1; i++){
				cout<<cadena1[i];
	             	}cout<<" ";
	       	for(int i=0; i<c2; i++){
				cout<<cadena2[i];
	             	} 	O AL MENOS ASÍ PENSÉ QUE SE RESOLVERÍA PERO NO*/
	cout<<"\nAhora la cadena 3: ";
	cin.getline(cadena3,200); 
	   strcat(cadena1,"");
	    	strcat(cadena1,cadena2);
	    		strcat(cadena1,cadena3);
	    cout<<"\nResultado: "<<cadena1<<endl;


return 0; 
}

