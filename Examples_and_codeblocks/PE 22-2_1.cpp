/*puntos Escriba un programa que lea "n" números enteros de 3 cifras, halle el MCD de dichos números y luego determine
los factores primos del MCD. Ejemplo:
Si los números son 288, 108 y 180
El MCD es 36
Los factores primos de 36 son 2 3. */
#include<iostream>
using namespace std; 
int main(){
	int n,a,b,r,i,num, mcd;
	cout<<"Cuantos numeros vas a ingresar?: ";
	cin>>n;
	cout<<"Introduce el numero 1: ";
	cin>>mcd;
	for(i=2; i<=n;i++){
		cout<<"Introduce el numero "<<i<<":\n";
	cin>>num;
			a=mcd; b=num; 
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}		mcd=a; }
	cout<<"\nEl MCD de los n numeros es: "<<mcd;
	return 0;
}
