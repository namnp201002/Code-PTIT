#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream input("DATA.in");
    map<int, int> m;
    int x;
    while(input >> x){
        m[x]++;
    }
    for(map<int, int>::iterator it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}