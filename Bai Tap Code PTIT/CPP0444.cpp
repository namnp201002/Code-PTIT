#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long n, x;
		std::cin >> n >> x;
		long a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		for(int i=0; i<n; i++){
			if(a[i]==x) {
				std::cout << i+1 <<std::endl;
				break;
			}
		}
	}
	return 0;
}
