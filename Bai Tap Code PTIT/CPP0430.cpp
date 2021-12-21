#include<iostream>
#include<climits>
#include<algorithm>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int a[n+5];
		int max=INT_MIN, min = INT_MAX;
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		std::sort(a, a+n);
		int count = 1;
		for(int i=0; i<n-1; i++){
			if(a[i]!=a[i+1]) count ++;
		}
		
		std::cout <<a[n-1]-a[0] + 1 - count <<std::endl;
	}
	return 0;
}
