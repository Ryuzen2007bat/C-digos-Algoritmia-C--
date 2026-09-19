/*Diseñe un programa en C++ que permita leer el monto de un pago (entero, múltiplo de 10) y determine la menor cantidad de billetes
de S/100, S/50, S/20 y S/10 necesarios para cubrir dicho monto. Si el monto no es múltiplo de 10, debe mostrar un mensaje de error.
Nota: No puede emplear arreglos, ni funciones predefinidas, ni funciones propias.*/
#include<iostream>
using namespace std;
int main(){
	int n, b100=0, b50=0, b20=0, b10=0;
	cout<<"Ingrese la cantidad multiplo de 10 a realizar el cambio: ";cin>>n;
	while(n%10!=0 or n<0){
		cout<<"\nMonto incorrecto, debe ser multiplo de 10. Intente nuevamente: ";cin>>n;
	}
	b100=n/100;
	n=n%100;
	b50=n/50;
	n=n%50;
	b20=n/20;
	n=n%20;
	b10=n/10;
	cout<<"\nEl cambio a base de billetes el monto introducido es:\n";
		cout<<"\n"<<b100<<" billetes de S/.100\n";
			cout<<"\n"<<b50<<" billetes de S/.50\n";
				cout<<"\n"<<b20<<" billetes de S/.20\n";
					cout<<"\n"<<b10<<" billetes de S/.10\n";
	return 0;
}

