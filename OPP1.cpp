#include <bits/stdc++.h>    
using namespace std;

class hang
{
protected:
    int maHang;
    char tenHang[20];
    long long gia;
public:
    void setMaHang(int maHang){
        this->maHang = maHang;
    }
    int getMaHang(){
        return maHang;
    }
    void setTenHang(char tenHang[]){
        strcpy(this->tenHang, tenHang);
    }
    char *getTenHang(){
        return tenHang;
    }
    long long getGia(){
        return gia;
    }
    void setGia(long long gia){
        this->gia = gia;
    }
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

class bangGia{
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
            if (dsHang[i].getMaHang() == maHang){
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
    long long getThanhTien(){
        return thanhTien;
    }
    void setThanhTien(long long thanhTien){
        this->thanhTien = thanhTien;
    }
    void setSoLuongDat(int soLuongDat){
        this->soLuongDat = soLuongDat;
    }
    int getSoLuongDat(){
        return soLuongDat;
    }
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

class gioHang{
private:
    char tenKH[20];
    vector<hangDat> dsHangDat;
    long long tongTien = 0;

public:
    gioHang() {}
    gioHang(char *tenKH){
        strcpy(this->tenKH, tenKH);
    }
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
        ofstream out("Test.txt");
        out << tenKH << endl;
        out << tongTien << endl;
        int count = 0; // vi luc ghi tep co chua ki tu cuoi cung la \n nen phai tao bien count
        for (int i = 0; i < dsHangDat.size(); i++){
            ++count;
            out << dsHangDat[i].getMaHang() << endl;
            out << dsHangDat[i].getTenHang() << endl;
            out << dsHangDat[i].getSoLuongDat() << endl;
            out << dsHangDat[i].getGia() << endl;
            out << dsHangDat[i].getThanhTien();
            if(count != dsHangDat.size()){
                out << endl;
            }
        }
        out.close();

    }
    void docTep(){
        ifstream in("Test.txt");
        char tenKH[20];
        in.getline(tenKH, 20);
        strcpy(this->tenKH, tenKH);
        long long tongTien;
        in >> tongTien;
        this->tongTien = tongTien;
        while(1){
            if(in.eof())    break;
            hangDat hd;
            int maHang;
            in >> maHang;
            hd.setMaHang(maHang);
            char tenHang[20];
            in.ignore();
            in.getline(tenHang, 20);
            hd.setTenHang(tenHang);
            int soLuongDat;
            in >> soLuongDat;
            hd.setSoLuongDat(soLuongDat);
            long long gia;
            in >> gia;
            hd.setGia(gia);
            long long thanhTien;
            in >> thanhTien;
            hd.setThanhTien(thanhTien);
            dsHangDat.push_back(hd);
        }
        in.close();

    }
};
main(){
    bangGia a; a.nhapbp(); a.xemmh();
    hangDat b, c; b.nhapbp(a); c.nhapbp(a); // b.xemmh();
    char kh[30]; fflush(stdin); cout << "\nKhach Hang: "; cin.getline(kh, 30); fflush(stdin);
    gioHang d(kh); d.themHangDat(b); d.themHangDat(c); // d.xemmh(); 
    d.ghiTep();
    gioHang e; e.docTep(); e.xemmh();
}