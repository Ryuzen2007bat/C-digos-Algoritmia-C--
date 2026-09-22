/*Diseñe un algoritmo en C++, que permita recibir cuatro fechas utilizando para cada fecha 3 variables día, mes y anio, 
luego las presente ordenadas en forma decreciente respecto al año; en caso de años iguales ordenadas en forma 
creciente respecto al mes; en caso de años y meses iguales ordenadas en forma decreciente respecto al día. 
Ejemplo: si las 4 fechas son:
13 12 2021
07 08 2002
15 11 2025
06 12 2021
 
Entonces a respuesta debe ser:
15 11 2025
13 12 2021
06 12 2021
07 08 2002 

Nota: No puede emplear arreglos, no puede emplear instrucciones repetitivas y no debe tener más de cinco comparaciones para el ordenamiento de las fechas.
*/
#include<iostream>
using namespace std;
int main(){
    int d1,m1,a1,d2,m2,a2,d3,m3,a3,d4,m4,a4;
    int td,tm,ta;
    cout<<"Fecha 1 (dia mes anio):\n"; cin>>d1>>m1>>a1;
    cout<<"\nFecha 2:\n"; cin>>d2>>m2>>a2;
    cout<<"\nFecha 3:\n"; cin>>d3>>m3>>a3;
    cout<<"\nFecha 4:\n"; cin>>d4>>m4>>a4;
    if((a2>a1)||(a2==a1&&m2<m1)||(a2==a1&&m2==m1&&d2>d1)){
        td=d1;tm=m1;ta=a1; d1=d2;m1=m2;a1=a2; d2=td;m2=tm;a2=ta;
    }
    if((a4>a3)||(a4==a3&&m4<m3)||(a4==a3&&m4==m3&&d4>d3)){
        td=d3;tm=m3;ta=a3; d3=d4;m3=m4;a3=a4; d4=td;m4=tm;a4=ta;
    }
    if((a3>a1)||(a3==a1&&m3<m1)||(a3==a1&&m3==m1&&d3>d1)){
        td=d1;tm=m1;ta=a1; d1=d3;m1=m3;a1=a3; d3=td;m3=tm;a3=ta;
    }
    if((a4>a2)||(a4==a2&&m4<m2)||(a4==a2&&m4==m2&&d4>d2)){
        td=d2;tm=m2;ta=a2; d2=d4;m2=m4;a2=a4; d4=td;m4=tm;a4=ta;
    }
    if((a3>a2)||(a3==a2&&m3<m2)||(a3==a2&&m3==m2&&d3>d2)){
        td=d2;tm=m2;ta=a2; d2=d3;m2=m3;a2=a3; d3=td;m3=tm;a3=ta;
    }
    cout<<"\nLas fechas ingresadas en orden descendente son:\n";
    cout<<d1<<" "<<m1<<" "<<a1<<endl;
    cout<<d2<<" "<<m2<<" "<<a2<<endl;
    cout<<d3<<" "<<m3<<" "<<a3<<endl;
    cout<<d4<<" "<<m4<<" "<<a4<<endl;
    return 0;
}
