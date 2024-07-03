#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char frase[50];
	int tam=0;
	cout<<"Ingrese la frase\n";
	cin.getline(frase,50);
	bool palindromo;
	for(int i=0;frase[i]!='\0';i++){
		tam++;
	}
	for(int i=0;i<tam;i++){
		if(frase[i]==' '){
			for(int j=i;j<tam-1;j++){
				frase[j]=frase[j+1];
			}
			tam--;
			i--;
		}
	}
	
	for(int i=0;i<tam/2;i++){
		if(frase[i]==frase[tam-i-1]){
			palindromo=true;
		}else{
			palindromo=false;
			break;
		}
	}
	if(palindromo){
		cout<<"La frase es palindroma\n";
	}else{
		cout<<"La frase no es palindroma\n";
	}
	return 0;
}