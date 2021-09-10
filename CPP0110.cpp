#include<iostream>
#include<string.h>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		char s[20];
		std::cin.getline(s, sizeof(s));
		for(int i=0; i<strlen(s); i++){
			if(s[i]=='0' && s[i+1] == '8' && s[i+2]=='4'){
				i+=2;
				continue;
			}
			std::cout << s[i];
		}
		std::cout << std::endl;
	}
	return 0;
}
