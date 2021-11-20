#include <iostream>
#include <vector>
#include <string.h>
#include <fstream>
#include <iomanip>
using namespace std;
class hang
{
protected:
    long ma, gia;
    char ten[20];

public:
    friend class hoadon;
    friend class banggia;
    friend class hangban;
    void nhap()
    {
        cout << "Nhap Ma: ";
        cin >> ma;
        cout << "Nhap Ten: ";
        cin.ignore();
        cin.getline(ten, 20);
        cout << "Nhap Gia: ";
        cin >> gia;
    }
    void xem()
    {
        cout << "\n";
        cout << "   ";
        cout << setiosflags(ios::left) << setw(10) << ma;
        cout << setiosflags(ios::left) << setw(10) << ten;
        cout << setiosflags(ios::left) << setw(10) << gia;
    }
};
class banggia
{
private:
    vector<hang> dshang;
public:
    friend class hoadon;
    void nhap()
    {
        int ts;
        hang x;
        cout << "Nhap TS hang:";
        cin >> ts;
        for (int i = 0; i < ts; ++i)
        {
            x.nhap();
            dshang.push_back(x);
        }
    }
    void xem()
    {
        cout << endl;
        cout << "   ";
        cout << setiosflags(ios::left) << setw(10) << "Ma";
        cout << setiosflags(ios::left) << setw(10) << "Ten";
        cout << setiosflags(ios::left) << setw(10) << "Gia";
        for (int i = 0; i < dshang.size(); ++i)
            dshang[i].xem();
    }
    hang timkiem(long m)
    {
        for (int i = 0; i < dshang.size(); ++i)
            if (dshang[i].ma == m)
                return dshang[i];
        hang x;
        x.ma = 0;
        return x;
    }
};
class hangban : public hang
{
private:
    long soluong, thanhtien;
public:
    friend class hoadon;
    void xem()
    {
        hang::xem();
        cout << setiosflags(ios::left) << setw(10) << soluong;
        cout << setiosflags(ios::left) << setw(10) << thanhtien << endl;
    }
};
class hoadon{
private:
    int sohoadon;
    string khach_hang;
    vector<hangban> dshangban;
    long tongtien = 0;
public:
    void nhapbp(banggia a){
        cout << "\nSo HD: ";
        cin >> sohoadon;
        cout << "\nKhach hang: ";  
        cin.ignore();
        getline(cin, khach_hang);
        int ts;
        cout << "Nhap TS: ";
        cin >> ts;
        for(int i = 0; i < ts; ++i){
            int ma;
            cin >> ma;
            long sl;
            cin >> sl;
            hangban y;
            y.soluong = sl;
            y.thanhtien = sl * a.timkiem(ma).gia;
            y.ma = a.timkiem(ma).ma;
            strcpy(y.ten, a.timkiem(ma).ten);
            y.gia = a.timkiem(ma).gia;
            dshangban.push_back(y);
            tongtien += y.thanhtien;
        }
    }
    void xemmh(){
        cout << "\nSo HD: " << sohoadon << endl;
        cout << "Khach hang: " << khach_hang << endl;
        cout << "   ";
        cout << setiosflags(ios::left) << setw(10) << "Ma";
        cout << setiosflags(ios::left) << setw(10) << "Ten";
        cout << setiosflags(ios::left) << setw(10) << "Gia";
        cout << setiosflags(ios::left) << setw(10) << "So luong";
        cout << setiosflags(ios::left) << setw(10) << "Thanh tien";
        for(int i = 0; i < dshangban.size(); ++i){
            dshangban[i].xem();
        }
        cout << "\n   ";
        cout << setiosflags(ios::left) << setw(40) << "Tong tien:" ;
        cout << tongtien << endl;
    }

};
main()
{
    banggia a; a.nhap(); a.xem();
    hoadon b; b.nhapbp(a); b.xemmh();
}
