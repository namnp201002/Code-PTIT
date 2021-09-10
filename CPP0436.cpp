#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		int b[n+5], count = 0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			b[count++] = a[i];
		}
		sort(b, b+n);
		for(int i=0; i<n; i++){
			int *p = lower_bound(b, b + n, a[i]+1);
			if( p == b+n){
				cout << "_" << " ";
			}else cout << *p << " ";
		}
		cout << endl;
	}
	return 0;
}
