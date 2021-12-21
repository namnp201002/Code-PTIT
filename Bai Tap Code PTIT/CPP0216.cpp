#include<iostream>
using namespace std;
int Mountain(int a[], int L, int R){
	int checkTang = 0;
	for(int i=L; i<R; i++){
		if(a[i] >= a[i+1] ) checkTang ++;
	}
	if(checkTang == 0) return 1;
	int checkGiam = 0;
	for(int i=L; i<R; i++){
		if(a[i] <= a[i+1] ) checkGiam ++;
	}
	if(checkGiam == 0) return 1;
	int vitri;
	int Tang = 0, Giam = 0;
	for(int i=L; i<R; i++){
		if(a[i]<=a[i+1]) {
			Tang ++;
		}else{
			vitri = i;
			break;
		}
	}
	for(int i=vitri; i<R; i++){
		if(a[i]>=a[i+1]){
			Giam++;
		}else break;
	}
	if((Tang + Giam) == (R-L)) return 1;
	else return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int L, R;
		cin >> L >> R;
		if(Mountain(a, L, R)) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
