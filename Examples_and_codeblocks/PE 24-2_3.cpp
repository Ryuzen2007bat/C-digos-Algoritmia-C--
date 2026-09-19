/*Diseñe un programa en C++ que permita leer un número entero de más de 3 cifras y muestre sus dígitos ordenados de mayor a menor
(de 9 a 0), repitiendo cada dígito tantas veces como aparezca en el número original.
Nota: No puede emplear arreglos, ni funciones predefinidas, ni funciones propias.
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
