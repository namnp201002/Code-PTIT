#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::string a = "";
		std::string s;
		getline(std::cin, s);
		long sum = 0;
		for(int i=0; i<s.size(); i++){
			if(s[i]>='A' && s[i]<='Z') a+=s[i];
			else sum += (s[i]-'0');
		}
		std::sort(a.begin(), a.end());
		std::cout << a << sum << std::endl;
	}
	return 0;
}

