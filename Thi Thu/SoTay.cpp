#include<bits/stdc++.h>

using namespace std;

struct ABC{
    string ho, ten_dem, ten;
    string sdth;
    string ngaysinh;
};
void tach_ten(ABC &danhba, string s){
    stringstream ss(s);
    vector<string> vec;
    string token;
    while(ss >> token){
        vec.push_back(token);
    }
    danhba.ho = vec[0];
    danhba.ten = vec[vec.size()-1];
    for(int i = 1; i < vec.size() - 1; i++){
        danhba.ten_dem += vec[i] + ' ';
    }
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
            continue;
        }else{
            tach_ten(danhba, x);
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i].ho << " " << v[i].ten_dem << v[i].ten << " " << v[i].ngaysinh << " " << v[i].sdth << endl;
    }
    filein.close();
    return 0;
}