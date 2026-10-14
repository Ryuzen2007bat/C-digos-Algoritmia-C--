/*Una estación meteorológica cuenta con "m>=3" sensores instalados en diferentes zonas de Lima. Se han registrado 
lecturas de temperatura desde 10ºC hasta 50ºC (puede usar números Aleatorios para llenar la tabla) durante los 7 
días de la semana. Escribir un programa en C++ que procese estos datos para:
a) Imprimir la matriz de lecturas por sensor y día.
b) Identificar que día de la semana (columna) registro la temperatura máxima global y en qué sensor ocurrió.
c) Determinar el porcentaje de días de la semana en que cada sensor superó una temperatura umbral de 28ºC.
d) Generar un arreglo que contenga la temperatura promedio de cada sensor durante toda la semana, ordenado de menor
   a mayor.
e) Determinar e imprimir todos los días que marcaron una temperatura repetida entre dos o más sensores (indicando 
	el día y la temperatura coincidente). Si no se registra ningún empate en toda la semana, mostrar el mensaje: 
	"No existió la misma temperatura en dos sitios diferentes".*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int m, t[50][7];       
    float prom[50];
    do{ cout<<"Sensores (min 3, max 50): "; cin>>m; }while(m<3||m>50);
    for(int i=0;i<m;i++)
        for(int j=0;j<7;j++) t[i][j]=10+rand()%41;
    cout<<"\t\tLun\tMar\tMie\tJue\tVie\tSab\tDom\n";
    for(int i=0;i<m;i++){
        cout<<"Sensor "<<i+1<<"\t";
        for(int j=0;j<7;j++) cout<<t[i][j]<<"\t";
        cout<<"\n";
    }
    int mayor=t[0][0], fm=0, cm=0;
    for(int i=0;i<m;i++)
        for(int j=0;j<7;j++)
            if(t[i][j]>mayor){ mayor=t[i][j]; fm=i; cm=j; }
    cout<<"\nMaxima temperatura: "<<mayor<<"C, dia ";
    switch(cm){
    	case 0:
    		cout<<"Lunes"<<", sensor "<<fm+1<<endl; break;
    			case 1:
    		cout<<"Martes"<<", sensor "<<fm+1<<endl; break;
    					case 2:
    		cout<<"Miercoles"<<", sensor "<<fm+1<<endl; break;
    						case 3:
    		cout<<"Jueves"<<", sensor "<<fm+1<<endl; break;
    							case 4:
    		cout<<"Viernes"<<", sensor "<<fm+1<<endl; break;
    								case 5:
    		cout<<"Sabado"<<", sensor "<<fm+1<<endl; break;
    									case 6:
    		cout<<"Domingo"<<", sensor "<<fm+1<<endl; break;
	}
    cout<<"\nPorcentaje de dias > 28C:\n";
    for(int i=0;i<m;i++){
        int suma=0, cont=0;
        for(int j=0;j<7;j++){
            suma+=t[i][j];
            if(t[i][j]>28) cont++;
        }
        prom[i]=suma/7.0;
        cout<<"Sensor "<<i+1<<": "<<cont*100.0/7<<"%\n";
    }
    for(int i=0;i<m-1;i++)
        for(int j=0;j<m-1-i;j++)
            if(prom[j]>prom[j+1]){ float x=prom[j]; prom[j]=prom[j+1]; prom[j+1]=x; }
    cout<<"\nPromedios ordenados de menor a mayor: ";
    for(int i=0;i<m;i++) cout<<prom[i]<<" || ";
    bool hay=false;
    cout<<"\n\nTemperaturas repetidas:\n";
    for(int j=0;j<7;j++)
        for(int i=0;i<m;i++){
            bool antes=false, despues=false;
            for(int k=0;k<i;k++)   if(t[k][j]==t[i][j]) antes=true;
            for(int k=i+1;k<m;k++) if(t[k][j]==t[i][j]) despues=true;
            if(!antes && despues){
                switch(j){
    	case 0:
    		cout<<"Dia Lunes: "<<t[i][j]<<"C\n";
                hay=true; break;
    			case 1:
    		cout<<"Dia Martes: "<<t[i][j]<<"C\n";
                hay=true; break;
    					case 2:
    		cout<<"Dia Miercoles: "<<t[i][j]<<"C\n";
                hay=true; break;
    						case 3:
    		cout<<"Dia JUeves: "<<t[i][j]<<"C\n";
                hay=true; break;
    							case 4:
    		cout<<"Dia Viernes: "<<t[i][j]<<"C\n";
                hay=true; break;
    								case 5:
    		cout<<"Dia Sabado: "<<t[i][j]<<"C\n";
                hay=true; break;
    									case 6:
    		cout<<"Dia Domingo: "<<t[i][j]<<"C\n";
                hay=true; break;
	}
            }
        }   
    if(!hay) cout<<"No existio la misma temperatura en dos sitios diferentes";
    return 0;
}
