#include<iostream>
#include<algorithm>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long long a, x, y;
		std::cin >> a >> x >> y;
		long long UCLN= std::__gcd(x, y);
		for(int i=1; i<=UCLN; i++){
			std::cout << a;
		}
		std::cout << std::endl;
	}
	return 0;
	
}
