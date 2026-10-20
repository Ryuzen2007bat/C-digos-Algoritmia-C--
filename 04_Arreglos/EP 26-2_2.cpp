/*Escriba un algoritmo en c++ que permita almacenar en un vector los elementos de la 
matriz M1 de m filas y n columnas.
Luego en un tercer valor almacenar los elementos del producto de matices M1 y M2 
siempre y cuando el producto sea factible . Finalmente , presente los elementos de cada 
matriz por fila(m1, m2 y el producto)
NOTA : no puede emplear aregglos auxiliares ni cadenas ni funciones predefinidas o definidas por el usuario*/
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"Spanish");
	srand(time(NULL));
    int m,n,p,q; char azar;
    int a[100], b[100], c[100];
    do{
        cout<<"# filas de M1: "; cin>>m; cout<<"# de columnas de M1: "; cin>>n;
        cout<<"# filas de M2: "; cin>>p; cout<<"# de columnas de M2: "; cin>>q;
    }while(m<1||n<1 or p<1||q<1||m*n>100||p*q>100 or m*q>100);//para evitar que se pasen con los datos xdd
cout<<"Colocar alatoriamente? (Sí=1, No=0): ";cin>>azar;//Esto no debería estar peusto a que dice leer y no colocar al azar, pero para fines prácticos...
if(azar==0){
for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>a[i*n+j];
    for(int i=0;i<p;i++) for(int j=0;j<q;j++) cin>>b[i*q+j];
}else {for(int i=0;i<m;i++) for(int j=0;j<n;j++) a[i*n+j]=1+rand()%10;
		    for(int i=0;i<p;i++) for(int j=0;j<q;j++) b[i*q+j]=1+rand()%10;
}
cout<<"\nMatriz M1 de orden "<<m<<"x"<<n<<endl;
   for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cout<<a[i*n+j]<<"\t"; cout<<"\n"; }
  cout<<"\nMatriz M2 de orden "<<p<<"x"<<q<<endl;
   		 for(int i=0;i<p;i++){ for(int j=0;j<q;j++) cout<<b[i*q+j]<<"\t"; cout<<"\n"; }
    		 if(n!=p){
        	cout<<"\nEl producto no es posible: # columnas de M1 distintas de #filas de M2.";
        return 0;//se acaba el prob
    					}
    for(int i=0;i<m;i++)
        for(int j=0;j<q;j++){
          	  int s=0;
            		for(int k=0;k<n;k++) s+=a[i*n+k]*b[k*q+j];
            c[i*q+j]=s;
        }
    cout<<"\nProducto de M1xM2 de orden "<<m<<"x"<<q<<endl;
    for(int i=0;i<m;i++){ for(int j=0;j<q;j++) cout<<c[i*q+j]<<"\t"; cout<<"\n"; }
    return 0;
}
