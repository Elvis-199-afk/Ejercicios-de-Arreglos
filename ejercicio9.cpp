#include<iostream>
using namespace std;

int main(){
	int numeros[20], num,aux;
	cout<<"Ingrese la cantidad de numeros: \n";
	cin>>num;
	cout<<"\nLos numeros son: \n";
	for(int i=0;i<num;i++){
		cin>>numeros[i];
	}
	
	for(int i=num;i>=0;i--){
		numeros[i]=numeros[i-1];
	}
	numeros[0]=numeros[num];
	cout<<endl<<endl<<"Los numeros rotados una posicion a la derecha son: "<<endl;
	for(int i=0;i<num;i++){
		cout<<numeros[i]<<endl;
	}
	return 0;
}