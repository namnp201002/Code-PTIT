#include<bits/stdc++.h>
using namespace std;
struct GPA{
    string Diem_He_Chu;
    float Diem_He_4;
    int so_tin_chi;
};
void doi_diem(GPA &x, string s){
    if(s == "A+") x.Diem_He_4 = 4.0;
    else if(s == "A") x.Diem_He_4 = 3.7;
    else if(s == "B+") x.Diem_He_4 = 3.5;
    else if(s == "B") x.Diem_He_4 = 3.0;
    else if(s == "C+") x.Diem_He_4 = 2.5;
    else if(s == "C") x.Diem_He_4 = 2.0;
    else if(s == "D+") x.Diem_He_4 = 1.5;
    else if(s == "D") x.Diem_He_4 = 1.0;
    else x.Diem_He_4 = 0.0;
}
int main(){
    int so_mon; cin >> so_mon;
    vector<GPA> arr(so_mon);
    float diem_tb = 0;
    int tong_so_tin = 0;
    for(int i = 0; i < so_mon; i++){
        cout << "Nhap Diem Mon Thu " << i+1 << ": ";
        cin >> arr[i].Diem_He_Chu;
        doi_diem(arr[i], arr[i].Diem_He_Chu);
        cout << "Nhap So Tin Chi: ";
        cin >> arr[i].so_tin_chi;
        tong_so_tin += arr[i].so_tin_chi;
        diem_tb += arr[i].Diem_He_4*arr[i].so_tin_chi; 
    }
    cout << "Diem Trung Binh Hoc Ky La: " << setprecision(2) << fixed << diem_tb / tong_so_tin;
    return 0;
}