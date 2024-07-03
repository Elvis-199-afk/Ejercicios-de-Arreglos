#include<iostream>

using namespace std;

void str_cpy(char *str1,char *str2){
	for(int i=0;i<30;i++){
		str1[i]=str2[i];
	}
}

int main(){
	char str1[30],str2[30];
	cin.getline(str2,30);
	str_cpy(str1,str2);
	cout<<str1;
	
	return  0;
}