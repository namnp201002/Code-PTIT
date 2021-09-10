#include<iostream>
#include<math.h>
//long long snt(long long n){
//	if(n<2) return 0;
//	if(n<=3) return 1;
//	if(n%2==0 || n%3==0) return 0;
//	for(int i=5; i<=sqrt(n); i+=6){
//		if(n%i==0 || n%(i+2)==0) return 0;
//	}
//	return 1;
//}
int main(){
	int t;
	std::cin >> t;
	bool check[1000000];
	for(int i=2; i<=1000000; i++) check[i]=true;
	for(int i=2; i<=1000000; i++){
		if(check[i]==true){
			for(int j=2*i; j<=1000000; j+=i){
				check[j]=false;
			}
		}
	}
	while(t--){
		long long n;
		std::cin >> n;
		int count=0;
		for(int i=2; i<=sqrt(n); i++){
			if(check[i]==true && i*i <= n) count ++;
		}
		std::cout << count << std::endl;
	}
	return 0;
}
