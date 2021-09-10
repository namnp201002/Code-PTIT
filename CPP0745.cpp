#include<iostream>
int main(){
	long F[1000];
	F[0]=0, F[1]=1, F[2]=1;
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		long long x=1e9+7;
		for(int i=3; i<=n; i++){
			F[i] = F[i-1]%x + F[i-2]%x;
		}
		std::cout << F[n]%x <<std::endl;
	}
	return 0;
}
