/*Para apoyar a las familias afectadas por la pandemia, el gobierno ha resuelto indemnizarlas de la siguiente
manera:
a. Familias con hasta 3 hijos menores de edad, recibirán S/. 1000, las que tengan de 4 a 6 hijos menores de
edad S/. 2000, las que tengan más de 6 hijos menores de edad S/. 3000
b. Además, si la madre de familia es viuda, la familia recibirá S/. 1000 soles adicionales
c. Finalmente, por cada hijo matriculado en la escuela la familia recibirá 200 soles adicionales

Desarrolle un algoritmo para calcular el subsidio que le correspondería a una familia. Asuma que los datos de
entrada serán: el total de hijos menores de edad, indicador de viudez (1 si es viuda, 0 si no es viuda) y el número
de hijos matriculados en la escuela. Considere que el último dato no puede ser mayor que el número de hijos
menores de edad.*/
#include<iostream>
using namespace std; 
int main(){
	int ind, hjos, matriculados,estado; 
	cout<<"Sea bienvenido(a) a la indemnizacion por pandemia por parte del Estado. \nPor favor responda las siguientes preguntas: \n";
cout<<"¿Cuantos hijos menores de edad tiene?: ";cin>>hjos;
while(hjos<0){

cout<<"No puede tener un numero negatico de hijos, intente nuevamente:\n";
cin>>hjos;}

if(hjos<4){ind=1000;
}else if(hjos>3 and hjos<7){ind=2000;
}else {ind=3000;
}	cout<<"¿La madre de familia se encuentra viuda? (1 Si / 0 No)\n";
cin>>estado;
if(estado==1){ind=ind+1000;
}
cout<<"¿Cuántos de sus hijos estan matriculados en la escuela?\n";
cin>>matriculados;
while(matriculados<0 || matriculados>hjos){
cout<<"Dato incorrecto, no pueden haber "<<matriculados<<" considerando su numero de hijos: "<<hjos<<". Intente nuevamente:\n";
cin>>matriculados;}
ind=ind + matriculados*200;
cout<<"De acuerdo con los datos ingresados se ha determinado que su monto de indemnizacion sera de S/."<<ind;

	return 0; 
}
	
	

