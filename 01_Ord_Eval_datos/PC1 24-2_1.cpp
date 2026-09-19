#include<iostream>
using namespace std; 
int main(){
int n, extra, pago;
cout<<"Introduzca las horas semanales de trabajo: ";cin>>n;
	if(n<=40){
		pago=n*10;
	}else{extra=n-40; 
	if(extra>20)extra=20;
	if(extra<=15)pago=400+extra*20;
	else pago=400 + 300 + (extra-15)*30;
	}
	cout<<"\nEl sueldo semanal correspondiente sera de: "<<pago; 
	return 0;
}
