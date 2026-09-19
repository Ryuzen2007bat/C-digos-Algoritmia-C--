/*El sueldo semanal de un trabajador se calcula considerando un monto fijo según su categoría más un
monto variable según las horas trabajadas, a razón de S/. 10 por hora. Si el trabajador excede las 40
horas de trabajo, se le paga el doble por cada hora extra (superior a 40), pero si excede las 55 horas se
le paga el triple por cada hora extra (superior a 55). Considerar que un trabajador solo puede cobrar un
máximo de 20 horas extras (si tiene mas, solo se le pagan 20 horas extras). Desarrolle el algoritmo para
calcular lo que se le debe pagar al trabajador.
NOTA: No se pueden usar arreglos*/
#include<iostream>
using namespace std; 
int main(){
int n, extra, pago;
cout<<"Introduzca las horas semanales de trabajo: ";cin>>n;
	if(n<=40){
		pago=n*10;
	}else{extra=n-40; 
	if(extra>20)extra=20;
	if(extra<=15)pago=400+extra*20;
	else pago=400 + 300 + (extra-15)*30;
	}
	cout<<"\nEl sueldo semanal correspondiente sera de: "<<pago; 
	return 0;
}
