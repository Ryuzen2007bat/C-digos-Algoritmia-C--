/*Una Universidad tiene n Facultades representadas por los números del 1 a n. Cada Facultad cuenta con
un número de estudiantes (máximo 100). Cada estudiante tiene un año de ingreso. Elabore un
programa que:
a) Permita almacenar el año de ingreso de cada estudiante de cada Facultad.
b) Determine por cada Facultad el número de estudiantes por año de ingreso.*/
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"Spanish");
    srand(time(NULL));
    int n, anio[50][100], cant[50];      // supongo maximo 50 facultades
    do{ cout<<"Número de facultades: "; cin>>n; }while(n<0 or n>50);
    for(int f=0; f<n; f++){
        cant[f]=1+rand()%100;
        for(int e=0; e<cant[f]; e++) anio[f][e]=2000+rand()%27;
    }
    for(int f=0; f<n; f++){
        cout<<"\nFacultad "<<f+1<<" ("<<cant[f]<<" estudiantes):\n";
        for(int e=0; e<cant[f]; e++){
            int c=0; bool antes=false;
            for(int k=0;k<cant[f];k++) if(anio[f][k]==anio[f][e]) c++;
            for(int k=0;k<e;k++)       if(anio[f][k]==anio[f][e]) antes=true;
            if(!antes) cout<<"  "<<anio[f][e]<<": "<<c<<"\n";
        }
    }
    return 0;
}
