#include<iostream>
#include<algorithm>
// 1 3 4 5 6
// 1 9 16 25 36
int check(long long a[], int n){
	for(int i=n-1; i>=2; i--){
		int l = 0;
		int r = i-1;
		while(l<r){
			if(a[l] + a[r] == a[i]) return 1;
			else if(a[r]+a[l]<a[i]) l++;
			else if(a[r]+a[l]>a[i]) r--;
		}
	}
	return 0;
}
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		long long a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		std::sort(a, a+n);
		for(int i=0; i<n; i++){
			a[i]*=a[i];
		}
		if(check(a, n)) std::cout << "YES\n";
		else std::cout << "NO\n";
		}
}
