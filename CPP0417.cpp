#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 5], b[n + 5];
		int count = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[count++] = a[i];
		}
		sort(a, a + n);
		int index1, index2;
		for(int i = 0; i < n; i++){
			if(a[i]!=b[i]){
				index1 = i + 1;
				break;
			}
		}
		for(int i = n - 1; i >= 0; i--){
			if(a[i] != b[i]){
				index2 = i + 1;
				break;
			}
		}
		cout << index1 << " " << index2 << endl;
	}
	return 0;
}
