#include<bits/stdc++.h>
using namespace std;

long long chia_du(string a, long long M){
	int so_du = 0;
	for(int i = 0; i < a.length(); i++){
		so_du = so_du*10 + a[i] - '0';
		so_du%=M;
	}
	return so_du;
}
long long result(long long so_du, long long b, long long M){
	if(b == 1) return so_du;
	if(b % 2 == 0) return (result(so_du, b/2, M)*result(so_du, b/2, M))%M;
	else return (((result(so_du, b/2, M)*result(so_du, b/2, M))%M)*so_du)%M;
}
main(){
	int t;
	cin >> t;
	while(t--){
		string a; cin >> a;
		long long b, M;
		cin >> b >> M;
		long long so_du = chia_du(a, M);
		cout << result(so_du, b, M) << endl;
	}
}