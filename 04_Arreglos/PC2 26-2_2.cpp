/*Un sistema operativo administra 5 procesos que deben ejecutarse en la CPU. Para cada proceso se registra un 
identificador (código numérico de 2 dígitos), tiempo de llegada (en segundos), tiempo de ejecución (en segundos) y 
prioridad (número de 1 dígito). Esta información debe almacenarse en una matriz bidimensional de tamaño 5 x 4. 
Desarrolle un programa en lenguaje C++ que realice las siguientes operaciones:
a) Registro de datos: almacenar los datos de los cincos procesos en la matriz dimensional, donde cada fila 
representa un proceso y cada columna representa uno de sus atributos.
b) Ordenamiento: ordenar los procesos de acuerdo con su tiempo de llegada, de menor a mayor. Si dos procesos tienen 
el mismo tiempo de llegada, se debe considerar primero el proceso con mayor prioridad, donde un número menor 
representa una prioridad más alta.
c) Planificación PEPS: calcular el tiempo de espera de cada proceso utilizando el algoritmo PEPS - Primero en entrar, 
primero en salir. Considere que el CPU permanece libre cuando no hay procesos disponibles para ejecutar.
d) Búsqueda: buscar un proceso por su identificador y mostrar su tiempo de llegada, tiempo de ejecución, prioridad y 
tiempo de esperar. Si el proceso no existe, mostrar el mensaje correspondiente. */
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(NULL));     // columnas: 0=el id, 1 es el t de llegada, 2 ejecuciony 3 prioridad
    int p[5][4], espera[5];
    for(int i=0;i<5;i++){
        p[i][0]=10+rand()%90;
        	p[i][1]=rand()%10;
        		p[i][2]=1+rand()%9;
        			p[i][3]=1+rand()%9;
    }
    for(int i=0;i<4;i++)
        for(int j=0;j<4-i;j++)
            if(p[j][1]>p[j+1][1] || (p[j][1]==p[j+1][1] && p[j][3]>p[j+1][3]))
                for(int k=0;k<4;k++){
                    int t=p[j][k]; p[j][k]=p[j+1][k]; p[j+1][k]=t;
                }
    int reloj=0;
    for(int i=0;i<5;i++){
        if(reloj<p[i][1]) reloj=p[i][1];      
        espera[i]=reloj-p[i][1];
        reloj+=p[i][2];
    }
    cout<<"\t\t ID\tLleg\tEjec\tPrio\tEspera\n";
    for(int i=0;i<5;i++){cout<<"Proceso "<<i+1<<"\t#";
        for(int j=0;j<4;j++) cout<<p[i][j]<<"\t";
        cout<<espera[i]<<"\n";
    }
    int id; bool hallado=false;
    cout<<"\n# de ID a buscar: "; cin>>id;
    for(int i=0;i<5;i++)
        if(p[i][0]==id){
            cout<<"Llegada "<<p[i][1]<<", ejecucion "<<p[i][2]
                <<", prioridad "<<p[i][3]<<", espera "<<espera[i];
            hallado=true;
        }
    if(!hallado) cout<<"El proceso no existe. :v";
    return 0;
}
