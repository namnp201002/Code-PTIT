#include<bits/stdc++.h>
using namespace std;
struct ThucTap{
	int STT;
	char MSV[15];
	string HoTen, Email;
	char Lop[15];
	string DoanhNghiep;
	void Nhap(){
		scanf("%s", MSV);
		cin.ignore();
		getline(cin, HoTen);
		scanf("%s", Lop);
		cin.ignore();
		getline(cin, Email);
		getline(cin, DoanhNghiep);
	}
	void Xuat(){
		cout << STT << " " << MSV << " " << HoTen << " ";
		cout << Lop << " " << " " << Email << " " << DoanhNghiep << endl;
	}
};
bool checkSort(ThucTap a,ThucTap b){
	return strcmp(a.MSV, b.MSV) < 0;
}
int main(){
	int n;
	cin >> n;
	ThucTap arr[n+5];
	for(int i=0; i<n; i++){
		arr[i].Nhap();
		arr[i].STT = i+1;
	}
	sort(arr, arr+n, checkSort);
	int Q;
	cin >> Q;
	string S;
	cin.ignore();
	for(int i=0; i<Q; i++){
		getline(cin, S);
		vector<ThucTap> DS;
		for(int j=0; j<n; j++){
			if(S.compare(arr[j].DoanhNghiep)==0){
				DS.push_back(arr[j]);
			}
		}
		for(int j=0; j<DS.size(); j++){
			DS[j].Xuat();
		}
		DS.clear();
	}
	return 0;
}

