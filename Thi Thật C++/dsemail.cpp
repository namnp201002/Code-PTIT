#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream filein("DATA.in");
    string s;
    set<string> v;
    while(filein >> s){
        for(int i = 0; i < s.size(); i++){
            if(s[i] >='A' && s[i] <='Z') s[i]+=32;
        }
        v.insert(s);
    }
    set<string>::iterator it;
    for(it = v.begin(); it!=v.end(); it++){
        cout << *it << endl;
    }
    return 0;
}