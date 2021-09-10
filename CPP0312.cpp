#include<iostream>
#include<string>
using std::string;
int main(){
	int t;
	std::cin >> t;
	while(t--){
		std::cin.ignore();
		string s;
		getline(std::cin, s);
		int k;
		std::cin >> k;
		int a[1000]={0};
		for(int i=0; i<s.length(); i++){
			a[s[i]]++;
		}
		int count=0;
		for(int i='a'; i<='z'; i++){
			if(a[i] != 0) count++;
		}
		if(26-count <= k) std::cout<< "1" << std::endl;
		else std::cout << "0" << std::endl;
	}
	return 0;
}
