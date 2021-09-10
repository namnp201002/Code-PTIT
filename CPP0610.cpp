#include<iostream>
#include<algorithm>
using namespace std;
class PhanSo{
	public:
		long Tu;
		long Mau;
		PhanSo(long Tu, long Mau){
			this->Tu = Tu;
			this->Mau = Mau;
		}
		PhanSo(int r=0, int i=0) {Tu=r;   Mau=i;}
		void RutGon(){
			long UCLN = __gcd(Tu, Mau);
			Tu/=UCLN;
			Mau/=UCLN;
		}
		friend PhanSo operator+(PhanSo p,PhanSo q);
		friend istream& operator >> (istream& input, PhanSo& p);
		friend ostream& operator << (ostream& output, PhanSo& p );
};
istream& operator >> (istream& input, PhanSo& p){
	input >> p.Tu >> p.Mau;
	return input;
}
PhanSo operator+(PhanSo p,PhanSo q){
	PhanSo temp;
	temp.Tu=p.Tu*q.Mau+q.Tu*p.Mau;
	temp.Mau=q.Mau*p.Mau;
	temp.RutGon();
	return temp;
}
ostream& operator << (ostream& output, PhanSo& p){
	output << p.Tu << "/" << p.Mau;
	return output;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	PhanSo Tong = p+q;
	cout << Tong;
	return 0;
}
