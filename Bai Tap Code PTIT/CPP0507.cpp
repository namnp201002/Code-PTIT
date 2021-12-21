#include<iostream>
#include<algorithm>
struct PhanSo{
	long long Tu, Mau;
};
void nhap(struct PhanSo &p){
	std::cin >> p.Tu;
	std::cin >> p.Mau;
}
struct PhanSo tong(struct PhanSo &p, struct PhanSo &q){
	struct PhanSo t;
	t.Tu=p.Tu*q.Mau + q.Tu*p.Mau;
	t.Mau=p.Mau*q.Mau;
	long long UCLN = std::__gcd(t.Tu, t.Mau);
	t.Tu/=UCLN;
	t.Mau/=UCLN;
	return t;
}
void in(struct PhanSo &p){
	std::cout << p.Tu << "/" << p.Mau;
}
int main(){
	struct PhanSo p, q;
	nhap(p), nhap(q);
	struct PhanSo t = tong(p,q);
	in(t);
}
