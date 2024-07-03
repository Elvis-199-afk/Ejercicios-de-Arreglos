#include<iostream>
#include<cmath>
using namespace std;

bool esnumero(char);
int numero(char);

int tama(char *cadena){
	int tam=-1;
	for(int i=0; cadena[i]!='\0'; i++){
		tam++;	
	}
	return tam;
}

void descartar_sim(char *cadena){
	bool ver;
	int j;
	int tam=tama(cadena);
	for(int i=0; i<=tam; i++){
		ver=esnumero(cadena[i]);
		if(!ver){
			j=i;
			while(cadena[j]!='\0'){
				cadena[j]=cadena[j+1];
				j++;
			}
			tam--;
			i--;		
		}
	}
}

void convertir(char cadena[]){
	int num=0, num_c;
	int tam=tama(cadena);
	for(int i=0; i<=tam; i++){
		num_c=numero(cadena[i]);
		num+=num_c*(pow(10, tam-i));
	}
	cout<<num<<" -> "<<num+2;
}


int main(){
	char cadena[30];
	cout<<"Ingrese la cadena: "<<endl;
	cin.getline(cadena, 30);
	cout<<endl;
	descartar_sim(cadena);
	convertir(cadena);
	return 0;
}

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

int numero(char num){
	int n;
	switch(num){
		case '0':
			n=0;
			return n;
			break;
		case '1':
			n=1;
			return n;
			break;
		case '2':
			n=2;
			return n;
			break;
		case '3':
			n=3;
			return n;
			break;
		case '4':
			n=4;
			return n;
			break;
		case '5':
			n=5;
			return n;
			break;
		case '6':
			n=6;
			return n;
			break;
		case '7':
			n=7;
			return n;
			break;
		case '8':
			n=8;
			return n;
			break;
		case '9':	
			n=9;
			return n;
			break;
		default:
			return n;
			break;
	}
}