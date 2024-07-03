#include<iostream>
using namespace std;

string mes(int n){
	string mess;
	switch(n){
		case 0:
			mess="Enero";
			break;
		case 1:
			mess="Febrero";
			break;
		case 2:
			mess="Marzo";
			break;
		case 3:
			mess="Abril";
			break;
		case 4:
			mess="Mayo";
			break;
		case 5:
			mess="Junio";
			break;
		case 6:
			mess="Julio";
			break;
		case 7:
			mess="Agosto";
			break;
		case 8:
			mess="Setiembre";
			break;
		case 9:
			mess="Octubre";
			break;
		case 10:
			mess="Noviembre";
			break;
		case 11:
			mess="Diciembre";
			break;
	}
	return mess;
}

int main(){
	float prom_mensual[12];
	float min=0, reg=0, exc=0;
	float suma;
	cout<<"Ingrese el promedio de las ventas del 2020: \n";
	for(int i=0; i<12; i++){
		cout<<i+1<<". ";
		cin>>prom_mensual[i];
		suma+=prom_mensual[i];
	}
	float promedio=suma/12;
	cout<<"El valor de la venta mensual promedio es: "<<promedio<<endl;
	for(int i=0; i<12; i++){
		if(prom_mensual[i]<=(0.4*promedio)){
			min++;
		}else if(prom_mensual[i]>=(0.75*promedio)){
			exc++;
		}else{
			reg++;
		}
	}
	cout<<"El porcentaje de meses es: "<<endl;
	cout<<"Minimo: "<<(min/12)*100<<endl;
	cout<<"Regular: "<<(reg/12)*100<<endl;
	cout<<"Maximo: "<<(exc/12)*100<<endl;
	cout<<"\nLos meses que tuvieron ventas EXCELENTES: ";
	for(int i=0; i<12; i++){
		if(prom_mensual[i]>=(0.75*promedio)){
			
			cout<<mes(i)<<endl;
		}
	}
	return 0;
}