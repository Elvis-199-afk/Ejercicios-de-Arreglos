#include<iostream>
using namespace std;

void parentesis(char *c){
	int i=0, pa=0, pc=0;
	bool op=true;
	while(c[i]!='\0'){
		if(c[i]=='('){
			pa++;
			i++;
		}else if(c[i]==')'){
			if(pa>pc){
				pc++;
				i++;
			}else{
				cout<<"esta mal";
				break;
			}
		}else{
			i++;
		}
	}
	if(c[i]=='\0'){
		if(pa==pc){
			cout<<"esta bien";
		}else{
			cout<<"esta mal";
		}
	}
}

int main(){
	char c[50];
	cout<<"Ingrese la cadena"<<endl;
	cin.getline(c, 50);
	parentesis(c);
	return 0;
}
