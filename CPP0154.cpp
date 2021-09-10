#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin>>n;
		long long k;
		std::cin>>k;
		long long s=n*(n+1)/2;
		if(s==k) std::cout<<"1\n";
		else std::cout<<"0\n";
	}
	return 0;
}
