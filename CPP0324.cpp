#include<bits/stdc++.h>
using namespace std;

long long aModM(string s, long long mod){
	long long number = 0;
	for (long long i = 0; i < s.length(); i++){
		number = (number*10 + (s[i] - '0'));
		number %= mod;
	}
	return number;
}

long long ApowBmodM(string &a, long long b, long long m){
	long long ans = aModM(a, m);
	long long mul = ans;
	for (long long i=1; i<b; i++)
		ans = (ans*mul) % m;

	return ans;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		long long b, m;
		cin >> b >> m;
		cout << ApowBmodM(a, b, m);
	}
	return 0;
}

