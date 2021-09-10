#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long n;
		std::cin >> n;
		long long a[n+5];
		long count=0;
		for(long i=0; i<n; i++){
			std::cin >> a[i];
			if(a[i]!=0) std::cout << a[i] << " ";
			else count++;
		}
		for(long i=0; i<count ; i++){
			std::cout << "0 ";
		}
		std::cout << std::endl;
	}
}
