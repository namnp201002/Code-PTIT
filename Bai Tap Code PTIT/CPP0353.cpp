#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
int ss(std::string a){
	for(int i=0; i<=a.size(); i++){
		if(a[i]!=a[a.size()-i-1]) return 0;
	}
	return 1;
}
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		char s[1000000];
		std::string a = "";
		std::cin.getline(s, sizeof(s));
		for(int i = 0; i < strlen(s); i++){
			if(strchr("ABCabc", s[i])!=NULL){
				a+=(2 + '0');
			}else if(strchr("DEFdef", s[i])!=NULL){
				a+=(3 + '0');
			}else if(strchr("GHIghi", s[i])!=NULL){
				a+=(4 + '0');
			}else if(strchr("JKLjkl", s[i])!=NULL){
				a+=(5 + '0');
			}else if(strchr("MNOmno", s[i])!=NULL){
				a+=(6 + '0');
			}else if(strchr("PQRSpqrs", s[i])!=NULL){
				a+=(7 + '0');
			}else if(strchr("TUVtuv", s[i])!=NULL){
				a+=(8 + '0');
			}else if(strchr("WXYZwxyz", s[i])!=NULL){
				a+=(9 + '0');
			}
		}
		if(ss(a)) std::cout << "YES\n";
		else std::cout << "NO\n";
	}
	return 0;
}
