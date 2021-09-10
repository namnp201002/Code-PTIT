#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string Name, Adress;
	char GioiTinh[4];
	char Birth[15];
	char Day[15];
	char Maso[10];
};
void nhap(struct NhanVien &a){
	getline(cin, a.Name);
	scanf("%s", a.GioiTinh);
	scanf("%s", a.Birth);
	cin.ignore();
	getline(cin, a.Adress);
	scanf("%s", a.Maso);
	scanf("%s", a.Day);
}
void in(struct NhanVien &a){
	cout << "00001 " << a.Name << " " << a.GioiTinh << " ";
	cout<< a.Birth <<" " << a.Adress << " ";
	cout << a.Maso << " " << a.Day;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
