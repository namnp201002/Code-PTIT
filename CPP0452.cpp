#include <bits/stdc++.h>
using namespace std;

void findCommon(long long ar1[], long long ar2[], long long ar3[], int n1, int n2, int n3){
	int i = 0, j = 0, k = 0;
	int check = 0;
	while (i < n1 && j < n2 && k < n3){
		if (ar1[i] == ar2[j] && ar2[j] == ar3[k]){
			cout << ar1[i] << " "; i++; j++; k++; check++;
		}else if (ar1[i] < ar2[j])
			i++;
		else if (ar2[j] < ar3[k])
			j++;
		else
			k++;
	}
	if(check == 0) cout << "-1";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n, k;
		cin >> m >> n >> k;
		long long a[m+5], b[n+5], c[k+5];
		for(int i = 0; i < m; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			cin >> b[i];
		}
		for(int i = 0; i < k; i++){
			cin >> c[i];
		}
		findCommon(a, b, c, m, n, k);
		cout << endl;
	}
	return 0;
}

