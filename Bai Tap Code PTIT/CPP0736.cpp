#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long n, k;
		std::cin >> n >> k;
		long a[n+5];
		for(long i = 0; i<n; i++){
			std::cin >> a[i];
		}
		long end = 0, start = 0;
		long indexMin = n+1;
		long long sum = 0;
		while(end<n){
			while(sum <= k && end <n){
				sum+=a[end++];
			}
			while(start<n && sum>k){
				sum-=a[start];
				if(indexMin > (end-start)) indexMin = end-start;
				start++;
			}
		}
		if(indexMin == n+1) std::cout << "-1\n";
		else std::cout << indexMin << std::endl;
	}
	return 0;
}
