#include<bits/stdc++.h>

using namespace std;
// Create by Nguyễn Nam
struct ABC{
    string ho, ten_dem, ten;
    string sdth;
    string ngaysinh;
};
void tach_ten(ABC &danhba, string &s){
    stringstream ss(s);
    deque<string> vec;
    string token;
    while(ss >> token){
        vec.push_back(token);
    }
    danhba.ho = vec.front();
    danhba.ten = vec.back();
    vec.pop_back(); vec.pop_front();
    for(int i = 0; i < vec.size(); i++){
        danhba.ten_dem += vec[i] + ' ';
    }
    ss.clear();
    token.clear();
    vec.clear();
}
int main(){ 
    ifstream filein("SOTAY.txt");
    string NS;
    string sdt;
    string x;
    string name;
    vector<ABC> v;
    ABC danhba;
    while(!filein.eof()){
        getline(filein, x);
        string check = x.substr(0, 4);
        if(check.compare("Ngay") == 0){
            danhba.ngaysinh = x.substr(5, 10);
            continue;
        }
        if(check[0] == '0'){
            danhba.sdth = x;
            v.push_back(danhba);
            danhba.ten_dem.clear();
            continue;
        }else{
            tach_ten(danhba, x);
        }
    }
    sort(v.begin(), v.end(), [](const ABC &a, const ABC &b){
        if(a.ten.compare(b.ten) < 0) return true;
        if(a.ten.compare(b.ten) == 0){
            if(a.ten_dem.compare(b.ten_dem) < 0) return true;
        }
        return false;
    });
    ofstream fileout("DIENTHOAI.txt");
    for(int i = 0; i < v.size(); i++){
        fileout << v[i].ho << " " << v[i].ten_dem << v[i].ten << " " << v[i].ngaysinh << " " << v[i].sdth << endl;
    }
    filein.close();
    fileout.close();
    return 0;
}