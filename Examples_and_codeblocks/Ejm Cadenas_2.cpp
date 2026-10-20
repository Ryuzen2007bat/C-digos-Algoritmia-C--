/*Problema 2: Contar vocales
Desarrolle un programa que lea una cadena y determine cuántas vocales 
contiene (a, e, i, o, u tanto mayúsculas como minúsculas).*/
#include<iostream>
#include<locale>
using namespace std; 
int main(){
	char cadena[100];
	int vocales=0, cont=0; 
	cout<<"Ingrese el texto presente en la cadena: ";cin.getline(cadena,100);
	while(cadena[cont]!=0){
		cont++;
	}
	int a=0, e=0, i=0, o=0, u=0;
	for(int k=0; k<cont; k++){
		if(cadena[k]=='a' or cadena[k]=='A' or cadena[k]=='á'){a++;
		}else if(cadena[k]=='e' or cadena[k]=='E' or cadena[k]=='é'){e++;
		}else if(cadena[k]=='i' or cadena[k]=='I' or cadena[k]=='í'){i++;
		}else if(cadena[k]=='o' or cadena[k]=='O' or cadena[k]=='ó'){o++;
		}else if(cadena[k]=='u' or cadena[k]=='U' or cadena[k]=='ú'){u++;
		}
	}
	cout<<"\nLa cantidad de vocales presentes en la cadena de texto de "<<cont<<" caracteres: ";
	cout<<"\n"<<a<<" as";
	cout<<"\n"<<e<<" es";
	cout<<"\n"<<i<<" is";
	cout<<"\n"<<o<<" os";
	cout<<"\n"<<u<<" us";
	return 0; 
}

