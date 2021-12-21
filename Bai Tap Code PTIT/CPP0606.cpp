#include<iostream>
#include<stdlib.h>
#include<string.h>
#define a() a;
using namespace std;
class NhanVien{
	string Ma_Nhan_Vien = "00001";
	char Ten[40];
	char Gioi_Tinh[5];
	char Ngay_Sinh[15];
	string Dia_Chi;
	char Ma_So[11];
	char Ngay_Ky[15];
	friend istream& operator >> (istream& input, NhanVien& nv){
		input.getline(nv.Ten, sizeof(nv.Ten));
		input >> nv.Gioi_Tinh;
		input >> nv.Ngay_Sinh;
		input.ignore();
		getline(input, nv.Dia_Chi);
		input >> nv.Ma_So;
		input >> nv.Ngay_Ky;
		return input;
	}
	friend ostream& operator << (ostream& output, NhanVien& nv){
		output << nv.Ma_Nhan_Vien << " " << nv.Ten << " " << nv.Gioi_Tinh << " ";
		output << nv.Ngay_Sinh << " ";
		output << nv.Dia_Chi << " " << nv.Ma_So << " " << nv.Ngay_Ky;
		return output;
	}
};
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
