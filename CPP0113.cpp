#include<iostream>
#include<string.h>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		std::cin.ignore();
		std::string s;
		getline(std::cin, s);
		int len = s.length();
		if(s[len-1] == '6' && s[len-2] == '8'){
			std::cout << "1\n";
		}else std::cout << "0\n";
	}
	return 0;
}
