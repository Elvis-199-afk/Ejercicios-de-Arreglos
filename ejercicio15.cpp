#include<iostream>
using namespace std;

int str_cmp(char *str1,char *str2){
	int cmp=0;
	for(int i=0;i<30;i++){
		
		if(str1[i]<str2[i]){
			cmp=-1;
			break;
		}else if(str1[i]>str2[i]){
			cmp=1;
			break;
		}else{
			cmp=0;
		}
	return cmp;
}

int main(){
	int num;
	char str1[30],str2[30];
	cout<<"Ingrese la primera cadena: ";
	cin.getline(str1,30);
	cout<<"Ingrese la segunda cadena: ";
	cin.getline(str2,30);
	num=str_cmp(str1,str2);
	cout<<endl;
	if(num==0){
		cout<<str1<<" = "<<str2;
	}else if(num==-1){
		cout<<str1<<" < "<<str2;
	}else {
		cout<<str1<<" > "<<str2<<endl;
	}
	return 0;
}
