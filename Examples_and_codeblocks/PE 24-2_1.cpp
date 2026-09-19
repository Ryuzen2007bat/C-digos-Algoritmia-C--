/*Desarrolle un programa en C++ que solicite ingresar tres números positivos
para que sean ordenados de menor a mayor. Debe solicitarse ingresar los
números hasta que el usuario decida, además debe comprobarse que el
número ingresado debe ser positivo de no ser así debe solicitar otro.*/
#include<iostream>
using namespace std; 
int main(){
	int a, b, c, t; char eleccion;
	do{
	
	do{
		cout<<"Ingresar el primer numero positivo:\n";
		cin>>a;
	}while(a<=0);
	do{
		cout<<"Ingresar el segundo numero positivo:\n";
		cin>>b;
	}while(b<=0);
	do{
		cout<<"Ingresar el tercer numero positivo:\n";
		cin>>c;
	}while(c<=0);
	if(a>b){t=a; a=b; b=t;}
	if(b>c){t=b; b=c; c=t;}
	if(a>b){t=a; a=b; b=t;}
	cout<<"Los numeros ordenados de menor a mayor son: "<<a<<", "<<b<<", "<<c<<endl;
	
	cout<<"\n¿Desea ingresar otro conjunto?(s/n):\n";
	cin>>eleccion;}while(eleccion=='s' || eleccion=='S');
	return 0;
}
