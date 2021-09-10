#include<iostream>
#include<string>
#include<map>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::string s;
		getline(std::cin, s);
		std::map <char, int> m;
		for(int i = 0; i < s.size(); i++){
			m[s[i]]++;
		}
		for(int i = 0; i < s.size(); i++){
			if(m[s[i]]==1) {
				std::cout << s[i];
				m[s[i]]=0;
			}
		}
		std::cout << std::endl;
	}
}
