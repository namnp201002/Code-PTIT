#include<iostream>
#include<string>
int check(std::string s){
	for(int i=0; i<=s.size()/2; i++){
		if(s[i]!=s[s.size()-i-1]) return 0;
	}
	for(int i=0; i<s.size(); i++){
		if((s[i]-48)%2!=0) return 0;
	}
	return 1;
}
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::string s;
		getline(std::cin, s);
		if(check(s)) std::cout << "YES\n";
		else std::cout << "NO\n";
	}
	return 0;
}
