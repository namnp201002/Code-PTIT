#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long long n;
		std::cin >> n;
		long long a[n+1];
		long long b[n+1];
		for(long long i=0; i<n; i++){
			b[i] = -1;
		}
		for(long long i=0; i<n; i++){
			std::cin >> a[i];
			if(a[i]<n && a[i]>=0){
				b[a[i]] = a[i];
			}
		}
		for(long long i=0; i<n; i++){
			std::cout << b[i] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
