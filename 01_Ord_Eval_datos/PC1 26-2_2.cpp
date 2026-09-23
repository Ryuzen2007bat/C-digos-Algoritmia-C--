/*Crea un programa que evalue las credenciales de un usuario: 150 y contraseña: 350, en caso falle, 
tiene 3 intentos en total o se termina el programa, en caso su registro sea correcto, 
solicitar un numero positivo de 3 cifras a descomponer
en a^2+ b^2+ c^2 las veces donde a<=b<=c por ejemplo:
110 = 9^2+5^2+4^2 y 7^2+6^2+5^2*/
#include<iostream>
using namespace std; 
int main(){
	 int user=150, password=350;
	 int usuario, contrasena, n;
	 int a, b, c, suma=0; 
	cout<<"INICIAR SESION: \n"; 
	cout<<"\nUSUARIO: ";cin>>usuario;  
	cout<<"\nCONTRASENA: "; cin>>contrasena; 
	for(int i=0; i<2; i++){
		if(usuario!=user or contrasena!=password){
			cout<<"\nUsuario o contrasena incorrectos. (Intentos restantes: "<<2-i<<").\n";
		cout<<"\nUSUARIO: ";cin>>usuario;  
	cout<<"\nCONTRASENA: "; cin>>contrasena;
		}else{cout<<"\nIngrese un numero positivo de 3 digitos: "; 
		break; 
		}
	}if(usuario!=user and contrasena!=password){
			cout<<"\nIntentos agotados.\n"; return 0; }
	int r1, r2, r3; 
	r1=n-(a*a); r2=n-(b*b); r3=n-(c*c); 
	cin>>n;
		cout<<"\nDescomposiciones del numero "<<n<<":"<<endl; 
	for(int a=1; a<=9; a++){
    for(int b=a; b<=9; b++){
        for(int c=b; c<=9; c++){
            if(a*a+b*b+c*c==n){
                cout<<c<<"^2 + "<<b<<"^2 + "<<a<<"^2\n";
            }
        }
    }
}
	return 0; 
}
