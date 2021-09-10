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
			for(int j=0; j<n; j++){
				if(i==0 || j==0 || i==n-1 || j==n-1){
					std::cout << a[i][j] << " ";
				}else std::cout << "  ";
			}
			std::cout << std::endl;
		}
		
	}
}
