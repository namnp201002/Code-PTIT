#include<iostream>

using namespace std;

int main(){
	long long mod = 1e9 + 7;
	long long dp[1005][1005];
	for(int i = 0; i <= 1000; i++){
		dp[i][0] = 1;
		dp[i][i] = 1;
		for(int j = 1; j < i; j++){
			dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
			dp[i][j] %= mod;
		}
	}
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << dp[n][k] << endl;
	}
	return 0;
}
