/*Desarrolla un programa en C++ que determine el mayor y el menor de un conjunto de números. 
El programa debe permitir al usuario ingresar números hasta que ingrese el valor 0. 
Además, debe descartar cualquier número que no sea un entero positivo.
*/
#include<iostream>
using namespace std;
int main(){
    int n, mayor, menor;
    bool primero=true;

   	cout<<"Ingrese los numeros a evaluar (0 para terminar): \n"; 
   	cin>>n;
   	while(n!=0){
   		if(n>0){
   			if(primero){mayor=n;
   						menor=n; 
   						primero=false; 
			   }else{
			   	if(n>mayor)mayor=n;
			   	if(n<menor)menor=n; 
			   }
			   }cin>>n;
		   }
		   if(!primero){
		   	cout<<"\nNumero mayor: "<<mayor; 
		   	cout<<"\nNumero menor: "<<menor; 
		   }else cout<<"No se ingreso ningun numero valido";
	   
	   
	   return 0;}
