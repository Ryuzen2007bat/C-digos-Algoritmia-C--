//Crea un programa en c++ donde se ingresen n notas y se evalúe el promedio y las dos notas más altas y más bajas
#include<iostream>
using namespace std; 
int main(){
	int n, notas, contador=0; 
	float suma=0; 
	int ma1, ma2, me1, me2;
	bool mayor1=false, menor1=false, mayor2=false, menor2=false; 
	cout<<"Ingrese el numero de notas a ingresar: ";cin>>n; while(n<0){cout<<"\nNumero de notas incorrecto, ingrese nuevamente: ";
	cin>>n;
	}
	while(contador!=n){
		contador++; 
	cout<<"Nota: ";
        cin>>notas;
        while(notas<0 || notas>20){
            cout<<"Nota invalida, ingrese nuevamente: ";
            cin>>notas;} 
		suma+=notas; 		
		if(!mayor1){
		ma1=notas; mayor1=true;
		}else if(notas>ma1){ma2=ma1;mayor2=true; ma1=notas; 
			}else if(!mayor2 or notas>ma2){ma2=notas; mayor2=true; 
				}
	if(!menor1){
		me1=notas; menor1=true;
	}else if(notas<me1){me2=me1;menor2=true; me1=notas; 
	}else if(!menor2 or notas<me2){me2=notas; menor2=true; 
			}
					}
	cout<<"\nEl promedio de las notas es: "<<suma/n; 
	cout<<"\nLas 2 notas mas altas: "<<ma1<<" "<<ma2; 
	cout<<"\nLas 2 notas mas bajas: "<<me1<<" "<<me2; 
	return 0; 
}
