#include<iostream>
int main(){
	int n, m, p;
	std::cin >> n >> m >> p;
	int a[n+1][m+1], b[m+1][p+1];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			std::cin >>a[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			std::cin >>b[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			int tich = 0;
			for(int k=0; k<m; k++){
				tich += a[i][k]*b[k][j];
			}
			std::cout << tich << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
