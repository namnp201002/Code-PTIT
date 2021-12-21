#include<iostream>
long long F[100];
long long Fib(int n){
	F[1] = 1;
	F[2] = 1;
	for(int i=3; i<=n; i++){
		F[i] = F[i-1] + F[i-2];
	}
	return F[n];
}
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		std::cout << Fib(n) << std::endl;
	}
	return 0;
}
