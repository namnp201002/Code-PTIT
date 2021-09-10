#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5][n+5];
		map<int,int> m;
		map<int,int>::iterator it;
		map<int,int> result;
		for(int i=0; i<n; i++){
			for(int j= 0; j<n; j++){
				cin >> a[i][j];
			}
		}
		if(n==1) cout << "1\n";
		else{
			for(int j=0; j<n; j++){
				m[a[0][j]]=1;
			}
			for(int i=1; i<n; i++){
				for(int j=0; j<n; j++){
					if(m.find(a[i][j])!=m.end()){
						m[a[i][j]]++;
					}
				}
				result.clear();
				for(it = m.begin(); it != m.end(); it++){
					if(it->second == 1) continue;
					result[it->first] = it->second;
				}
				m.clear();
				for(it = result.begin(); it != result.end(); it++){
					m[it->first] = it->second;
				}
				for(it = m.begin(); it != m.end(); it++){
					it->second = 1;
				}
			}
			cout << result.size() << endl;
		}
	}
	return 0;
}
