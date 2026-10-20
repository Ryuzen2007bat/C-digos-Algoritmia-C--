#include<iostream>
using namespace std; 
int main(){
	int n; 
cin>>n;
	int arreglo[n][n+1];
	int i=0, j=0;
for(int t=1; t<=n*(n+1); t++){
    arreglo[i][j]=t;
    i=(i+1)%n;
    j=(j+1)%(n+1);
}
	for(int a=0; a<n; a++){
		for(int b=0; b<n+1; b++){
			cout<<arreglo[i][j]<<"\t";
		}cout<<endl;
	}
	
	return 0;
}
