#include<iostream>
#include<string>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::string s;
		getline(std::cin, s);
		int r=0;
		for(int i=0; i<s.size(); i++){
			r = (2*r + s[i]-48)%5;
		}
		if(r==0) std::cout << "Yes\n";
		else std::cout << "No\n";
	}
	return 0;
}
