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
