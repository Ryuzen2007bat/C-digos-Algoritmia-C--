#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std; 
int main(){
	srand(time(null)); 
	//haz un gonza que sacque mas de 10
	//tienes una matriz de nxn
	int n1, n2;   
	cout<<"Ingresa el orden de tu matriz nxn"; 
	cin>>n1>>n2; 
	int matriz[n1][n2]={0};
	for(int i=0; i<n1; i++){
		for(int j=0; j<n2; j++){
			cout<<matriz[i];
		}
	
	}
	return 0;
}
