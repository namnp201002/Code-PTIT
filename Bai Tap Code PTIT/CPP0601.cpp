#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string MaSinhVien = "B20DCCN001";
		string HoTen;
		string Lop;
		char NgaySinh[20];
		SinhVien();
		void nhap(SinhVien &a){
			cin >> a.MaSinhVien;
		}
		void in (SinhVien &a){
			cout << a.MaSinhVien;
		}
};

int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
