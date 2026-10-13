/*Con 2 secciones, 3 alumnos por sección, 4 notas por alumno, muestra:
El promedio de cada alumno, agrupado por sección.
De cada sección, el mejor promedio y qué alumno lo tiene.*/
#include<iostream>
using namespace std;
int main(){
    float arreglo[2][3][5]={0}; 
    for(int s=0; s<2; s++){cout<<"==== Seccion "<<s+1<<" ===="<<endl;
        for(int a=0; a<3; a++){cout<<"Alumno "<<a+1<<":"<<endl;
            float suma=0;
            for(int n=0; n<4; n++){cout<<"Nota PC"<<n+1<<":";
                cin>>arreglo[s][a][n];
                suma+=arreglo[s][a][n];
            }
            arreglo[s][a][4]=suma/4.0;      
        }
    }
    for(int s=0; s<2; s++){
        float mayorp=arreglo[s][0][4];     
        int ma=0;                           
        float proms=0;
        cout<<"\nSeccion "<<s+1<<":\n";
        cout<<"\t\tPC1\tPC2\tPC3\tPC4\tPromedio\n";
        for(int a=0; a<3; a++){
            cout<<"Alumno "<<a+1<<":\t";
            for(int n=0; n<5; n++) cout<<arreglo[s][a][n]<<"\t";
            cout<<"\n";
            for(int n=0; n<4; n++) proms+=arreglo[s][a][n]; 
            if(arreglo[s][a][4]>mayorp){
                mayorp=arreglo[s][a][4]; ma=a;
            }
        }
        cout<<"Promedio de la seccion: "<<proms/12.0<<endl;
        cout<<"Mejor promedio: Alumno "<<ma+1<<" con "<<mayorp<<endl;
    }
    return 0;
}
