/*Considere que se tiene una cuadricula de 4x4 conteniendo en cada fila los dígitos binarios de un número
decimal (figura 1) y se rota esta cuadrícula 90o, en sentido antihorario, se obtiene la figura 2. Ejemplo:

Figura 1:
15 1 1 1 1
8  1 0 0 0
8  1 0 0 0
15 1 1 1 1

Figura 2:
9  1 0 0 1
9  1 0 0 1
9  1 0 0 1
15 1 1 1 1

En el ejemplo, los números decimales representados en las filas de la figura 1 son 15, 8, 8 y 15 y luego de
rotar la cuadrícula 90o, en sentido antihorario, los dígitos binarios de cada fila de la figura 2 representan a los
números decimales 9, 9, 9 y 15. Construya, un algoritmo que reciba 4 números en el sistema decimal cuyos
equivalentes binarios representen las filas de la figura 1 y retorne los 4 números en el sistema decimal que
corresponden a las filas de la cuadricula rotada 90o, en sentido antihorario. Nota: Resolver sin utilizar
arreglos.*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    do{
        cout<<"Ingrese 4 numeros (0 a 15): ";
        cin>>a>>b>>c>>d;
    }while(a<0||a>15||b<0||b>15||c<0||c>15||d<0||d>15);

    for(int r=0; r<4; r++){
        int nuevo = (a%2)*8 + (b%2)*4 + (c%2)*2 + (d%2);
        cout<<nuevo<<" ";
        a/=2; b/=2; c/=2; d/=2;      // descarta el bit ya usado
    }
    return 0;
}
