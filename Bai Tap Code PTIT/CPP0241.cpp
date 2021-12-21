#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while( t-- ){
		int n;
		std::cin >>n ;
		int a[n+5];
		for(int i = 0; i < n; i++) {
			std::cin >> a[i];	
		}
		int l = 0, r = n - 1;
		int count = 0;
		while(l <= r){
			if(a[l] == a[r]){
				l++;
				r--;
			}else if(a[l] > a[r]){
				r--;
				a[r] = a[r] + a[r+1];
				count ++;
			}else{
				l++;
				a[l] = a[l] + a[l-1];
				count ++;
			}	
		}
		std::cout << count << std::endl;
	}
	return 0;
}
