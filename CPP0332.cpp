#include<iostream>
#include<string.h>
int main(){
	char s[100];
	std::cin.getline(s,sizeof(s));
	for(int i=0; i<sizeof(s); i++){
		if(s[i]>='A' && s[i]<='Z') s[i]+=32;
	}
	char *p = strtok(s, " ");
	char a[50][50];
	int count=0;
	while(p!=NULL){
		strcpy(a[count++], p);
		p = strtok(NULL, " ");
	}
	std::cout<<a[count-1];
	for(int i=0; i<count-1; i++){
		std::cout << a[i][0];
	}
	std::cout << "@ptit.edu.vn";
}
