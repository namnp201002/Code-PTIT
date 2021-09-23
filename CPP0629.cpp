#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
class ThucTap{
    public:
        string Ma_Doanh_Nghiep;
        string Ten_Doanh_Nghiep;
        int So_Luong_SV;
};
bool Compare(ThucTap &a, ThucTap &b){
    if(a.So_Luong_SV > b.So_Luong_SV) return true;
    if (a.So_Luong_SV == b.So_Luong_SV && a.Ma_Doanh_Nghiep.compare(b.Ma_Doanh_Nghiep) < 0) return true;
    return false;
}
int main(){
    int N;
    cin >> N;
    ThucTap arr[N+5];
    for(int i = 0; i < N; i++){
        scanf("\n");
        getline(cin, arr[i].Ma_Doanh_Nghiep);
        getline(cin, arr[i].Ten_Doanh_Nghiep);
        cin >> arr[i].So_Luong_SV;
    }
    sort(arr, arr + N, Compare);
    int Q;
    cin >> Q;
    while(Q--){
        int A, B;
        cin >> A >> B;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << A << " DEN " << B << " SINH VIEN:\n";
        for(int i = 0; i < N; i++){
            if(arr[i].So_Luong_SV >= A && arr[i].So_Luong_SV <= B){
                cout << arr[i].Ma_Doanh_Nghiep << " " << arr[i].Ten_Doanh_Nghiep;
                cout << " " << arr[i].So_Luong_SV << endl;
            }
        }
    }
    return 0;
}