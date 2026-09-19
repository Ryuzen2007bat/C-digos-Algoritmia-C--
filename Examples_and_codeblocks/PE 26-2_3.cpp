/*Diseñe un programa en C++, que permita leer un número entero positivo en el sistema de base diez. Luego el programa debe indicar
en qué bases (del 3 al 9) dicho número es PAR.
	Nota:
Un número entero N, escrito en cualquier base b, es Par si existe un entero k tal que N = 2k.
No puede emplear arreglos, ni funciones predefinidas, ni funciones propias.*/
#include<iostream>
using namespace std;
int main(){
	int n,d,c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
	cout<<"Ingrese un numero entero positivo mayor a 3 cifras: ";cin>>n;
	while(n<0 or n<1000){cout<<"Numero incorrecto, intente nuevamente: ";cin>>n;}
	cout<<"\nEl numero ingresado cuyas cifras estan ordenadas de mayor a menor es: ";
	while(n>0){
		d=n%10;
		if(d==0)c0++;else if(d==1)c1++;else if(d==2)c2++;else if(d==3)c3++;
		else if(d==4)c4++;else if(d==5)c5++;else if(d==6)c6++;else if(d==7)c7++;
		else if(d==8)c8++;else c9++;
		n/=10;}
	while(c9-->0)cout<<9;
	while(c8-->0)cout<<8;
	while(c7-->0)cout<<7;
	while(c6-->0)cout<<6;
	while(c5-->0)cout<<5;
	while(c4-->0)cout<<4;
	while(c3-->0)cout<<3;
	while(c2-->0)cout<<2;
	while(c1-->0)cout<<1;
	while(c0-->0)cout<<0;
	return 0;
}
