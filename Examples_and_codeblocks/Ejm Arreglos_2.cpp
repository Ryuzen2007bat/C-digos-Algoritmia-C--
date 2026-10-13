/*Lee 8 enteros en un arreglo y luego un valor x a buscar. Muestra:

Cuántas veces aparece x.
La posición de su primera aparición, o un mensaje si no está.*/

#include<iostream>
using namespace std; 
int main(){
	int arreglo[8]={0};
	int x, prim, contador=0;
	bool primero=true;
	for(int i=0; i<8; i++){
		cin>>arreglo[i];
	}
	cout<<"\nIngrese el numero que desea buscar: ";
	cin>>x;
	for(int i=0; i<8; i++){
		if(x==arreglo[i]){
			contador++;
		if(primero){prim=i; primero=false;
		}}
	}
	if(contador!=0){
		cout<<"El numero "<<x<<" aparece por primera vez en la posicion "<<prim+1<<" con "<<contador<<" veces en total";
	}else{cout<<"El numero solicitado no se encuentra en el arreglo.";
	}
	return 0;
}
