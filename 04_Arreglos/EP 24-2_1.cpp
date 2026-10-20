/*Escribir un programa en C++, que permita el ingreso de una matriz A de orden n 
(llene esta matriz con números enteros aleatorios de tres cifras). 
En base de los elementos de A genere una matriz B, de orden n, con las siguientes reglas: 
Las primeras files de B deben tener los elementos de A que sean impares ordenados 
en forma ascendente a continuación irán los números pares ordenados en forma descendente. */
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int n, A[20][20], B[20][20], v[400];
    do{ cout<<"Orden n (1-20): "; cin>>n; }while(n<0 or n>20);
    int k=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            A[i][j]=100+rand()%900;
            v[k++]=A[i][j];
        }
    int tot=n*n;
    for(int i=0;i<tot-1;i++)
        for(int j=0;j<tot-1-i;j++){
            bool aImp=v[j]%2!=0, bImp=v[j+1]%2!=0;
            if( (!aImp && bImp) ||
                (aImp && bImp && v[j]>v[j+1]) ||
                (!aImp && !bImp && v[j]<v[j+1]) ){
                int t=v[j]; v[j]=v[j+1]; v[j+1]=t;
            }
        }
    k=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) B[i][j]=v[k++];

    cout<<"\nMatriz A:\n";
    for(int i=0;i<n;i++){ for(int j=0;j<n;j++) cout<<A[i][j]<<"\t"; cout<<"\n"; }
    cout<<"\nMatriz B:\n";
    for(int i=0;i<n;i++){ for(int j=0;j<n;j++) cout<<B[i][j]<<"\t"; cout<<"\n"; }
    return 0;
}
