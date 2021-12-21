#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int a[n+1][n+1];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				std::cin >> a[i][j];
			}
		}
		for(int i=0; i<n; i++){
			if(i%2==0){
				for(int j=0; j<n; j++){
					std::cout << a[i][j] << " ";
				}
			}else {
				for(int j=n-1; j>=0; j--){
					std::cout << a[i][j] << " ";
				}
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
