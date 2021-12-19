#include<bits/stdc++.h>
using namespace std;
int x=1, v;

class MonHoc{
	public:
		string ma_m;
		string ten;
		friend istream & operator >>(istream &os, MonHoc &a) {
			getline(cin, a.ma_m);
			getline(cin, a.ten);
			return os;
		}
		
		
};
MonHoc h[100];
class LichThi{
	public:
		string ma_ct;
		string ma_mh;
		string ngay;
		string gio;
		string nhom;
		friend istream & operator >>(istream &os, LichThi &a) {
			cin >> a.ma_mh>>a.ngay>>a.gio>>a.nhom;
			a.ma_ct="T";
			a.ma_ct+=x/100+'0';
			a.ma_ct+=(x%100)/10+'0';
			a.ma_ct+=x%10+'0';
			x++;
			return os;
		}
		friend ostream & operator <<(ostream &os, LichThi a) {
			string ten;
			for(int i=0; i<v; i++){
				if(h[i].ma_m==a.ma_mh){
					ten=h[i].ten;
					continue;
				}
			}
			cout << a.ma_ct<<" "<<a.ma_mh<<" "<<ten<<" "<<a.ngay<<" "<<a.gio<<" "<<a.nhom<<endl;
			return os;
		}
		
};

bool ngay(string x, string a){
	string k, y="", h, b="";
	a[2]=' ';	a[5]=' ';
	x[2]=' ';	x[5]=' ';
	stringstream s(a);
	stringstream ss(x);
	while(s>>h&&ss>>k){
		reverse(h.begin(), h.end());	b+=h;
		reverse(k.begin(), k.end());	y+=k;
	}
	reverse(b.begin(), b.end());
	reverse(y.begin(), y.end());
	return y < b;
}

bool cmp(LichThi a, LichThi b){
	if(a.ngay!=b.ngay){
		return ngay(a.ngay, b.ngay);
	}else{
		if(a.gio!=b.gio){
			return a.gio<b.gio;
		}else{
			return a.ma_mh<b.ma_mh;
		}
	}
}

void process(MonHoc mh[], int n, LichThi lt[], int m){
	for(int i=0; i<n; i++){
		h[i]=mh[i];
	}
	v=n;
	sort(lt, lt+m, cmp);
}

int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}
/*
2 10
INT1155
Tin hoc co so 2
INT1339
Ngon ngu lap trinh C++
INT1155 25/11/2021 08:00 01
INT1155 04/12/2021 08:00 02
INT1155 04/12/2021 13:30 03
INT1155 25/11/2021 13:30 04
INT1155 25/11/2021 15:00 05
INT1339 25/11/2021 08:00 01
INT1339 25/11/2021 08:00 02
INT1339 04/12/2021 13:30 03
INT1339 04/12/2021 13:30 04
INT1339 04/12/2021 15:00 05
*/
