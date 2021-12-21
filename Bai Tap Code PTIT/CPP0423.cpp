#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long n, k;
		cin >> n >> k;
		long a[n+5];
		int count = 0;
		for(long i = 0; i < n; i++){
			cin >> a[i];
			if(a[i]<=k) count ++;
		}
		int x = 0;
		for(int i = 0; i < count ; i++){
			if(a[i]>k) x++;
		}
		int result = x;
		int j = count, i = 0;
		while(j < n){
			if(a[i] > k) x--;
			if(a[j] > k) x++;
			result = min(x, result);
			i++; j++;
		}
		cout << result << endl;
	}
	return 0;
}
