#include<bits/stdc++.h>
using namespace std;
// Create by Nguyễn Nam
struct thong_tin_bo_phim{
    int ma_the_loai;
    string ma_phim;
    string ngay, thang, nam;
    string ten_phim;
    int tap_phim;
};
void tach_ngay(thong_tin_bo_phim &tt, string s){
    tt.ngay = s.substr(0, 2);
    tt.thang = s.substr(3, 2);
    tt.nam = s.substr(6, 4);
}
int main(){
    int so_the_loai, phim;
    cin >> so_the_loai >> phim;
    // tạo một vector chứa các thể loại phim
    vector<string> TL;
    string s;
    cin.ignore();
    while(so_the_loai--){
        getline(cin, s);
        TL.push_back(s);
    }
    // tạo một vector chúa thông tin bộ phim
    vector<thong_tin_bo_phim> TT;
    thong_tin_bo_phim x;
    char matl[10]; // mã thể loại phim
    int ma = 1;
    while(phim--){
        if(ma < 10 ){
            x.ma_phim = "P00" + to_string(ma);
        }else{
            x.ma_phim = "P0" + to_string(ma);
        }
        cin >> matl;
        char xxx[10];
        // chuyển 3 ký tự cuối của mã thể loại phim thành kiểu int
        x.ma_the_loai = atoi(strncpy(xxx, matl + 2, 3));
        cin >> s;
        tach_ngay(x, s); // tách riêng ngày tháng năm
        cin.ignore();
        getline(cin, x.ten_phim);
        cin >> x.tap_phim;
        TT.push_back(x);
        ma++;
    }
    sort(TT.begin(), TT.end(), [](const thong_tin_bo_phim &a, const thong_tin_bo_phim &b){
        if(a.nam < b.nam) return true;
        if(a.nam == b.nam && a.thang < b.thang) return true;
        if(a.nam == b.nam && a.thang == b.thang && a.ngay < b.ngay) return true;
        if(a.nam == b.nam && a.thang == b.thang && a.ngay == b.ngay){
            if(a.ten_phim.compare(b.ten_phim) < 0) return true;
        }
        if(a.nam == b.nam && a.thang == b.thang && a.ngay == b.ngay && a.ten_phim.compare(b.ten_phim) == 0){
            if(a.tap_phim < b.tap_phim) return true;
        }
        return false;
    });
    for(int i = 0; i < TT.size(); i++){
        cout << TT[i].ma_phim << " ";
        cout << TL[TT[i].ma_the_loai-1] << " ";
        cout << TT[i].ngay << "/" << TT[i].thang << "/" << TT[i].nam << " ";
        cout << TT[i].ten_phim << " " << TT[i].tap_phim << endl;
    }
    return 0;
}
/* 
2 3
Hai huoc
Tinh cam
TL001
25/11/2021
Phim so 1
10
TL001
04/12/2021
Phim so 2
15
TL002
25/11/2021
Phim so 3
5
--------------------
P001 Hai huoc 25/11/2021 Phim so 1 10
P003 Tinh cam 25/11/2021 Phim so 3 5
P002 Hai huoc 04/12/2021 Phim so 2 15
*/