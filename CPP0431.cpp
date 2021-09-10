#include<iostream>
#include<algorithm>
int main(){
	int t;
	std::cin >> t;
	while( t-- ){
		int n, k;
		std::cin >> n >> k;
		int a[n+5];
		for(int i = 0; i < n; i++){
			std::cin >> a[i];
		}
		long count = 0;
		std::sort(a, a + n);
		for(int i = 0; i < n-1; i++){
			int temp = a[i] + k;
			int index = std::lower_bound(a, a + n, temp) - a;
			count += (index-i-1);
		}
		std::cout << count << std::endl;
	}
	return 0;
}
