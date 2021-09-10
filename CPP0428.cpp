#include<iostream>
#include<algorithm>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n, m;
		std::cin >> n >>m;
		long long a[n+5], b[m+5];
		int k=0;
		long long c[m+n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
			c[k++]=a[i];
		}
		for(int i=0; i<m; i++){
			std::cin >> b[i];
			c[k++]=b[i];
		}
		std::sort(c, c+m+n);
		for(int i=0; i<m+n; i++){
			std::cout << c[i] <<" ";
		}
		std::cout << std::endl;
	}
	return 0;
}
