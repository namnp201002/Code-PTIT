#include<bits/stdc++.h>
using namespace std;
main(){
    ifstream in("Test.txt");
    int m, n;
    in >> m >> n;
    int a[m], b[n];
    set<int> s1;
    set<int> s2;
    for(int i = 0; i < m; i++){
        in >> a[i];
        s1.insert(a[i]);
    }
    for(int i = 0; i < n; i++){
        in >> b[i];
        s2.insert(b[i]);
    }
    set<int>::iterator it1 = s1.begin();
    set<int>::iterator it2 = s2.begin();
    while(it1 != s1.end() && it2 != s2.end()){
        if(*it1 == *it2){
            cout << *it1 << " ";
            it1++;
            it2++;
        }
        else if(*it1 < *it2){
            it1++;
        }
        else{
            it2++;
        }
    }
    in.close();
    return 0;
}