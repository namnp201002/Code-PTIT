#include<bits/stdc++.h>
using namespace std;
struct GiangVien{
    string tenGV;
    string boMon;
};
bool search(string s, string a){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == a[0]){
            if(s.substr(i, a.size()) == a){
                return true;
            }
        }
    }
    return false;
}
void toLowerCase(string &s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 32;
        }
    }
}
string maBoMon(string s){
    if(s[0] >= 'a' && s[0] <='z') s[0]-=32;

    string s1 = "";
    s1+=s[0];

    for(int i = 1; i < s.size() - 1; i++){
        if(s[i] == ' ' && s[i+1] != ' '){
            if(s[i+1] >= 'a' && s[i+1] <= 'z') s[i+1]-=32;
            s1 += s[i+1];
        }
    }

    return s1;
}
int main(){
    int t;
    cin >> t;
    GiangVien a[t];
    cin.ignore();
    for(int i = 0; i < t; i++){
        getline(cin, a[i].tenGV);
        getline(cin, a[i].boMon);
        a[i].boMon = maBoMon(a[i].boMon);
    }
    int Q;
    cin >> Q;
    string key;
    while(Q--){
        cin >> key;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << key << ":\n";
        toLowerCase(key);
        for(int i = 0; i < t; i++){ 
            string s = a[i].tenGV;
            toLowerCase(s);
            if(search(s, key)){
                if(i + 1 < 10){
                    cout << "GV" << "0" << i + 1 << " ";
                }else cout << "GV" << i + 1 << " ";
                cout <<  a[i].tenGV << " " << a[i].boMon << endl;
            }
        }
    }
    return 0;
}