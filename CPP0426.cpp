#include<iostream>
#include<algorithm>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		std::sort(a, a+n);

		for(int i=0; i<n/2; i++){
			std::cout << a[n-i-1] << " " << a[i] << " ";
		}
		if(n%2!=0) std::cout << a[n/2];
		std::cout << std::endl;
	}
}
