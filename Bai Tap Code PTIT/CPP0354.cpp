#include<iostream>
#include<map>
#include<string>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::string s;
		getline(std::cin , s);
		std::map<char,int> m;
		++m[s[0]];
		for(int i=1; i<s.size(); i++){
			m[s[i]]++;
			if(s[i]!=s[i-1]){
				std::cout<<s[i-1]<<m[s[i-1]];
				m[s[i-1]]=0;
			}
		}
		std::cout << s[s.size()-1] <<m[s[s.size()-1]] << std::endl;
	}
	return 0;
}
