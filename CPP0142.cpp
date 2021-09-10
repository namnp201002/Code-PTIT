#include<iostream>
#include<algorithm>
#include<math.h>
int snt(int n){
	if(n<2) return 0;
	if(n<=3) return 1;
	if(n%2==0 || n%3==0) return 0;
	for(int i=5; i<=sqrt(n); i+=6){
		if(n%i==0 || n%(i+2) == 0) return 0;
	} 
	return 1;
}
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int count = 0;
		for(int i=1; i<n; i++){
			int a = std::__gcd(n, i);
			if(a==1) count ++;
		}
		if(snt(count)) std::cout << "1\n";
		else std::cout << "0\n";
	}
	return 0;
}
