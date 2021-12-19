#include<bits/stdc++.h>
using namespace std;
int x=1, v=1;
string h[100];
class TheLoai {
	public:
		string ten;
		friend istream & operator >>(istream &os, TheLoai &a) {
			getline(cin, a.ten);
			h[v++]=a.ten;
			return os;
		}
};
class Phim {
	public:
		string ma_phim;
		string ma_tl;
		string ten;
		string ngay;
		string so_tap;
		friend istream & operator >>(istream &os, Phim &a) {
			a.ma_phim="P";
			a.ma_phim+=x/100+'0';
			a.ma_phim+=(x%100)/10+'0';
			a.ma_phim+=x%10+'0';
			cin >> a.ma_tl;
			cin >> a.ngay;
			cin.ignore();
			getline(cin, a.ten);
			cin >> a.so_tap;
			x++;
			return os;
		}
		friend ostream & operator <<(ostream &os, Phim a) {
			int i=0;
			i+=a.ma_tl[4]-'0';
			i+=(a.ma_tl[3]-'0')*10;
			i+=(a.ma_tl[2]-'0')*100;
			cout << a.ma_phim <<" "<< h[i] <<" "<< a.ngay <<" "<< a.ten <<" "<< a.so_tap<<endl;
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

bool cmp(Phim a, Phim b) {
	if(a.ngay!=b.ngay) {
		return ngay(a.ngay, b.ngay);
	} else {
		if(a.ten!=b.ten) {
			return a.ten<b.ten;
		} else {
			return a.so_tap<b.so_tap;
		}
	}
}

void process(TheLoai tl[], int n, Phim p[], int m) {
	sort(p, p+m, cmp);
}

int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	TheLoai tl[100];
	Phim p[1000];
	for (int i = 0; i < n; i++) {
		cin >> tl[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	process(tl, n, p, m);
	for (int i = 0; i < m; i++) {
		cout << p[i];
	}
}
/*
2 3
Hai huoc
Tinh cam
TL001
25/11/2021
Phim so 1
10
TL001
04/12/2021
Phim so 2
15
TL002
25/11/2021
Phim so 3
5
*/
