#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		// abcdef 12345
		// Nguyen Phuong Nam
		// alo1234
		long n;
		std::cin >> n;
		long long s = n*(n+1)/2;
		std::cout << s << std::endl;
	}
	return 0;
}
