#include<iostream>
#include<algorithm>
using namespace std;
class PhanSo{
	public:
		long long Tu;
		long long Mau;
		PhanSo(long long Tu, long long Mau){
			this->Tu = Tu;
			this->Mau = Mau;
		}
		friend istream& operator >> (istream& input, PhanSo& p);
		friend ostream& operator << (ostream& output, PhanSo& p);
		void rutgon(){
			long long UCLN = __gcd(Tu, Mau);
			Tu/=UCLN;
			Mau/=UCLN;
		}
};
istream& operator >> (istream& input, PhanSo& p){
	input >> p.Tu >> p.Mau;
	return input;
}
ostream& operator << (ostream& output, PhanSo& p){
	output << p.Tu << "/" << p.Mau;
	return output;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
