/*Diseñe un algoritmo que permita escribir dos numeros enteros positivos cuyo numero de cifras sea menor a 9. 
Luego modificar el primer numero eliminando las cifras que existan en el segundo número.
Ejemplo: Si se ingresa 364798 y 427 
			El número modificado será 3698 (se eliminaron el 4 y el 7).
NOTA: No se permite usar arreglos, ni cadenas, ni funciones externas o propias.*/
#include<iostream>
using namespace std;
int main(){
    int x, y, cy;
    int d, digY, existe, result=0, potencia=1;
    do{cout<<"\nPrimer numero: ";
        cin>>x;
    }while(x<=0 or x>99999999);
    do{cout<<"\nSegundo numero: ";
        cin>>y;
    }while(y<=0 or y>99999999);  
    while(x!=0){                  
        d=x%10;
        x=x/10;
        cy=y;                     
        existe=0;
        while(cy!=0){
            digY=cy%10;
            cy=cy/10;
            if(digY==d) existe=1;
        }
        if(existe==0){           
            result=result+d*potencia;
            potencia=potencia*10;
        }
    }
    cout<<"El resultado es: "<<result;
    return 0;
}
