#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n, d;
		std::cin >> n >> d;
		int a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		for(int i=d; i<n; i++){
			std::cout << a[i] << " ";
		}
		for(int i=0; i<d; i++){
			std::cout << a[i] << " ";
		}
		std::cout<<std::endl;
	}
	return 0;
}
