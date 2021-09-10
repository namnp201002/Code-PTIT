#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long long a, b, c;
		std::cin >> a >> b >> c;
		long long m = 1e9+7;
		if(a==0 || b==0) std::cout << "0\n";
		else{
			long long x=a%c, y=b%c;
			if(x>m) x%=m;
			if(y>m) y%=m;
			std::cout << (x*y)%c << std::endl;
		}
		
	}
	return 0;
}
