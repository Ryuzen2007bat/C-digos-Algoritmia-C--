/*un empleado de una empresa x esta encargado del mantenimiento de un campo deportivo rectangular.
Para iniciar sus actividades se ubica el punto medio de cualquier lado y se dirige al centro del rectangulo
y desde ahí recorre cada uno de los 4 triangulos que se forman con el cruce ede las diagonales. 
Al terminar de recorrer el el ultimo triangulo debe dirigirse al punto medio del lado puesto por el que ingresó. 
Desarrolar un programa en c++ que reciba 3 coordenadas x ^ y alamcene un arreglo bidimensional , luego determine
si las coordenadas ingresadas forman un rectangulo
la distancia total recorrida por el empleado .
Considere que debe recorres un triangulo antes del siguiente triangulo
resolver sin utilizar funciones de usuario*/
#include<iostream>
#include<cmath>
#include<locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"Spanish");
    double p[4][2];
    for(int i=0;i<4;i++){
        cout<<"Vertice "<<char('A'+i)<<" (x y): ";
        cin>>p[i][0]>>p[i][1];
    }//Así no viene :v, ya fue mi 20
    double ac=pow(p[0][0]-p[2][0],2)+pow(p[0][1]-p[2][1],2);
    double bd=pow(p[1][0]-p[3][0],2)+pow(p[1][1]-p[3][1],2);
    double ab=pow(p[0][0]-p[1][0],2)+pow(p[0][1]-p[1][1],2);
    double bc=pow(p[1][0]-p[2][0],2)+pow(p[1][1]-p[2][1],2);
    bool medio=fabs(p[0][0]+p[2][0]-p[1][0]-p[3][0])<1e-9 &&
               fabs(p[0][1]+p[2][1]-p[1][1]-p[3][1])<1e-9;
    if(!(medio && fabs(ac-bd)<1e-9 && ab>0 && bc>0)){
        cout<<"Las coordenadas no forman un rectangulo.";//o sea la mayoría de casos donde se le ocurra a alguien decir 4 coordenadas que cumplan sin dibujarlo antes
        return 0;
    }
    cout<<"CAMPO DEPORTIVO RECTANGULAR EN CUESTIÓN: (Centro del rectángulo o intersección de diagonales: E)\n";
cout<<"A("<<p[0][0]<<","<<p[0][1]<<")-----------------------------("<<p[1][0]<<","<<p[1][1]<<")B"<<endl;
cout<<"      |                             |\n      |                             |\n      |                             |\n      |              E              |\n      |                             |\n      |                             |\n      |                             |\n      |                             |\n";
cout<<"D("<<p[3][0]<<","<<p[3][1]<<")-----------------------------("<<p[2][0]<<","<<p[2][1]<<")C"<<endl;
    double ex=(p[0][0]+p[2][0])/2, ey=(p[0][1]+p[2][1])/2;    //el putno medio del rectangulo
    int s;
    do{ cout<<"Lado de ingreso (1=AB 2=BC 3=CD 4=DA): "; cin>>s; }while(s<1||s>4);
    int i1=s-1, i2=s%4, i3=(s+1)%4, i4=(s+2)%4;               //el lado de donde va a empezar
    double mx=(p[i1][0]+p[i2][0])/2, my=(p[i1][1]+p[i2][1])/2;
    double nx=(p[i3][0]+p[i4][0])/2, ny=(p[i3][1]+p[i4][1])/2;

    double total=sqrt(pow(mx-ex,2)+pow(my-ey,2))+sqrt(pow(nx-ex,2)+pow(ny-ey,2));
    for(int i=0;i<4;i++){                                     // perimetro de cada triangulo, aunque básicamente solo son 2 y se duplica
        int j=(i+1)%4;
        total+=sqrt(pow(p[i][0]-p[j][0],2)+pow(p[i][1]-p[j][1],2))
              +sqrt(pow(p[i][0]-ex,2)+pow(p[i][1]-ey,2))
              +sqrt(pow(p[j][0]-ex,2)+pow(p[j][1]-ey,2));
    }
    cout<<"Distancia total: "<<total<<" m";
    return 0;
}
