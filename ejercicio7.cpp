#include<iostream>
using namespace std;

int main(){
	int num[100], numeros, aux;
	cout<<"Ingrese la cantidad de numeros: ";
	cin>>numeros;
	cout<<"\nLos numeros son: "<<endl;;
	for(int i=0;i<numeros;i++){
		cin>>num[i];	
	}
	
	for(int i=0;i<numeros/2;i++){
		aux=num[i];
		num[i]=num[numeros-1-i];
		num[numeros-1-i]=aux;
	}
	cout<<"Los numeros en orden invertido son: \n";
	for(int i=0;i<numeros;i++){
		cout<<num[i]<<endl;
	}
	return 0;
}