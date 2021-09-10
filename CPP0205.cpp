#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long n;
		std::cin >> n;
		long long a[n+5];
		for(long i=0; i<n; i++){
			std::cin >> a[i];
		}
		int max=0;
		for(int i=0; i<n; i++){
			if(a[i]>max) max = a[i];
		}
		std::cout << max << std::endl;
	}
	return 0;
}
