#include<iostream>
#include<algorithm>
struct PhanSo{
	long long Tu, Mau;
};
void nhap(struct PhanSo &p){
	std::cin >> p.Tu;
	std::cin >> p.Mau;
}
void RutGon(struct PhanSo &p){
	long long UCLN = std::__gcd(p.Tu, p.Mau);
	p.Tu/=UCLN;
	p.Mau/=UCLN;
}
void in(struct PhanSo &p){
	std::cout << p.Tu << "/" << p.Mau <<std::endl;
}
int main(){
	struct PhanSo p;
	nhap(p);
	RutGon(p);
	in(p);
	return 0;
}
