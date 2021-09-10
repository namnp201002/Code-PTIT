#include<iostream>
#include<string>
#include<math.h>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::string s;
		getline(std::cin, s);
		long sum1=0, sum2=0;
		for(int i=0; i<s.length(); i++){
			if(i%2==0) sum1+=(s[i]-48);
			else sum2+=(s[i]-48);
		}
		if(abs(sum1-sum2)%11==0) std::cout << "1\n";
		else std::cout << "0\n";
	}
	return 0;
}
