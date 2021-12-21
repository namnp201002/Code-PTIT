#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5];
		long long h = 1;
		long long m = 1e9 + 7;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int UCLN = a[0];
		for(int i = 0; i < n; i++){
			h *= a[i];
			if(h > m) h%=m;
			UCLN = __gcd(UCLN, a[i]);
		}
		for(int i = 1; i < UCLN; i++){
			h *=h;
			if(h>m) h%=m;
		}
		cout << h << endl;
	}
}
