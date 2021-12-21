#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
struct SinhVien{
	string MSV;
	string Name;
	string Lop;
	string Email;
};
bool Compare(const SinhVien &a, const SinhVien &b){
	if(a.Lop.compare(b.Lop) < 0) return true;
	if(a.Lop.compare(b.Lop) == 0 && a.MSV.compare(b.MSV) < 0) return true;
	return false;
}
int main(){
	int n;
	cin >> n;
	SinhVien arr[n+1];
	for(int i = 0; i < n; i++){
		cin >> arr[i].MSV;
		scanf("\n");
		getline(cin, arr[i].Name);
		cin >> arr[i].Lop;
		cin >> arr[i].Email;
	}
	sort(arr, arr + n, Compare);
	for(int i = 0; i < n; i++){
		cout << arr[i].MSV << " " << arr[i].Name << " ";
		cout << arr[i].Lop << " " << arr[i].Email << endl;
	}
	return 0;
}
