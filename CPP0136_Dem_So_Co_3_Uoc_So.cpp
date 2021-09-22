#include<iostream>
#include<math.h>
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
