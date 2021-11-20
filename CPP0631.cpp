#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class KH{
public:
	string maKhachHang;
	string tenKhachHang;
	char gioiTinh[5];
	char ngaySinh[15];
	string diaChi;
};
vector<KH> dsKhachHang;
class KhachHang{
private:
	string tenKhachHang;
	char gioiTinh[5];
	char ngaySinh[15];
	string diaChi;
public:
	friend class HoaDon;
	friend istream& operator >> (istream& in, KhachHang& KHang){
		static int x = 0;
		x++;
		scanf("\n");
		getline(in, KHang.tenKhachHang);
		in >> KHang.gioiTinh;
		in >> KHang.ngaySinh;
		scanf("\n");
		getline(in, KHang.diaChi);
		string s = "";
		if(x < 10){
			s = "KH00" + to_string(x);
		}else{
			s = "KH0" + to_string(x);
		}
		KH A;
		A.maKhachHang = s;
		A.tenKhachHang = KHang.tenKhachHang;
		strcpy(A.gioiTinh, KHang.gioiTinh);
		strcpy(A.ngaySinh, KHang.ngaySinh);
		A.diaChi = KHang.diaChi;
		dsKhachHang.push_back(A);
		return in;
	}
};
class MH{
public:
	string maMatHang;
	string tenMatHang;
	string donViTinh;
	long giaMua;
	long giaBan;
};
vector<MH> dsMatHang;
class MatHang{
private:
	string tenMatHang;
	string donViTinh;
	long giaMua;
	long giaBan;
public:
	friend class HoaDon;
	friend istream& operator >> (istream& in, MatHang& MatHang){
		static int y = 0;
		++y;
		scanf("\n");
		getline(in, MatHang.tenMatHang);
		getline(in, MatHang.donViTinh);
		in >> MatHang.giaMua >> MatHang.giaBan;
		MH A;
		if(y < 10){
			A.maMatHang = "MH00" + to_string(y);
		}else{
			A.maMatHang = "MH0" + to_string(y);
		}
		A.tenMatHang = MatHang.tenMatHang;
		A.donViTinh = MatHang.donViTinh;
		A.giaMua = MatHang.giaMua;
		A.giaBan = MatHang.giaBan;
		dsMatHang.push_back(A);
		return in;
	}	
};
class HoaDon: public KH, public MH{
private:
	string maKH;
	string maMH;
	int soLuong;
public:
	friend istream& operator >> (istream& in, HoaDon& HD){
		in >> HD.maKH >> HD.maMH >> HD.soLuong;
		for(int i = 0; i < dsKhachHang.size(); i++){
			if(dsKhachHang[i].maKhachHang.compare(HD.maKH)==0){
				HD.tenKhachHang = dsKhachHang[i].tenKhachHang;
				strcpy(HD.gioiTinh, dsKhachHang[i].gioiTinh);
				strcpy(HD.ngaySinh, dsKhachHang[i].ngaySinh);
				HD.diaChi = dsKhachHang[i].diaChi;
			}
		}
		for(int i = 0; i < dsMatHang.size(); i++){
			if(dsMatHang[i].maMatHang.compare(HD.maMH)==0){
				HD.tenMatHang = dsMatHang[i].tenMatHang;
				HD.donViTinh = dsMatHang[i].donViTinh;
				HD.giaMua = dsMatHang[i].giaMua;
				HD.giaBan = dsMatHang[i].giaBan;
			}
		}
		return in;
	}

	friend ostream& operator << (ostream& out, HoaDon& HD){
		static int maMHang = 1;
		if(maMHang < 10){
			out << "HD00" << maMHang << " ";
		}else if (maMHang < 100){
			out << "HD0" << maMHang << " ";
		}else out << "HD" << maMHang << " ";
		out << HD.tenKhachHang << " " << HD.diaChi << " " << HD.tenMatHang << " " << HD.donViTinh << " " << HD.giaMua << " " << HD.giaBan << " " << HD.soLuong << " " << HD.soLuong*HD.giaBan << endl;
		maMHang++;
		return out;
	}
};
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
