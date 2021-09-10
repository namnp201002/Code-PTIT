#include<iostream>
#include<algorithm>
#include<climits>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		long a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		std::sort(a, a+n);
		long min = LONG_MAX;
		for(int i=n-1; i>0; i--){
			if(a[i] - a[i-1] < min) min = a[i]-a[i-1];
		}
		std::cout << min <<std::endl;
	}
	return 0;
}
