#include<iostream>
using namespace std;

int main(){
	int num[100], numeros, sumIndicePar=0, sumIndiceImpar=0;
	cout<<"Ingrese la cantidad de numeros que desea: \n";
	cin>>numeros;
	cout<<"Los numeros son: \n\n";
	for(int i=0;i<numeros;i++){
		cin>>num[i];	
	}
	for(int i=0;i<numeros;i++){
		if((i+1)%2==0){
			sumIndicePar+=num[i];
		}else{
			sumIndiceImpar+=num[i];
		}
	}
	cout<<"La suma de los componentes de indice par es '"<<sumIndicePar<<"'"<<endl;
	cout<<"La suma de los componentes de indice impar es '"<<sumIndiceImpar<<"'"<<endl;
	return 0;
}