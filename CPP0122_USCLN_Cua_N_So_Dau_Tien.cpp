#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a=1;
		for(long long i=1; i<=n; i++){
			long long c = __gcd(a,i);
			a = a*(i/c);
		}
		cout << a << endl;
	}
	return 0;
}
