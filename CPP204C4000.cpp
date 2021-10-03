#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
struct SinhVien
{
    string Name;
    string Lop;
    string NgaySinh;
    float GPA;
};
void nhapThongTinSV(SinhVien &sv)
{
    getline(cin, sv.Name);
    cin >> sv.Lop;
    cin >> sv.NgaySinh;
    cin >> sv.GPA;
    if (sv.NgaySinh[2] != '/')
        sv.NgaySinh.insert(0, "0");
    if (sv.NgaySinh[5] != '/')
        sv.NgaySinh.insert(3, "0");
}
void inThongTinSV(SinhVien &sv)
{
    cout << "N20DCCN001 " << sv.Name << " " << sv.Lop << " ";
    cout << sv.NgaySinh << " ";
    cout << fixed << setprecision(2) << sv.GPA;
}
int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
