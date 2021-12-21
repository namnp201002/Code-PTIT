#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+5][n+5];
	vector<int> v;
	for(int i = 0; i< n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			v.push_back(a[i][j]);
		}
	}
	sort(v.begin(), v.end());
	int k = 0, l = 0;
	int socot = n, sohang = n;
	int count = 0;
	while(count < n*n){
		for(int i = k; i < socot; i++){
			a[k][i] = v[count++];
		}

		for(int i = k + 1; i < sohang; i++){
			a[i][sohang-1] = v[count++];
		}

		for(int i = socot - 2; i >= l; i--){
			a[socot-1][i] = v[count++];
		}

		for(int i = sohang - 2; i > k; i--){
			a[i][k] = v[count++];
		}
		k++; l++;
		sohang--; socot--;
	}
	for(int i = 0; i< n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}cout << endl;
	}
	return 0;
}
