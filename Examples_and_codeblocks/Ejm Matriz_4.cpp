/*Lee n (= 50) enteros en un arreglo y duplica cada número impar justo a su derecha, conservando el orden. 
Muestra el arreglo resultante.
Ejemplo: {3, 4, 7, 8} queda {3, 3, 4, 7, 7, 8}.*/
#include<iostream>
using namespace std;
int main(){
	int arreglo[100]={0}, n;
	cout<<"Ingrese los enteros a evaluar (max=50): ";
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arreglo[i];
			}
	cout<<"\nArreglo inicial:\n";
	for(int i=0; i<n; i++){
		cout<<arreglo[i]<<" ";
							}
	int i=0;
		while(i<n){
			if(arreglo[i]%2!=0){
				for(int j=n; j>i; j--){
					arreglo[j]=arreglo[j-1];
						}n++; i+=2;
							}else{i++;
								}	}
	cout<<"\nArreglo con impares duplicados\n";
	for(int j=0; j<n; j++){
		cout<<arreglo[j]<<" ";
	}
	return 0;
}
