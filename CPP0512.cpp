#include<iostream>
#include<algorithm>
using namespace std;
struct PhanSo{
	long long tu, mau;
};
void process(PhanSo &A, PhanSo &B){
	PhanSo C, C1, C2;
	C1.tu = A.tu*B.mau + B.tu*A.mau;
	C1.mau = A.mau*B.mau;
	long long UCLN = __gcd(C1.tu, C1.mau);
	C1.tu/= UCLN;
	C1.mau/=UCLN;
	C2.tu = C1.tu*C1.tu;
	C2.mau = C1.mau*C1.mau;
	UCLN = __gcd(C2.tu, C2.mau);
	C.tu= C2.tu/UCLN;
	C.mau= C2.mau/UCLN;
 if(C.mau<0){
		cout << C.tu*(-1) << "/" << C.mau*(-1) << " ";
	}else cout << C.tu << "/" << C.mau << " ";
	PhanSo D, D1;
	D1.tu = A.tu*B.tu*C.tu;
	D1.mau = A.mau*B.mau*C.mau;
	UCLN = (__gcd(D1.tu, D1.mau));
	D.tu = D1.tu/UCLN;
	D.mau = D1.mau/UCLN;
 if(D.mau<0){
		cout << D.tu*(-1) << "/" << D.mau*(-1) << endl;
	}else cout << D.tu << "/" << D.mau << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
