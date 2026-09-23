/*Cree un programa de cajero automatico correspondiente, que permita depositos y retiros asumiendo saldo inicial 0; 
para n operaciones*/
#include<iostream>
#include<locale>
using namespace std; 
int main(){
	int saldo=0, elec, n,e;
	setlocale(LC_ALL,"Spanish"); 
	do{cout<<"\n===BIENVENIDO A TU CUENTA BCP===\nSeleccione el tipo de operación: ";
	cout<<"\nSU SALDO: S/."<<saldo; 
	cout<<"\n1. REGISTRAR DEPÓSITO:\n"; 
	cout<<"\n2. REGISTRAR RETIRO:\n";
	cout<<"\n0. SALIR:";
	cout<<endl;
		cout<<"Opción: ";cin>>elec;  
switch(elec){
	default:
    cout<<"\nOpción invalida."; break;
	case 1: cout<<"\nHA SELECCIONADO DEPÓSITO:";
	cout<<"\nIngrese el monto a ingresar en soles S/."; cin>>n; saldo+=n;
cout<<"\nOPERACION EXITOSA!!\nSu saldo actual es S/."<<saldo;
break; 
	break; 
	case 2:
    cout<<"\nHA SELECCIONADO RETIRO:";
    cout<<"\nIngrese el monto a retirar en soles S/.";
    cin>>n;
    if(n>saldo){
        cout<<"\nMonto incorrecto. Usted posee S/."<<saldo<<" en su cuenta.";
    } else {
        saldo-=n;
        cout<<"\nOPERACION EXITOSA!!\nSu saldo actual es: "<<saldo;
    }
    break;
}
cout<<"\n¿DESEA REALIZAR OTRA OPERACIÓN?";
	cout<<"\n1. SÍ:\n";
	cout<<"\n0. NO:\n";
	cout<<"Opción: ";
cin>>e;
if(e==0){cout<<"Gracias, hasta luego.";
}}while(e==1); 
return 0;
}


	

