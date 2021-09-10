#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long n;
		std::cin >> n;
		int a[n+5];
		long sum = 0;
		for(int i=0; i<n-1; i++){
			std::cin >> a[i];
			sum+=a[i];
		}
		long s = n*(n+1)/2;
		std::cout << s-sum << std::endl;
	}
	return 0;
}
