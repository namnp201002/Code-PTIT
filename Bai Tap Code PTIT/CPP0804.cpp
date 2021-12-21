#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream in("VANBAN.in");
    set<string> s;
    string str;
    while(in>>str){
        for(int i=0;i<str.size();i++){
            str[i]=tolower(str[i]);
        }
        s.insert(str);
    }
    for(auto i:s){
        cout<<i<<endl;
    }
}