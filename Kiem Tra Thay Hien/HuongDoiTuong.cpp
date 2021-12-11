#include <bits/stdc++.h>    
using namespace std;

class hang
{
protected:
    int maHang;
    char tenHang[20];
    long long gia;
public:
    void setMaHang(int maHang) {this->maHang = maHang;}
    int getMaHang(){return maHang;}

    void setTenHang(char tenHang[]){strcpy(this->tenHang, tenHang);}
    char *getTenHang(){return tenHang;}

    long long getGia(){return gia;}
    void setGia(long long gia){this->gia = gia;}

    void nhap(){
        cout << "Nhap ma hang: ";
        cin >> maHang;
        cout << "Nhap ten hang: ";
        cin.ignore();
        cin.getline(tenHang, 20);
        cout << "Nhap gia: ";
        cin >> gia;
    }
    void xem(){
        cout << maHang << " " << tenHang << " " << gia;
    }
};

class bangGia
{
private:
    vector<hang> dsHang;
public:
    void nhapbp(){
        int n;
        cout << "Nhap Tong So: ";
        cin >> n;
        for (int i = 0; i < n; i++){
            hang h;
            h.nhap();
            dsHang.push_back(h);
        }
    }
    hang timHang(int maHang){
        hang x;
        for (int i = 0; i < dsHang.size(); i++){
            if (dsHang[i].getMaHang() == maHang)
            {
                return dsHang[i];
            }
        }
        x.setMaHang(0);
        return x;
    }
    void xemmh(){
        for (int i = 0; i < dsHang.size(); i++){
            dsHang[i].xem();
            cout << endl;
        }
    }
};

class hangDat : public hang{
private:
    int soLuongDat;
    long long thanhTien;
public:
    long long getThanhTien(){return thanhTien;}
    void setThanhTien(long long thanhTien){this->thanhTien = thanhTien;}

    void setSoLuongDat(int soLuongDat){this->soLuongDat = soLuongDat;}
    int getSoLuongDat(){return soLuongDat;}

    void nhapbp(bangGia a){
        cout << "Nhap ma hang: ";
        cin >> maHang;
        hang x = a.timHang(maHang);
        gia = x.getGia();
        strcpy(tenHang, x.getTenHang());
        cout << "Nhap so luong dat: ";
        cin >> soLuongDat;
        thanhTien = gia * soLuongDat;
    }
    void xemmh(){
        hang::xem();
        cout << " " << soLuongDat << " " << thanhTien << endl;
    }
};

class giohang
{
private:
    char tenKH[20];
    vector<hangDat> dsHangDat;
    long long tongTien = 0;

public:
    giohang() {}
    giohang(char *tenKH){strcpy(this->tenKH, tenKH);}
    void xemmh(){
        cout << "Khach hang: " << tenKH << endl;
        cout << "Tong tien: " << tongTien << endl;
        for (int i = 0; i < dsHangDat.size(); i++){
            dsHangDat[i].xemmh();
        }
    }
    void themHangDat(hangDat hd){
        dsHangDat.push_back(hd);
        tongTien += hd.getThanhTien();
    }
    void ghiTep(){
        fstream fout("HoaDon.dat", ios::out | ios::binary);
        fout.write(reinterpret_cast<char *>(&tenKH), sizeof(char) * 20);
        fout.write(reinterpret_cast<char *>(&tongTien), sizeof(long long));
        for (int i = 0; i < dsHangDat.size(); i++){
            fout.write(reinterpret_cast<char *>(&dsHangDat[i]), sizeof(hangDat));  
        }
        fout.close();
    }
    void docTep(){
        fstream fin("HoaDon.dat", ios::in | ios::binary);
        fin.read(reinterpret_cast<char *>(&tenKH), sizeof(char) * 20);
        fin.read(reinterpret_cast<char *>(&tongTien), sizeof(long long));
        while (1){
            if(!fin) break;
            hangDat hd;
            fin.read(reinterpret_cast<char *>(&hd), sizeof(hangDat));
            dsHangDat.push_back(hd);
        }
        dsHangDat.pop_back();
        fin.close();
    }
};

main(){
    bangGia a; a.nhapbp(); a.xemmh();
    hangDat b, c; b.nhapbp(a); c.nhapbp(a);
    // b.xemmh();
    char kh[30]; fflush(stdin);
    cout << "\nKhach Hang: ";
    cin.getline(kh, 30);
    fflush(stdin);
    giohang d(kh); d.themHangDat(b); d.themHangDat(c); // d.xemmh();
    d.ghiTep();
    giohang e; e.docTep(); e.xemmh();
}