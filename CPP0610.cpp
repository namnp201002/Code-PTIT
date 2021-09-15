#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
class PhanSo {
public:
    unsigned long long int tu, mau;
    PhanSo() {
        tu = mau = 0;
    };
    ~PhanSo() {
        tu = mau = 0;
    };
    PhanSo(int tu, int mau) {
        this->tu = tu;
        this->mau = mau;
    }
    friend istream& operator>>(istream& is, PhanSo& obj)
    {
        is >> obj.tu;
        is >> obj.mau;
        return is;
    }
    friend ostream& operator<<(ostream& os, PhanSo obj)
    {
        os << obj.tu << "/" << obj.mau << endl;
        return os;
    }
    unsigned long long int	UCLN(unsigned long long int a, unsigned long long int b) {
        if (a == 0) return b;
        if (a < b) {
            return UCLN(b % a, a);
        }
        if (a > b) {
            return UCLN(a % b, b);
        }
        return b;
    }
    PhanSo operator + (PhanSo p) {
        PhanSo q;
        q.tu = this->tu * p.mau + this->mau * p.tu;
        q.mau = this->mau * p.mau;
        unsigned long long int uoc = UCLN(q.tu, q.mau);
        q.tu /= uoc;
        q.mau /= uoc;
        return q;
    }

};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
