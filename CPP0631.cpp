#include<iostream>
#include<string.h>
using namespace std;
class KhachHang{
	private:
		char maKhachHang[10];
		string tenKhachHang = "Nguyen Phuong Nam";
		char gioiTinh[5];
		char ngaySinh[15];
		string diaChi;
	public:
		void setTenKhachHang(string name){
			this->tenKhachHang = name;
		}
		string getTenKhachHang(){
			return tenKhachHang;
		}
		friend istream& operator >> (istream& in, KhachHang& KH){
			scanf("\n");
			getline(in, KH.tenKhachHang);
			in >> KH.gioiTinh;
			in >> KH.ngaySinh;
			scanf("\n");
			getline(in, KH.diaChi);
			return in;
		}
		friend class HoaDon;
};
class MatHang{
	private:
		char maMatHang[10];
		string tenMatHang;
		string donViTinh;
		long giaMua;
		long giaBan;
	public:
		friend istream& operator >> (istream& in, MatHang& MH){
			scanf("\n");
			getline(in, MH.tenMatHang);
			getline(in, MH.donViTinh);
			in >> MH.giaMua >> MH.giaBan;
			return in;
		}
		
};
class HoaDon{
	private:
		char maKH[15];
		char maMH[15];
		int soLuong;
	public:
		friend istream& operator >> (istream& in, HoaDon& HD){
			in >> HD.maKH >> HD.maMH >> HD.soLuong;
			return in;
		}
		friend ostream& operator << (ostream& out, HoaDon& HD){
			static int maMH = 1;
			KhachHang A;
			out << maMH <<  " " << HD.tenKH(A) << endl;
			return out;
		}
		string tenKH(KhachHang &KH){
			return KH.tenKhachHang;
		}
};
int main(){
//    KhachHang dskh[25];
//    MatHang dsmh[45];
//    HoaDon dshd[105];
//    int N,M,K,i;
//    cin >> N;
//    for(i=0;i<N;i++) cin >> dskh[i];
//    cin >> M;
//    for(i=0;i<M;i++) cin >> dsmh[i];
//    cin >> K;
//    for(i=0;i<K;i++) cin >> dshd[i];
//    
//    for(i=0;i<K;i++) cout << dshd[i];
	KhachHang dskh[25];
	HoaDon dshd[100];
	dskh[0].setTenKhachHang("Nguyen Van A");
	dskh[1].setTenKhachHang("Nguyen Van B");
	cout<< dshd[0].tenKH(dskh[0]) << endl;
	cout << dshd[1].tenKH(dskh[1]);
    return 0;
}
