#include<iostream>
using namespace std;
int main(){
    int n, resto;
    cout<<"Ingrese el numero a evaluar: ";
    cin>>n;
    cout<<"El numero es par en las bases:";
    for(int base=3; base<=9; base++){
        resto=n%base;
        if(resto%2==0)cout<<" "<<base;}
    return 0;
}
