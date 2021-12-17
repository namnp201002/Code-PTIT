#include<bits/stdc++.h>
using namespace std;

struct LichThi{
    string Ma;
    string ngay; string thang, nam;
    string gio; string to_thi = "";
    string stt;
};
struct MonHoc{
    string ma;
    string mon;
};
int main(){
    int so_mon_hoc, so_ca_thi;
    cin >> so_mon_hoc >> so_ca_thi;
    cin.ignore();
    vector<MonHoc> MH;
    vector<LichThi> LT;
    MonHoc m;
    while(so_mon_hoc--){
        getline(cin, m.ma);
        getline(cin, m.mon);
        MH.push_back(m);
    }  
    LichThi L;
    string s;
    int x = so_ca_thi;
    while(so_ca_thi--){
        getline(cin, s);
        L.Ma = s.substr(0,7);
        L.ngay = s.substr(8, 2);
        L.thang = s.substr(11,2);
        L.nam = s.substr(14, 4);
        L.gio = s.substr(19, 5);
        L.to_thi = s.substr(25, 2);
        if(x - so_ca_thi < 10){
            L.stt = "T00" + to_string(x - so_ca_thi);
        }else{
            L.stt = "T0" + to_string(x - so_ca_thi);
        }
        LT.push_back(L);
    }
    sort(LT.begin(), LT.end(), [](const LichThi &a, const LichThi &b){
        if(a.nam < b.nam) return true;
        if(a.nam == b.nam && a.thang < b.thang) return true;
        if(a.nam == b.nam && a.thang == b.thang && a.ngay < b.ngay) return true;
        if(a.nam == b.nam && a.thang == b.thang && a.ngay == b.ngay && a.gio < b.gio) return true;
        if(a.nam == b.nam && a.thang == b.thang && a.ngay == b.ngay && a.gio == b.gio){
            if(a.Ma < b.Ma) return true;
        }
        return false;
    });
    for(int i = 0; i < LT.size(); i++){
        cout << LT[i].stt << " " << LT[i].Ma << " ";
        for(int j= 0; j < MH.size(); j++){
            if(LT[i].Ma == MH[j].ma){
                cout << MH[j].mon << " ";
                break;
            } 
        }
        cout << LT[i].ngay << "/" << LT[i].thang << "/" << LT[i].nam << " " << LT[i].gio << " " << LT[i].to_thi << endl;
    }
    return 0;
}