#include<iostream>
#include<string.h>
using namespace std;

long long UCLN(long long a, long long b){
    if(b == 0) return a;
    if(a%b == 0) return b;
    return UCLN(b, a%b);
}

long long mod(long long a, string b){
    long long m = 0;
    for(int i = 0; i < b.length(); i++){
        m = m*10 + (b[i] - '0');
        m %= a;   
    }
    return m;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a; cin >> a;
        string b; cin >> b;
        if(a == 0) cout << b << endl;
        else{
            long long MOD = mod(a, b);
            cout << UCLN(a, MOD) << endl;
        }
    }
    return 0;
}