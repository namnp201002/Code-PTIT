#include<iostream>
#include<algorithm>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int m, n;
		std::cin >> m >> n;
		int a[m+5][n+5];
		int b[m*n+5];
		int k=0;
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				std::cin >> a[i][j];
				b[k++] = a[i][j];
			}
		}
		std::sort(b, b+k);
		for(int i=0; i<k; i++){
			std::cout << b[i] << " ";
		}
		std::cout << std::endl;
	}
}
