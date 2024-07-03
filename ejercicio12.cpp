#include<iostream>
using namespace std;

bool arraysOrden(int arreglo[], int numeros){
	bool a=true;
		for(int i=0;i<numeros-1;i++){
			if(!(arreglo[i]<arreglo[i+1])){
				for(int i=0;i<numeros-1;i++){
					if(!(arreglo[i]>arreglo[i+1])){
						a = false;
						break;
					}
				}	
			}
		}
		return a;
	}
	

int main(){
	int num[30], numeros; 
	bool ordenado;
	cout<<"La cantidad de numeros a ingresar es: ";
	cin>>numeros;
	for(int i=0;i<numeros;i++){
		cout<<i+1<<". ";
		cin>>num[i];
	}
	ordenado=arraysOrden(num,numeros);
	if(ordenado){
		cout<<"\nEsta ordenado\n";
	}else{
		cout<<"\nNo esta ordenado\n";
	}
	
	return 0;
}