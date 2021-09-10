#include<iostream>
int main(){
	long long F[1000];
	F[0]=0, F[1]=1;
	int t;
	std::cin >> t;
	while(t--){
		long long n;
		std::cin >> n;
		int i=2;
		while(F[i]<n){
			i++;
			F[i] = F[i-1] + F[i-2];
			
		}
		if(F[i] == n) std::cout << "YES\n";
		else std::cout << "NO\n";
	}
	return 0;
}
