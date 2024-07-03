#include<iostream>
using namespace std;

int main(){
	char oracion[100];
	cout<<"Ingrese la oracion:\n";
	cin.getline(oracion,100);
	for(int i=0;oracion[i]!='\0';i++){
		cout<<oracion[i];
		if(oracion[i]==' '){
			cout<<endl;
		}
	}
	
	return 0;
}