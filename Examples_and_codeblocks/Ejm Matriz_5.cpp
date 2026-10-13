/*Lee n (= 50) enteros de 2 o 3 cifras, calcula el promedio, 
elimina los elementos menores al promedio y duplica cada primo mayor que el promedio, 
conservando el orden. 
Muestra el promedio y el arreglo resultante.*/
#include <iostream>
using namespace std;
int main(){
    int arreglo[100]; 
    int n;
    float suma=0;
    cout<<"Ingrese la cantidad de enteros a evaluar (max 50):\n";
	cin>>n;
    for(int i=0; i<n; i++){
        cin >> arreglo[i]; 
        suma += arreglo[i];
    }
    float promedio=suma/n;
    cout<<"Promedio: "<<promedio<<endl;
    int i=0;
		while(i<n){
    		if(arreglo[i]%2==0 && arreglo[i]<promedio){
        		for(int j=i; j<n-1; j++) arreglo[j]=arreglo[j+1];
        			n--;                
    					}else i++;
							}
i=0;
    while(i<n){ 
        bool primo=(arreglo[i]>1);
        for(int d=2; d*d<=arreglo[i]; d++){
            if(arreglo[i]%d==0){ 
                primo=false;
                break; 
            }
        }
        
        if(primo&&arreglo[i]>promedio){
            for(int j=n; j>i; j--){
                arreglo[j]=arreglo[j-1];
            }
            n++; 
            i += 2; 
        } else {
            i++;   
        }
    }
    cout<<"Arreglo resultante: ";
    for(int j=0; j<n; j++){
        cout<<arreglo[j]<<" ";
    }
    cout<<endl;
    return 0;
}
