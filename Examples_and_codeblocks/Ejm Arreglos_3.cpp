/*Lee 8 enteros, luego un valor x, y elimina todas sus apariciones del arreglo, 
mostrando el arreglo resultante y cuántos elementos quedaron.*/
#include<iostream>
using namespace std;
int main(){
	int arreglo[8]={0};
	int x, cont=8;
	cout<<"Introduce los elementos del arreglo:\n";
	for(int i=0; i<8; i++){
		cin>>arreglo[i];
	}
	cout<<"Arreglo inicial:\n";
	for(int i=0; i<8; i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<"\nDigite el elemento a buscar y eliminar: ";cin>>x;
	int i=0;
	while(i<cont){
		if(arreglo[i]==x){
		cont--;
			for(int j=i; j<cont; j++){
				arreglo[j]=arreglo[j+1];
					}
						}else {i++;
							}
								}
	cout<<"\Quedaron "<<cont<<" elementos:";
	cout<<"\nResultado despues de la eliminacion:\n";
	for(int i=0; i<cont; i++){
		cout<<arreglo[i]<<" ";
	}	
	return 0;
}
