#include<iostream>
#include<string.h>
#include<map>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	std::map<std::string,int> m;
	for(int i=0; i<t; i++){
		char s[50];
		std::cin.getline(s, sizeof(s));
		int vitri;
		for(int i=0; i<strlen(s); i++){
			if(s[i]>='A' && s[i]<='Z') s[i]+=32;
		}
		char *p = strtok(s, " ");
		char a[50][50];
		int count=0;
		while(p!=NULL){
			strcpy(a[count++], p);
			p = strtok(NULL, " ");
		}
		std::string str="";
		str+=a[count-1];
		for(int i=0; i<count-1; i++){
			str+=a[i][0];
		}
		m[str]++;
		std::cout << str ;
		if(m[str]>1) std::cout << m[str];
		std::cout <<  "@ptit.edu.vn" << std::endl;
	}
	return 0;
}
