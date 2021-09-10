#include<iostream>
#include<climits>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int a[n+5];
		for(int i= 0 ; i < n; i++){
			std::cin >> a[i];
		}
		// -2, -3, 4, -1, -2, 1, 5, -3
		long Max = LONG_MIN;
		long sum = 0;
		for(int i=0; i<n; i++){
			sum += a[i];
			if(Max < sum){
				Max = sum;
			}
			if(sum < 0) sum = 0;
		}
		std::cout << Max << std::endl;
	}
	return 0;
}
