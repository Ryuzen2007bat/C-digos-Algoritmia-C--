/*Ejemplo 1:
Para un conjunto de N edades en el rango de 15 a 40 a�os. Se desea
averiguar el n�mero de apariciones de cada una de ellas
Ejemplo:
N=6:
Edades: 20, 24, 16, 20, 16, 27
Salida:
Edad	Apariciones
16		2
20		2
24		1
27		1*/
#include<iostream>
using namespace std;
int main(){
int matriz[5][5];
cout<<"Edades \tA�os \tIntentos\n";
for(int i=0; i<5; i++){
	for(int j=0; j<5; j++){
		matriz[i][j]=(i+j);
		cout<<matriz[i][j]<<"\t"; 
			
	}cout<<"\n";
}
	return 0; 
}
