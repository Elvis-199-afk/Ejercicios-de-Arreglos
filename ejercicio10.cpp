#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	int numero, num[30],s=0,media,aux,mediana,mayor=-1,moda,indice;
	srand(time(0));
	for(int i=0;i<30;i++){
		num[i]=rand()%899+101;
		s+=num[i];		
	}
	cout<<"Los numeros del areglo son: \n\n";
	for(int i=0;i<30;i++){
		cout<<i+1<<". "<<num[i]<<endl;
	}
	media=s/30;
	for(int i=0;i<30;i++){
		for(int j=0;j<30;j++){
			if(num[j]>num[j+1]){
				aux=num[j];
				num[j]=num[j+1];
				num[j+1]=aux;
			}
		}
	}
	mediana=num[15];
	cout<<endl;
	int cont=0;
	for(int i=0;i<30;i++){
		for(int j=i+1;j<30;j++){
			if(num[i]==num[j]){
				cont++;
				indice=i;
			}
		}
		if(cont>mayor){
			mayor=cont;
			indice=i;
		}
	}
	moda=num[indice];
	cout<<endl;
	cout<<"La media es: "<<media<<endl;
	cout<<"La mediana es: "<<mediana<<endl;
	cout<<"La moda es: "<<moda<<endl;
	return 0;
}