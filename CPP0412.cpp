#include<iostream>
#include<algorithm>
int main(){
	int t;
	std::cin >>t ;
	while(t--){
		int n;
		std::cin >> n;
		int a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		std::sort(a, a+n);
		for(int i=0; i<n; i++){
			std::cout << a[i] <<" ";
		}
		std::cout<<std::endl;
	}
	return 0;
}
