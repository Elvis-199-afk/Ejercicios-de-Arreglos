#include<iostream>
using namespace std;

using namespace std;

void str_cat(char *str1,char *str2){
	int tam=0;
	for(int i=0;str1[i]!='\0';i++){
		tam++;
	}
	
	for(int i=tam;i<30;i++){
		str1[i]=str2[i-tam];
	}
	cout<<str1;
}

int main(){
	char str1[30],str2[30];
	cin.getline(str1,30);
	cin.getline(str2,30);
	str_cat(str1,str2);
	
	
	return  0;
}