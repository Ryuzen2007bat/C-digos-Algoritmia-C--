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
	 cont++;//contador termina en 7 o bueno, cont-1 (procurar orden la próxima vez sabiendo que el bucle se rompe antes de contar uno más xd)
}	//se guarda [9 21 61 3 41]
//los lee desde el último al primero según la cantidad de cifras (cont)
	//lo lee [14 3 16 12 9] pero el orden sigue siendo inverso a partir de las 8 cifras (0-7)
	cout<<"Digitos = ";
	cin>>d;
	for(int i=0; i<5; i++){//caso [2 1 2 2 1]
		digitos[i]=d%10; d=d/10; 
	}//se guarda [1 2 2 1 2]

	for(int i=4; i>=0; i--){
		if(digitos[i]==2){resultados[i]=notas[cont-1]*10+notas[cont-2];
		cont=cont-2;}else if(digitos[i]==1){resultados[i]=notas[cont-1]; cont=cont-1;
		}
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<4-i; j++){
			if(resultados[j]<resultados[j+1]){
				int k; 
				k=resultados[j]; resultados[j]=resultados[j+1];
				resultados[j+1]=k;
			}
		}
	}
	cout<<"Notas individuales de mayor a menor: \n";
	for(int i=0; i<5; i++){
		cout<<resultados[i]<<endl;
	}
	cout<<"Mayor nota: "<<resultados[0]<<"\nMenor nota: "<<resultados[4];
	return 0;
}
