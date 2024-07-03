#include<iostream>
using namespace std;

int main(){
	int numero, num[30],sumanegativos=0,sumapositivos=0;
	cout<<"Los numeros a ingresar son: ";
	cin>>numero;
	for(int i=0;i<numero;i++){
		cout<<i+1<<". ";
		cin>>num[i];
		if(num[i]<0){
			sumanegativos+=num[i];
		}else{
			sumapositivos+=num[i];
		}
	}
	cout<<"\nLa suma de los numeros positivos es: "<<sumapositivos<<endl;
	cout<<"\nLa suma de los numeros negativos es: "<<sumanegativos<<endl;
	return 0;
}