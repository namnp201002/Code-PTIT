#include<bits/stdc++.h>
using namespace std;
class nhanvien{
private:
    char hoten[30];
    long long luongcoban;
    int manhanvien;
public:
    friend class bangluong;
    friend class luongnhanvien;
    friend class danhsach;
    void nhapbp(){
        cin >> manhanvien;
        cin.ignore();
        cin.getline(hoten,30);
        cin>>luongcoban;
    }
};
class danhsach{
private:
    vector<nhanvien> dscb;
public:
    friend class bangluong;
    void nhapbp(){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            nhanvien cb;
            cb.nhapbp();
            dscb.push_back(cb);
        }
    }
    void sapxeptang(){
        sort(dscb.begin(),dscb.end(),[](const nhanvien &a,const nhanvien &b){
            return a.manhanvien < b.manhanvien;
        });
    }
    void xemmh(){
        for(int i=0;i<dscb.size();i++){
            cout << setiosflags(ios::left) << setw(5) << dscb[i].manhanvien;
            cout << setiosflags(ios::left) << setw(10) << dscb[i].hoten;
            cout << setiosflags(ios::left) << setw(10) << dscb[i].luongcoban<<endl;
        }
    }
};
class luongnhanvien:public nhanvien{
private:
    int ngaycong;
    long long luong = 0;
public:
    friend class bangluong;
    void tinhluong(){
        luong = luongcoban + ngaycong*100000;
    }
};
class bangluong{
private:
    long long tongluong = 0;
    int thang;
    vector<luongnhanvien> dslcb;
public:
    bangluong(){}
    bangluong(danhsach a){
        for(int i=0;i<a.dscb.size();i++){
            luongnhanvien lcb;
            strcpy(lcb.hoten,a.dscb[i].hoten);
            lcb.luongcoban = a.dscb[i].luongcoban;
            dslcb.push_back(lcb);
        }
    }
    void nhapbp(){
        cin>>thang;
        for(int i=0;i<dslcb.size();i++){
            cin >> dslcb[i].ngaycong;
            dslcb[i].tinhluong();
            tongluong += dslcb[i].luong;
        }
    }
    void xemmh(){
        cout << thang << " " << tongluong << endl;
        for(int i=0;i<dslcb.size();i++){
            cout << setiosflags(ios::left) << setw(5) << dslcb[i].manhanvien;
            cout << setiosflags(ios::left) << setw(10) << dslcb[i].hoten;
            cout << setiosflags(ios::left) << setw(10) << dslcb[i].luongcoban;
            cout << setiosflags(ios::left) << setw(10) << dslcb[i].ngaycong;
            cout << setiosflags(ios::left) << setw(10) << dslcb[i].luong;
            cout << endl;
        }
    }
    void ghitep(){
        fstream fg("d:\\bangluong.dat",ios::out|ios::binary);
        fg.write(reinterpret_cast <char *>(&thang),sizeof(int));
        fg.write(reinterpret_cast <char *>(&tongluong),sizeof(long long));
        for(int i=0;i<dslcb.size();i++){
            fg.write(reinterpret_cast <char *>(&dslcb[i].manhanvien),sizeof(int));
            fg.write(reinterpret_cast <char *>(&dslcb[i].hoten),sizeof(char)*30);
            fg.write(reinterpret_cast <char *>(&dslcb[i].luongcoban),sizeof(long long));
            fg.write(reinterpret_cast <char *>(&dslcb[i].ngaycong),sizeof(int));
            fg.write(reinterpret_cast <char *>(&dslcb[i].luong),sizeof(long long));
        }
        fg.close();
    }
    void doctep(){
        fstream fg("d:\\bangluong.dat",ios::in|ios::binary);
        fg.read(reinterpret_cast <char *>(&thang),sizeof(int));
        fg.read(reinterpret_cast <char *>(&tongluong),sizeof(long long));
        luongnhanvien x;
        while(1){
            fg.read(reinterpret_cast <char *>(&x.manhanvien),sizeof(int));
            fg.ignore();
            fg.read(reinterpret_cast <char *>(&x.hoten),sizeof(char)*30);
            fg.read(reinterpret_cast <char *>(&x.luongcoban),sizeof(long long));
            fg.read(reinterpret_cast <char *>(&x.ngaycong),sizeof(int));
            fg.read(reinterpret_cast <char *>(&x.luong),sizeof(long long));
            dslcb.push_back(x);
        }
        fg.close();
    }
};
main(){
    danhsach a;
    a.nhapbp();
    a.sapxeptang();
    a.xemmh();
    bangluong b(a);
    b.nhapbp();
    b.ghitep();
    bangluong c;
    c.doctep();
    c.xemmh();
}