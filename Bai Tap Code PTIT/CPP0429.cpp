#include<bits/stdc++.h>
using namespace std;

int main(){
	int N, K, B;
	cin >> N >> K >> B;
	int a[B+5];
	map<int, int> m;
	for(int i = 1; i <= N; i++){
		m[i]++;
	}
	for(int i = 0; i < B; i++){
		cin >> a[i];
		m[a[i]]++;
	}
	vector<int> v;
	for(map<int,int>::iterator i = m.begin(); i != m.end(); i++){
		int count = 0;
		for(map<int, int>::iterator j = i; j != m.end(); j++){
			if(j->first != 1) count++;
		}
		v.push_back(count);
	}
	cout << *min_element(v.begin(), v.end());
	return 0;
}
