/*Se tiene un número entero que representa las 5 notas de práctica de un estudiante en cierto curso y
otro número entero que indica de cuantas cifras es cada nota. Se pide mostrar las notas individuales de
mayor a menor y luego mostrar la mayor y la menor nota
Ejemplo:
notas=14316129
digitos= 21221
Notas individuales de mayor a menor
16
14
12
9
3
Mayor nota=16
Menor nota=3
*/
#include<iostream>
using namespace std; 
int main(){
	int notas[10]={0}, digitos[5]={0};
	int  d, n, cont=0;
	int resultados[5]={0};
	cout<<"Notas = ";
	cin>>n; 
	//caso [14 3 16 12 9]
while(n!=0){
	notas[cont]=n%10; n=n/10;
	 cont++;
}	//se guarda [9 21 61 3 41]
	for(int i=cont-1; i>=0; i--){
		cout<<notas[i]<<" ";//los lee desde el último al primero según la cantidad de cifras (cont)
	//lo lee [14 3 16 12 9] pero el orden sigue siendo inverso a partir de las 8 cifras (0-7)
	}cout<<endl;
	cout<<"Digitos = ";
	cin>>d;
	for(int i=0; i<5; i++){//caso [2 1 2 2 1]
		digitos[i]=d%10; d=d/10; 
	}//se guarda [1 2 2 1 2]
	for(int i=4; i>=0; i--){//los lee [2 1 2 2 1] 
		cout<<digitos[i]<<" ";
	}cout<<endl;
	for(int i=4; i>=0; i--){
		if(digitos[i]==2){resultados[i]=notas[cont-1]*10+notas[cont];
		cont=cont-2;}else if(digitos[i]==1){resultados[i]=notas[cont-1]; cont=cont-1;
		}
	}for(int i=4; i>=0; i--){
		cout<<resultados[i]<<" ";
	}
	return 0;
}
