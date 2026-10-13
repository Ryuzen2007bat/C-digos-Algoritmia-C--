/*En una matriz 3×4 , calcula el promedio de cada columna (de cada práctica) 
y la nota más alta de toda la matriz con su posición (fila y columna).*/
#include<iostream>
using namespace std; 
int main(){
	float arreglo[4][4]={0};
	int im=0, jm=0;
	cout<<"Colocar las notas por alumno: \n";
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cin>>arreglo[i][j];
		}
	}
	float mayor=arreglo[0][0];
	for(int j=0; j<4; j++){float prom=0;
		for(int i=0; i<3; i++){
			prom+=arreglo[i][j];
		if(arreglo[i][j]>mayor){
			im=i; jm=j; mayor=arreglo[i][j];
		}
		}arreglo[3][j]=prom/3.0;
	}
	cout<<"\t\tPC1\tPC2\tPC3\tPC4\n";
	for(int i=0; i<3; i++){cout<<"Alumno "<<i+1<<"\t";
		for(int j=0; j<4; j++){
			cout<<arreglo[i][j]<<"\t";
		}cout<<"\n";
	}
	cout<<"\nPromedio\t";
	for(int j=0; j<4; j++){
		cout<<arreglo[3][j]<<"\t";
	}
cout<<"\nLa nota mas alta entre los estudiantes: "<<mayor<<" cuya ubicación en la tabla es: ("<<im+1<<";"<<jm+1<<")";
	return 0;
}
