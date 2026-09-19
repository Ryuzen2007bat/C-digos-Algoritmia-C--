#include<iostream>
using namespace std; 
int main(){
	int x,y; 
	cout<<"Ingrese dos numeros enteros\n";
	cin>>x; 
	cin>> y; 
	while(x!=y){
		if(x>y)
		x=x-y; 
		else y=y-x; 
		cout<<"Maximo comun divisor es "<<x<<endl;
	}
	
	
	
	
	
	return 0; 
}
