#include<iostream>
#include<string>
#include<map>
int main(){
	int n;
	std::cin >> n;
	std::string s;
	std::map<std::string, int> m;
	std::cin.ignore();
	while(n--){
		getline(std::cin, s);
		m[s]++;
	}
	std::cout << m.size();
}
