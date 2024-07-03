#include<iostream>
using namespace std;

void comprobar(char *nomcom, char *apellido){
	int tam1=-1, tam2=-1, tam_a1=-1;
	for(int i=0; nomcom[i]!='\0'; i++){
		tam1++;
	}
	for(int i=tam1; nomcom[i]!=' '; i--){
		tam_a1++;
	}
	for(int i=0; apellido[i]!='\0'; i++){
		tam2++;
	}
	if(tam_a1==tam2){
		for(int i=tam_a1; nomcom[i]!=' '; i--){
			int j=tam1;
			if(!apellido[i]==nomcom[j]){
				cout<<"El apellido no pertenece a la persona...";
				break;
			}
			j--;
		}
		cout<<"El apellido pertenece a la persona...";
	}else{
		cout<<"El apellido no pertenece a la persona...";
	}
}

int main(){
	char nomcom[50], apellido[20];
	cin.getline(nomcom, 50);
	cout<<"Ingrese el apellido: ";
	cin>>apellido;
	comprobar(nomcom, apellido);
}