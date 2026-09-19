#include<iostream>
using namespace std; 
int main(){
	float n, mayor1, mayor2, v;
	int cont1=0, cont2=0; 
	bool neg1=false, neg2=false;
	cout<<"Cuantos numeros se va a evaluar: ";cin>>v;
	for(int i=0; i<v; i++){
		cin>>n;
		if(n<0){
			if(!neg1){
				mayor1=n; cont1=1; neg1=true;
			}
			else if(n==mayor1){
				cont1++;
			} else if(n>mayor1){
				mayor2=mayor1; cont2=cont1; neg2=true; 
				mayor1=n; cont1=1; 
			} else if(neg2 and n==mayor2){
				cont2++;
			}else if(!neg2 or n>mayor2){
				mayor2=n; cont2=1; neg2=true; 
			}
		}
	}
	if(neg2){
		cout<<"\nEl segundo mayor de los negativos es: "<<mayor2; 
		cout<<"\nVeces que aparece: "<<cont2;
	}else{cout<<"\nNo hay suficientes negativos distintos."; 
	}
	return 0; 
}
