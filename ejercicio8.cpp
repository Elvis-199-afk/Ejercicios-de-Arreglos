#include<iostream>

using namespace std;

int main(){
	char num[10], numero;
	bool capicua;
	int cont=0;

	
	do{
		system("cls");
		cout<<"Ingrese un numero de 10 cifras: ";
		cin>>num;
		for(int i=0;num[i]!='\0';i++){
			cont++;
		}
		
		if(cont!=10){
			cout<<"\nIngrese un numero de 10 cifras . . . \n\n";
			cont=0;
			system("pause");
		}
	}while(cont!=10);

	
	for(int i=0;i<10/2;i++){
		if(num[i]==num[9-i]){
			capicua=true;
		}else{
			capicua=false;
			break;
		}
	}
	if(capicua==true){
		cout<<"El numero de 10 cifras es capicua\n";
	}else{
		cout<<"El numero de 10 cifras no es capicua\n";
	}
	return 0;
}