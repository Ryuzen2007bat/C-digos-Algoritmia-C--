/*Lee una matriz de 3 filas × 4 columnas con las notas de 3 alumnos en 4 prácticas (fila = alumno). 
Muestra:
La matriz en forma de tabla (un salto de línea al terminar cada fila).
El promedio de cada alumno (cada fila).*/
#include<iostream>
using namespace std; 
int main(){
	float arreglo[3][5]={0};
	cout<<"Colocar sus datos: \n";
	for(int i=0; i<3; i++){
		float promedio=0;
			for(int j=0; j<4; j++){
			cin>>arreglo[i][j];
			promedio+=arreglo[i][j];
							}arreglo[i][4]=promedio/4.0;
									}
	cout<<"\t\tPC1\tPC2\tPC3\tPC4\tPromedio\n";
	for(int i=0; i<3; i++){cout<<"Alumno "<<i+1<<"\t";
		for(int j=0; j<=4; j++){
			cout<<arreglo[i][j]<<"\t";
		}cout<<"\n";
	}
	return 0;
}
