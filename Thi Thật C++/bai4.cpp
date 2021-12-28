#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
    string hoten, dantoc;
    float diemthi;
    int khuvuc;
    string tinhtrang;
    string mats;
};
string chuanhoa(string &s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <='Z') s[i]+=32;
    }
    stringstream ss(s);
    string token;
    string name = "";
    while(ss >> token){
        token[0] -=32;
        name += token;
        name += ' ';
    }
    name.pop_back();
    return name;
}
int main(){
    int n;
    cin >> n;
    sinhvien x;
    vector<sinhvien> sv;
    // cin.ignore();
    for(int i = 0; i < n; i++){
        if(i+1<10){
            x.mats = "TS0" + to_string(i+1);
        }else{
            x.mats = "TS" + to_string(i+1);
        }
        scanf("\n");
        getline(cin, x.hoten);
        x.hoten = chuanhoa(x.hoten);
        cin >> x.diemthi;
        scanf("\n");
        getline(cin, x.dantoc);
        cin >> x.khuvuc;
        sv.push_back(x);
    }
    for(int i = 0; i < sv.size(); i++){
        if(sv[i].dantoc != "Kinh") sv[i].diemthi += 1.5;
        if(sv[i].khuvuc == 1){
            sv[i].diemthi += 1.5;
        }else if(sv[i].khuvuc == 2){
            sv[i].diemthi+=1;
        };
        if(sv[i].khuvuc == 3 || sv[i].dantoc == "Kinh") continue;
    }
    for(int i = 0; i < sv.size(); i++){
        if(sv[i].diemthi >= 20.5) sv[i].tinhtrang = "Do";
        else sv[i].tinhtrang = "Truot";
    }
    sort(sv.begin(), sv.end(), [](const sinhvien &sv1,const sinhvien &sv2 ){
        if(sv1.diemthi > sv2.diemthi) return true;
        if(sv1.diemthi == sv2.diemthi){
            if(sv1.mats.compare(sv2.mats) < 0) return true;
        }
        return false;
    });
    for(int i = 0; i < sv.size(); i++){
        cout << sv[i].mats << " " << sv[i].hoten << " ";
        cout << setprecision(1) << fixed << sv[i].diemthi<< " ";
        cout << sv[i].tinhtrang<< endl;
    }
}