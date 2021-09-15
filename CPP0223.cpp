#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n;
		cin >> m >> n;
		int a[m+1][n+1];
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		int k = 0, l = 0;
		while(k < m && l < n){
			for(int i = l; i < n; i++){
				cout << a[k][i] << " ";
			}
			k++;
			for(int i = k; i < m; i++){
				cout << a[i][n - 1] << " ";
			}
			n--;
			if(k < m){
				for(int i = n - 1; i >= l; i--){
					cout << a[m - 1][i] << " ";
				}
				m--;
			}
			if(l < n){
				for(int i = m - 1; i >= k; i--){
					cout << a[i][l] << " ";
				}
				l++;
			}
		}
		cout << endl;
	}
}

