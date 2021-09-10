#include<iostream>
#include<climits>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n, m;
		std::cin >>n>>m;
		long long a[n+5], b[n+5];
		long long max =	LLONG_MIN, min = LLONG_MAX;
		for(int i=0; i<n; i++){
			std::cin >> a[i];
			if(a[i]>max) max=a[i];
		}
		for(int i=0; i<m; i++){
			std::cin >> b[i];
			if(b[i]<min) min=b[i];
		}
		std::cout << min*max <<std::endl;
	}
	return 0;
}
