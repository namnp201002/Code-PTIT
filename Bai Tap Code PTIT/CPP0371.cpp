#include<iostream>
#include<string.h>
int main(){
		std::string s;
		getline(std::cin , s);
		for(int i=0; i<s.size(); i++){
			if (s[i]<='Z' && s[i]>='A') s[i]+=32;
		}
		for(int i=0; i<s.size(); i++){
			if(s[i]=='a' || s[i] =='e' || s[i]=='o' ||s[i]=='i' || s[i]=='u' ||s[i]=='y') continue;
			std::cout << "." << s[i];
		}
		std::cout << std::endl;
	return 0;
}
