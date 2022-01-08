#include<bits/stdc++.h>

using namespace std;

class Thong_tin{
private:
    string ma_hoc_phan, ten_hoc_phan, ngay_bat_dau;
    int so_tin_chi, hoc_phi;
public:
    friend class Phieu_Dang_Ky_Hoc_Phan;
    void NhapTT(int i){
        cout << "Nhap Ma Hoc Phan Thu " << i << " : ";
        cin >> ma_hoc_phan;
        cin.ignore();
        cout << "Nhap Ten Hoc Phan Thu " << i << " : ";
        getline(cin, ten_hoc_phan);
        cout << "Nhap So Tin Chi " << i << " : ";
        cin >> so_tin_chi;
        cout << "Nhap Hoc Phi Mon Thu " << i << " : ";
        cin >> hoc_phi;
        cout << "Nhap Ngay Bat Dau Mon Thu " << i << " : ";
        cin >> ngay_bat_dau;
    }
    void inTT(){
        cout << setiosflags(ios::left) << setw(10) << ma_hoc_phan;
        cout << setiosflags(ios::left) << setw(20) << ten_hoc_phan;
        cout << setiosflags(ios::left) << setw(20) << so_tin_chi;
        cout << setiosflags(ios::left) << setw(20) << hoc_phi;
        cout << setiosflags(ios::left) << setw(20) << ngay_bat_dau;
    }
};
class Phieu_Dang_Ky_Hoc_Phan : public Thong_tin{
private:
    string ma_phieu, ngay_lap, ma_sinh_vien, ho_va_ten, nganh_hoc;
    int khoa_hoc;
    int Tong_so_tin, Tong_hoc_phi;
    vector<Thong_tin> Thong_tin_hoc_phan;
public:
    void Nhap(){
        cout << "Ma Phieu: ";
        cin >> ma_phieu;
        cout << "Ngay Lap: ";
        cin >> ngay_lap;
        cout << "Nhap Ma Sinh Vien: ";
        cin >> ma_sinh_vien;
        cout << "Nhap Ho Ten Sinh Vien: ";
        cin.ignore();
        getline(cin, ho_va_ten);
        cout << "Nganh Hoc: ";
        cin >> nganh_hoc;
        cout << "Khoa Hoc: ";
        cin >> khoa_hoc;
        Tong_so_tin = 0;
        Tong_hoc_phi = 0;
        Thong_tin A;
        for(int i = 0; i < 3; i++){
            A.NhapTT(i+1);
            Tong_so_tin+=A.so_tin_chi;
            Tong_hoc_phi+=A.hoc_phi;
            Thong_tin_hoc_phan.push_back(A);
        }
    }
    void XuatTT(){
        cout << "\nHOC VIEN CONG NGHE BUU CHINH VIEN THONG\n";
        cout << "-------------PHIEU DANG KY HOC PHAN-------------\n";
        cout << "Ma Phieu: "  << ma_phieu << " Ngay Lap: " << ngay_lap << endl;
        cout << "Ma Sinh Vien: " << ma_sinh_vien << "  Ho va ten: " << ho_va_ten 
                << "   Nganh Hoc: " << nganh_hoc <<
                "  Khoa: " << khoa_hoc << endl;
        cout << "Danh sach hoc phan:\n";
        cout << setiosflags(ios::left) << setw(10) << "Ma HP";
        cout << setiosflags(ios::left) << setw(20) << "Ten hoc phan";
        cout << setiosflags(ios::left) << setw(20) << "So tin chi";
        cout << setiosflags(ios::left) << setw(20) << "Hoc phi";
        cout << setiosflags(ios::left) << setw(20) << "Ngay Bat Dau";
        cout << endl;
        for(int i = 0; i < 3; i++){
            Thong_tin_hoc_phan[i].inTT();
            cout << endl;
        }
        cout << setiosflags(ios::left) << setw(10) << " ";
        cout << setiosflags(ios::left) << setw(20) << "Tong So: ";
        cout << setiosflags(ios::left) << setw(20) << Tong_so_tin;
        cout << setiosflags(ios::left) << setw(20) << Tong_hoc_phi; 
    }
    void sua_ho_ten(string Ho_ten_moi){
        ho_va_ten = Ho_ten_moi;
    }
    void SapXep(){
        sort(Thong_tin_hoc_phan.begin(), Thong_tin_hoc_phan.end(), [](const Thong_tin A,const Thong_tin B){
            return A.hoc_phi > B.hoc_phi;
        });
    }
};
int main(){
    Phieu_Dang_Ky_Hoc_Phan Phieu1;
    Phieu1.Nhap();
    Phieu1.XuatTT();
    string Ho_ten_moi;
    cout << "\n----------Sua Ho Ten----------";
    cout << "\nNhap Ho Ten Moi: ";
    cin.ignore();
    getline(cin, Ho_ten_moi);
    Phieu1.sua_ho_ten(Ho_ten_moi);
    Phieu1.SapXep();
    Phieu1.XuatTT();
    return 0;
}
/*
Ma Phieu: PH001
Ngay Lap: 10/12/2022
Nhap Ma Sinh Vien: B20DCCN457
Nhap Ho Ten Sinh Vien: NGUYEN PHUONG NAM
Nganh Hoc: CNTT
Khoa Hoc: 2020
Nhap Ma Hoc Phan: IT001
Nhap Ten Hoc Phan: LTHDT
Nhap So Tin Chi: 5
Nhap Hoc Phi: 120000
Nhap Ngay Bat Dau: 12/12/2021
Nhap Ma Hoc Phan: IT002
Nhap Ten Hoc Phan: LTC++
Nhap So Tin Chi: 3
Nhap Hoc Phi: 150000
Nhap Ngay Bat Dau: 04/05/2022
Nhap Ma Hoc Phan: IT003
Nhap Ten Hoc Phan: LTPYTHON
Nhap So Tin Chi: 3
Nhap Hoc Phi: 100000
Nhap Ngay Bat Dau: 13/12/2022
*/