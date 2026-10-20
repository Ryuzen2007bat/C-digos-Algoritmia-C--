/*Un almacén registra las existencias de cinco productos en tres depositos mediante una matriz a 5x3 .
 Cada fila representa un producto y cada columna un deposito. Desarrolle un algoritmo en c++ que realice las siguientes operaciones 
 a)Lea las existencias de los cinco productos en los tres depositos .
b)calcule el stock total de cada producto y almacene los resultados en un vector  T.
c)Identifique el producto con menor stock total y elimine su fila de la matriz.
d)Inserte una nueva fila correspondiente a un producto recien adquirido, en la posicin indicada por el usuario , con sus tres cantidades de existencias .
e)Recalcule el stock total de todos los productos y ordene el vector t de mayor a menor .
f)Muestre la matriz actualizada y el vector ordenado de existencias totales.
Resolver sin utilizar funciones de usuario*/
#include<iostream>
#include<locale>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	srand(time(NULL)); setlocale(LC_ALL,"Spanish");
    int M[6][3], T[6], nf=5, decision;//esta variable no debería estar aquí                 
    cout<<"Agregar (5 productos x 3 depósitos):\n";
	cout<<"COmpletar datos aleatoriamente?(Sí 1 || No 0): ";cin>>decision; 
	      //es para probar más rápido en vez de completar uno por uno
	      if(decision==0){for(int i=0;i<nf;i++) {for(int j=0;j<3;j++)cin>>M[i][j];
		  }	}else {for(int i=0;i<nf;i++) {for(int j=0;j<3;j++)M[i][j]=1+rand()%50;
		  }}
		  cout<<"\nStock de productos por deósito:\n"; 
		  cout<<"DEPÓSITOS-->\t(1)\t(2)\t(3)\n"; 
    for(int i=0;i<nf;i++){cout<<"Producto "<<i+1<<":\t";
        for(int j=0;j<3;j++)cout<<M[i][j]<<"\t";
        cout<<"\n";}
    for(int i=0;i<nf;i++){
        T[i]=0;
        for(int j=0;j<3;j++) T[i]+=M[i][j];
    }

    int im=0; 
    for(int i=1;i<nf;i++) if(T[i]<T[im]) im=i;
    cout<<"\nMenor stock: Producto "<<im+1<<" ("<<T[im]<<")\nFila dezplazada.\n";
    for(int i=im;i<nf-1;i++)
        for(int j=0;j<3;j++) M[i][j]=M[i+1][j];
    nf--;
    int pos;
    do{ cout<<"\nPosición de la nueva fila (1 a "<<nf+1<<"): "; cin>>pos; }while(pos<1||pos>nf+1);
    for(int i=nf;i>pos-1;i--)
        for(int j=0;j<3;j++) M[i][j]=M[i-1][j];
    cout<<"\nDepósitos del nuevo producto:\n";
    for(int j=0;j<3;j++)cin>>M[pos-1][j];
    nf++;
    for(int i=0;i<nf;i++){ 
        T[i]=0;
        for(int j=0;j<3;j++)T[i]+=M[i][j];
    }
    for(int i=0;i<nf-1;i++){for(int j=0;j<nf-1-i;j++)
			if(T[j]<T[j+1]){ int t=T[j]; T[j]=T[j+1]; T[j+1]=t; }
	}
    

    cout<<"\nStock de productos actualizado:\n";
    cout<<"DEPÓSITOS-->\t(1)\t(2)\t(3)\n";         
    for(int i=0;i<nf;i++){cout<<"Producto "<<i+1<<":\t";
        for(int j=0;j<3;j++)cout<<M[i][j]<<"\t";
        cout<<"\n";}
    cout<<"Stock total por producto (ordenado de mayor a menor): ";
    for(int i=0;i<nf;i++) cout<<T[i]<<" ";
    return 0;
}
