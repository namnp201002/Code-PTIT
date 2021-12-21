#include<bits/stdc++.h>
using namespace std;
bool CheckSort(string A, string B){
	string AB = A.append(B);
	string BA = B.append(A);
	return AB.compare(BA) > 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		vector<string> v;
		for(int i=0; i<n; i++){
			cin >> a[i];
			string s = to_string(a[i]);
			v.push_back(s);
		}
		sort(v.begin(), v.end(), CheckSort);
		for(int i = 0; i <v.size(); i++){
			cout << v[i];
		}
		cout << endl;
	}
	return 0;
}
