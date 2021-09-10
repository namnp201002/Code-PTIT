#include<iostream>
int main(){
	int t;
	std::cin>>t;
	while(t--){
		int n;
		std::cin>>n;
		long long k;
		std::cin>>k;
		long long s=0;
		for(int i=1; i<=n; i++){
			s += i%k;
		}
		std::cout<<s<<std::endl;
	}
	return 0;
}
