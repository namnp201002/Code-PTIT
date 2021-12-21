#include<iostream>
#include<string.h>
using namespace std;
class NhanVien{
	string Ma_Nhan_Vien;
	string Name;
	string Gioi_Tinh;
	string Ngay_Sinh;
	string Dia_Chi;
	string Ma_So;
	string Ngay_Ky;
	friend istream& operator >> (istream& in, NhanVien& nv);
	friend ostream& operator << (ostream& out, NhanVien& nv);
};
istream& operator >> (istream& in, NhanVien& nv){
	static int stt = 1;
	scanf("\n");
	getline(in, nv.Name);
	getline(in, nv.Gioi_Tinh);
	getline(in, nv.Ngay_Sinh);
	getline(in, nv.Dia_Chi);
	in >> nv.Ma_So;
	in >> nv.Ngay_Ky;
	if(stt < 10){
		nv.Ma_Nhan_Vien = nv.Ma_Nhan_Vien + "0000" + to_string(stt);
	}else nv.Ma_Nhan_Vien = nv.Ma_Nhan_Vien + "000" + to_string(stt);
	stt++;
	return in;
}
ostream& operator << (ostream& out, NhanVien& nv){
	out << nv.Ma_Nhan_Vien << " " << nv.Name << " " << nv.Gioi_Tinh << " ";
	out << nv.Ngay_Sinh << " " << nv.Dia_Chi << " " << nv.Ma_So << " ";
	out << nv.Ngay_Ky << endl;	
	return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
