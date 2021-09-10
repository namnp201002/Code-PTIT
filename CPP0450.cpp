#include<iostream>
#include<map>
using std::cin;
using std::cout;
using std::endl;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		std::map<int,int> m;
		int a[n+5];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int mark=0;
		for(int i= 0; i<n; i++){
			m[a[i]]++;
			if(m[a[i]]==2){
				cout << a[i];
				mark=1;
				break;
			}
		}
		if(mark==0) cout << "-1";
		cout << endl;
	}
	return 0;
}
