#include<iostream>
using namespace std;

bool esnumero(char num){
	bool verdad=false;
	switch(num){
		case '0':
			verdad=true;
			return verdad;
			break;
		case '1':
			verdad=true;
			return verdad;
			break;
		case '2':
			verdad=true;
			return verdad;
			break;
		case '3':
			verdad=true;
			return verdad;
			break;
		case '4':
			verdad=true;
			return verdad;
			break;
		case '5':
			verdad=true;
			return verdad;
			break;
		case '6':
			verdad=true;
			return verdad;
			break;
		case '7':
			verdad=true;
			return verdad;
			break;
		case '8':
			verdad=true;
			return verdad;
			break;
		case '9':	
			verdad=true;
			return verdad;
			break;
		default:
			return verdad;
			break;
	}
}

void descartar_sim(char *cadena){
	bool ver;
	int j;
	for(int i=0; cadena[i]!='\0'; i++){
		ver=esnumero(cadena[i]);
		if(!ver){
			j=i;
			while(cadena[j]!='\0'){
				cadena[j]=cadena[j+1];
				j++;
			}
			cadena[j]='\0';			
		}
	}
}


int main(){
	char cadena[30];
	cin.getline(cadena, 30);
	descartar_sim(cadena);
	cout<<cadena;
	return 0;
}