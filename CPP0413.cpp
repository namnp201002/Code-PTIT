#include<iostream>
#include<algorithm>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int a[n+5];
		for(int i=0; i<n ;i++){
			std::cin >> a[i];
		}
		std::sort(a, a+n);
		if(n%2!=0){
			for(int i=0; i<n/2; i++){
				std::cout << a[n-1-i] << " " << a[i] << " ";
			}
			std::cout<<a[(n/2)];
		}else{
			for(int i=0; i<n/2; i++){
				std::cout << a[n-1-i] << " " << a[i] << " ";
			}
		}
		
		std::cout<<std::endl;
		// 1 2 3 4 5 6 7 -- 7 1 6 2 5 3 4
	}
}
