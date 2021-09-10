#include<iostream>
#include<string>
#include<math.h>
int check(std::string s){
	for(int i=0; i<s.size()-1; i++){
		if(abs(s[i]-s[i+1]) != 1) return 0;
	}
	return 1;
}
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::string s;
		std::cin >> s;
		if(check(s)) std::cout << "YES\n";
		else std::cout << "NO\n";
	}
	return 0;
}
