#include<iostream>
#include<string>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::string s;
		getline(std::cin, s);
		int check =0;
		for(int i=0; i<s.size(); i++){
			if(s[i]!='0' && s[i]!='6' && s[i]!='8'){
				check ++;
				break;
			}
		}
		if(check==0) std::cout << "YES\n";
		else std::cout << "NO\n";
	}
	return 0;
}
