/*Escribir un programa en C++ que solicita al usuario un numero X de 6 cifras.
El programa debe extraer los digitos de las posiciones pares (segunda cuarta sexta: _x_x_x) y formar con ellos un nuevo numero 
Y de 3 cifras. Luego debe calcular la suma de los digitos de X que sean mayores a 5. FInalmente indique si el numero Y 
es multiplo de esa suma*/
#include<iostream>
using namespace std; 
int main(){
	int n, suma=0, n2;
do{//un numero de 6 cifras empieza en 100 000 y termina en 999 999
	cout<<"Ingresa un numero X de 6 cifras: ";cin>>n;	
}while(n>999999 or n<100000);
int p2, p4, p6, p1, p3, p5;
p1=(n/100000)%10;
p2=(n/10000)%10;
p3=(n/1000)%10;
p4=(n/100)%10;
p5=(n/10)%10;
p6=(n%10);
n2=p6+p4*10+p2*100;
cout<<"Numero en posiciones pares: "<<p2<<" "<<p4<<" "<<p6<<endl;
	cout<<"Formamos Y: "<<n2<<endl;
	cout<<"Digitos mayores a 5: ";
	if(p1>5){cout<<p1<<" ";suma+=p1;}
	if(p2>5){cout<<p2<<" ";suma+=p2;}
	if(p3>5){cout<<p3<<" ";suma+=p3;}
	if(p4>5){cout<<p4<<" ";suma+=p4;}
	if(p5>5){cout<<p5<<" ";suma+=p5;}
	if(p6>5){cout<<p6<<" ";suma+=p6;}
	cout<<"\nLa suma es: "<<suma;
	cout<<"\nResultado: ";
	if(suma==0){cout<<"\nNo hay digitos mayores a 5, no se puede evaluar la multiplicidad.";
	}else if(n2%suma==0){cout<<n2<<" es multiplo de "<<suma;
	}else{cout<<n2<<" no es multiplo de "<<suma;
	}
	
	return 0; 
}
