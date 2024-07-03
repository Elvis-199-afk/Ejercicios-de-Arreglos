#include<iostream>
using namespace std;

int main(){
	char letra, cadena[100];
	int cont=0;
	cout<<"Ingrese la cadena: "<<endl;
	cin.getline(cadena,100);
	cout<<"\nIngrese la letra a calcular su ocurrencia: ";
	cin>>letra;
	for(int i=0;cadena[i]!=0;i++){
		if(cadena[i]==letra){
			cont++;
		}
	}
	cout<<"\nLa ocurrencia de la letra '"<<letra<<"' en la cadena es: "<<cont;
}