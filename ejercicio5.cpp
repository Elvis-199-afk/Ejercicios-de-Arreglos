#include<iostream>
using namespace std;

int main(){
	int num[100], numeros, aux, contMayor=0, contMenor=0;
	cout<<"Ingrese cuantos numeros desea ingresar: ";
	cin>>numeros;
	cout<<"Ingrese los numeros: "<<endl;
	
	for(int i=0;i<numeros;i++){
		cin>>num[i];	
	}
	
	for(int i=0;i<numeros;i++){
		for(int j=0;j<numeros-1;j++){
			if(num[j]>num[j+1]){
				aux=num[j];
				num[j]=num[j+1];
				num[j+1]=aux;
			}
		}
	}
	
	for(int i=0;i<numeros;i++){
		if(num[numeros-1]==num[i]){
			contMayor++;
		}
		if(num[0]==num[i]){
			contMenor++;
		}
	}
	
	cout<<"El numero mayor es: "<<num[numeros-1]<<endl;
	cout<<"Este numero se repite '"<<contMayor<<"' veces"<<endl<<endl;
	cout<<"El numero menor es: "<<num[0]<<endl;
	cout<<"Este numero se repite '"<<contMenor<<"' veces"<<endl;

	return 0;
}