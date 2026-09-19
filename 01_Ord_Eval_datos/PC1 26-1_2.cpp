#include<iostream>
using namespace std; 
int main(){
	int n, suma=0;
do{//un numero de 6 cifras empieza en 100 000 y termina en 999 999
	cout<<"Ingresa un numero de 6 cifras: ";cin>>n;	
}while(n>999999 or n<100000);
int p2, p4, p6, p1, p3, p5;
p1=(n%1000000-n%100000)/100000.0;
p2=(n%100000 - n%10000)/10000.0;
p3=(n%10000 - n%1000)/1000.0;
p4=(n%1000 - n%100)/100.0;
p5=(n%100 - n%10)/10.0;
p6=(n%10);
cout<<"Numero en posiciones pares: "<<p2<<" "<<p4<<" "<<p6<<endl;
	cout<<"Formamos Y: "<<p2<<p4<<p6<<endl;
	cout<<"Digitos mayores a 5:\n";
	if(p1>5)cout<<p1<<" ";suma+=p1;
	if(p2>5)cout<<p2<<" ";suma+=p2;
	if(p3>5)cout<<p3<<" ";suma+=p3;
	if(p4>5)cout<<p4<<" ";suma+=p4;
	if(p5>5)cout<<p5<<" ";suma+=p5;
	if(p6>5)cout<<p6<<" ";suma+=p6;
	cout<<"\nLa suma es: "<<suma;
	
	
	return 0; 
}
