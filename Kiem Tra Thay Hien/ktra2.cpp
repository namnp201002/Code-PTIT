#include<iostream>
#include<string.h>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
class sinhvien{
private:
    int maso;
    char hoten[20];
public:
    friend class lop;
    friend class bangdiem;
    void nhap(){
        cout<<"Nhap ma so: ";
        cin>>maso;
        cout<<"Nhap ho ten: ";
        cin.ignore();
        cin.getline(hoten,20);
    }
    void xuat(){
        cout<<"Ma so: "<<maso<<endl;
        cout<<"Ho ten: "<<hoten<<endl;
    }
};
class lop{
private:
    vector<sinhvien> dssv;
    char malop[10];
public:
    friend class bangdiem;
    friend class diemsinhvien;
    void nhapbp(){
        cout<<"Nhap ma lop: ";
        cin.ignore();
        cin.getline(malop,10);
        int n;
        cout<<"TS: ";
        cin>>n;
        for(int i=0;i<n;i++){
            sinhvien sv;
            sv.nhap();
            dssv.push_back(sv);
        }
    }
    void sapxeptang(){
        sort(this->dssv.begin(),this->dssv.end(),[](const sinhvien &sv1,const sinhvien &sv2){
            return sv1.maso < sv2.maso;
        });
    }
    void xemmh(){
        sapxeptang();
        cout << endl;
        cout << "   ";
        cout << setiosflags(ios::left) << setw(10) << "Ma So";
        cout << setiosflags(ios::left) << setw(10) << "Ho Ten";
        for(int i=0;i<dssv.size();i++){
            cout << endl;
            cout << "   ";
            cout << setiosflags(ios::left) << setw(10) << dssv[i].maso;
            cout << setiosflags(ios::left) << setw(10) << dssv[i].hoten;
        }
    }

};
class diemsinhvien: public sinhvien{
private:
    int diem;
    char ketqua[20];
public:
    friend class bangdiem;
    void xem(){
        sinhvien::xuat();
        cout << setiosflags(ios::left) << setw(10) <<diem<<endl;
        cout << setiosflags(ios::left) << setw(10) <<ketqua<<endl;
    }
};
class bangdiem{
private:
    int TSqua = 0;
    int TShoclai = 0;
    char malop[10];
    char monhoc[20];
    vector<diemsinhvien> dsdiem;
public:
    bangdiem(lop a){
        for(int i=0;i<a.dssv.size();i++){
            diemsinhvien sv;
            sv.maso = a.dssv[i].maso;
            strcpy(sv.hoten,a.dssv[i].hoten);
            dsdiem.push_back(sv);
        }
    }
    void nhapbp(){
        cout<<"\nNhap ma lop: "; 
        cin.getline(malop,10);
        cout<<"Nhap mon hoc: ";
        cin.getline(monhoc,20);
        for(int i = 0; i < dsdiem.size(); i++){
            cout << "Nhap Ma So: ";
            cin >> dsdiem[i].maso;
            cin.ignore();
            cout << "Nhap Ho Ten: ";
            cin.getline(dsdiem[i].hoten,20);
            cout << "Nhap Diem: ";
            cin >> dsdiem[i].diem;
            if(dsdiem[i].diem >= 4){
                strcpy(dsdiem[i].ketqua,"Qua");
            }else {
                strcpy(dsdiem[i].ketqua,"Hoc lai");
            }
            cout << endl;
        }
    }
    void xemmh(){
        cout << "Ma Lop: " << this->malop << "    ";
        cout << "Mon Hoc: " << this->monhoc << "    ";
        for(int i=0;i<dsdiem.size();i++){
            if(dsdiem[i].diem >= 4){
                TSqua++; 
            }else TShoclai++;
        }
        cout << "TS Qua: " << TSqua << "    ";
        cout << "TS Hoc Lai: " << TShoclai << endl;
        cout << endl;
        cout << "   ";
        cout << setiosflags(ios::left) << setw(10) << "Ma So";
        cout << setiosflags(ios::left) << setw(10) << "Ho Ten";
        cout << setiosflags(ios::left) << setw(10) << "Diem";
        cout << setiosflags(ios::left) << setw(10) << "Ket Qua";
        for(int i=0;i<dsdiem.size();i++){
            cout << endl;
            cout << "   ";
            cout << setiosflags(ios::left) << setw(10) << dsdiem[i].maso;
            cout << setiosflags(ios::left) << setw(10) << dsdiem[i].hoten;
            cout << setiosflags(ios::left) << setw(10) << dsdiem[i].diem;
            cout << setiosflags(ios::left) << setw(10) << dsdiem[i].ketqua;
        }
    }
};
main(){
    lop a;
    a.nhapbp();
    a.xemmh();
    bangdiem b(a);
    b.nhapbp();
    b.xemmh();
}
