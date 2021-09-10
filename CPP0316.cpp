#include<iostream>
#include<string.h>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::string s ;
		getline(std::cin, s);
		long long sum = 0;
		for(int i=0; i<s.size(); i++){
			sum += (s[i]-'0');
		}
		long S = 0;
		//19
		while(sum > 0){
			S += sum%10;
			sum/=10;
			if(sum==0 && S>=10){
				sum = S;
				S = 0;
			}
		}
		if(S==9) std::cout << "1\n";
		else std::cout << "0\n";
	}
	return 0;
}
