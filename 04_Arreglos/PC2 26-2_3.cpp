/*Desarrolla un programa en C++, que reciba n notas de una práctica de algoritmia y las guarde en un arreglo. Luego 
debe determinar que nota es la que  más se repite y cuantas veces se repite. Si hubiese más de una nota con el mayor 
número de repeticiones, mostrar que hay empate y decir cuantas notas empatan. Resolver sin utilizar otro arreglo, ni 
ordenar los datos.
Ejemplo, si n=15 y las notas son:
13, 15, 7, 11 ,15, 18, 8, 7, 19, 11, 18, 15, 9, 11, 18
Hay empate de 3 notas que se repiten 3 veces

Otro ejemplo, n=13
15, 8, 13, 17, 6, 13, 19, 16, 8, 11, 15, 8, 17
8 tiene el mayor número de repeticiones y se repite 4 veces*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int n, notas[50];
    do{ cout<<"Cuantas notas se van a registrar? (1-50): "; cin>>n; }while(n<1||n>50);
    for(int i=0 ;i<n; i++){ notas[i]=rand()%21; cout<<notas[i]<<" "; }
    int maxrep=0, moda=0;//estadistica al fallo xd
    for(int i=0;  i<n; i++){
        int c=0;
        for(int j=0; j<n; j++) if(notas[j]==notas[i]) c++;
        if(c>maxrep){ maxrep=c; moda=notas[i]; }
    }
    int empate=0;
    for(int i=0 ;i<n; i++){
        int c=0; bool antes=false;
       	 for(int j=0; j<n;j++) if(notas[j]==notas[i]) c++;
       		 for(int j=0; j<i; j++) if(notas[j]==notas[i]) antes=true;
        		if(c==maxrep &&!antes) empate++;
    }
    if(empate>1)cout<<"\nHay empate de "<<empate<<" notas que se repiten "<<maxrep<<" veces";
    else cout<<"\n"<<moda<<" tiene el mayor numero de repeticiones y se repite "<<maxrep<<" veces";
    return 0;
}

