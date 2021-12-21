#include<iostream>
#include<limits>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int a[n+5];
		int max = INT_MIN;
		for(int i=0; i<n; i++){
			std::cin >> a[i];
			if(a[i]>max) max = a[i];
		}
		std::cout << max << std::endl;
		
		
	}
}
