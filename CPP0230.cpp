#include<iostream>
int main(){
	int n;
	std::cin >> n;
	int a[n][3];
	int dem=0;
	for(int i=0; i< n; i++){
		int count = 0;
		for(int j=0; j<3; j++){
			std::cin >> a[i][j];
			if(a[i][j]==1) count++;
		}
		if(count>=2) dem++;
	}
	std::cout << dem;
	return 0;
}
