#include<bits/stdc++.h>

using namespace std;

int main(){
    ifstream fileIn1("DATA1.in");
    ifstream fileIn2("DATA2.in");
    string s;
    set<string> set1;
    set<string> set2;
    set<string> set3;
    map<string, int> m;

    while(!fileIn1.eof()){
        fileIn1 >> s;
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
        set1.insert(s);
        set2.insert(s);
    }
    while(!fileIn2.eof()){
        fileIn2 >> s;
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
        set1.insert(s);
        set3.insert(s);
    }
    for(set<string>::iterator it = set1.begin(); it != set1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for(set<string>::iterator it = set2.begin(); it != set2.end(); it++){
        m[*it]++;
    }
    for(set<string>::iterator it = set3.begin(); it != set3.end(); it++){
        m[*it]++;
    }
    for(map<string, int>::iterator it = m.begin(); it != m.end(); it++){
        if(it->second > 1){
            cout << it->first << " ";
        }
    }
    return 0;
}