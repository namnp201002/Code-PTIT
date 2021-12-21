#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
class NhanVien{
public:
	string Ma_Nhan_Vien;
	string Name;
	string Gioi_Tinh;
	char Ngay_Sinh1[15];
	char Ngay_Sinh2[15];
	string Dia_Chi;
	string Ma_So;
	string Ngay_Ky;
	int Ngay, Thang, Nam;
	friend istream& operator >> (istream& in, NhanVien& nv);
	friend ostream& operator << (ostream& out, NhanVien& nv);
};
istream& operator >> (istream& in, NhanVien& nv){
	static int stt = 1;
	scanf("\n");
	getline(in, nv.Name);
	getline(in, nv.Gioi_Tinh);
	in >> nv.Ngay_Sinh2;
	scanf("\n");
	getline(in, nv.Dia_Chi);
	in >> nv.Ma_So;
	in >> nv.Ngay_Ky;
	if(stt < 10){
		nv.Ma_Nhan_Vien = nv.Ma_Nhan_Vien + "0000" + to_string(stt);
	}else nv.Ma_Nhan_Vien = nv.Ma_Nhan_Vien + "000" + to_string(stt);
	stt++;
	strcpy(nv.Ngay_Sinh1, nv.Ngay_Sinh2);
	char *p = strtok(nv.Ngay_Sinh2, "/");
	int count = 0;
	while(p != NULL){
		if(count == 0) nv.Thang = atoi(p);
		if(count == 1) nv.Ngay = atoi(p);
		if(count == 2) nv.Nam = atoi(p);
		count ++;
		p = strtok(NULL, "/");
	}
	return in;
}
ostream& operator << (ostream& out, NhanVien& nv){
	out << nv.Ma_Nhan_Vien << " " << nv.Name << " " << nv.Gioi_Tinh << " ";
	out << nv.Ngay_Sinh1 << " " << nv.Dia_Chi << " " << nv.Ma_So << " ";
	out << nv.Ngay_Ky << endl;	
	return out;
}
bool compare(NhanVien& a, NhanVien& b){
	if(a.Nam < b.Nam) return true;
	if(a.Nam == b.Nam && a.Thang < b.Thang) return true;
	if(a.Nam == b.Nam && a.Thang == b.Thang && a.Ngay < b.Ngay) return true;
	return false;
}
void sapxep(NhanVien ds[], int &N){
	sort(ds, ds + N, compare);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

