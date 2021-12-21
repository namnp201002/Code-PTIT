#include<iostream>
#include<string>
using std::string;
int check(string s){
	for(int i=0; i<s.size()/2; i++){
		if(s[i]!=s[s.size()-1-i]) return 0;
	}
	return 1;
}
using std::string;
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		string s;
		getline(std::cin, s);
		if(check(s)) std::cout << "YES\n";
		else std::cout << "NO\n";
	}
	return 0;
}
