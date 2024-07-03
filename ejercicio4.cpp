#include<iostream>
using namespace std;

void ordenAlfabetico(string nombres[], int cantidad){
	string aux;
	for(int i=0;i<cantidad;i++){
		for(int j=0;j<cantidad;j++){
			if(nombres[j]>nombres[j+1]){
				aux=nombres[j];
				nombres[j]=nombres[j+1];
				nombres[j+1]=aux;
			}
		}
	}
	cout<<"Los nombres ordenados alfabeticamente son: "<<endl;
	for(int i=0;i<=cantidad;i++){
		cout<<nombres[i]<<endl;	
	}
	
}
int main(){
	string nombre[50], ordenado;
	int cantNombres;
	cout<<"Ingrese cuantos nombres va a ingresar: ";
	cin>>cantNombres;
	cout<<"Ingrese los nombres: "<<endl;
	for(int i=0;i<cantNombres;i++){
		cin>>nombre[i];
	}
	ordenAlfabetico(nombre, cantNombres);
	return 0;
}