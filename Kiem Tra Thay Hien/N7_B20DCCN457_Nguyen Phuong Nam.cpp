#include<bits/stdc++.h>
using namespace std;
class canbo{
private:
    char hoten[30];
    long long luongcoban;
public:
    friend class bangluong;
    friend class luongcb;
    friend class danhsach;
    void nhapbp(){
        cin.ignore();
        cin.getline(hoten,30);
        cin>>luongcoban;
    }
};
class danhsach{
private:
    vector<canbo> dscb;
public:
    friend class bangluong;
    void nhapbp(){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            canbo cb;
            cb.nhapbp();
            dscb.push_back(cb);
        }
    }
    void sapxepgiam(){
        sort(dscb.begin(),dscb.end(),[](const canbo &a,const canbo &b){
            return a.luongcoban > b.luongcoban;
        });
    }
    void xemmh(){
        for(int i=0;i<dscb.size();i++){
            cout << setiosflags(ios::left) << setw(10) << dscb[i].hoten;
            cout << setiosflags(ios::left) << setw(10) << dscb[i].luongcoban<<endl;
        }
    }
};
class luongcb:public canbo{
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
    vector<luongcb> dslcb;
public:
    bangluong(){}
    bangluong(danhsach a){
        for(int i=0;i<a.dscb.size();i++){
            luongcb lcb;
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
    void doctep(){
        ifstream filein;
        filein.open("luong.txt");
        filein >> thang;
        filein >> tongluong;
        while(!filein.eof()){
            cin.ignore();
            luongcb lcb;
            filein.getline(lcb.hoten,30);
            filein >> lcb.luongcoban;
            filein >> lcb.ngaycong;
            filein >> lcb.luong;
            dslcb.push_back(lcb);
        }
        filein.close();
    }
    void xemmh(){
        cout << thang << " " << tongluong << endl;
        for(int i=0;i<dslcb.size();i++){
            cout << setiosflags(ios::left) << setw(10) << dslcb[i].hoten;
            cout << setiosflags(ios::left) << setw(10) << dslcb[i].luongcoban;
            cout << setiosflags(ios::left) << setw(10) << dslcb[i].ngaycong;
            cout << setiosflags(ios::left) << setw(10) << dslcb[i].luong;
            cout << endl;
        }
    }
    void ghitep(){
        ofstream fileout;
        fileout.open("luong.txt");
        fileout << thang << endl;
        fileout << tongluong << endl;
        for(int i=0;i<dslcb.size();i++){
            fileout << dslcb[i].hoten << endl;
            fileout << dslcb[i].luongcoban << endl;
            fileout << dslcb[i].ngaycong << endl;
            fileout << dslcb[i].luong << endl;
        }
        fileout.close();
    }
};
main(){
    danhsach a;
    a.nhapbp();
    a.sapxepgiam();
    a.xemmh();
    bangluong b(a);
    b.nhapbp();
    b.ghitep();
    bangluong c;
    c.doctep();
    c.xemmh();
}