#include<bits/stdc++.h>
using namespace std;
int ngto(long long n){
    if(n < 2) return 0;
    if(n==2 || n==3) return 1; 
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int daonguoc(long long n){
    long long rev = 0;
    long long temp = n;
    while(n>0){
        rev = rev*10 + n%10;
        n/=10;
    }
    if(ngto(rev)) return 1;
    return 0;
}
int sum(long long n){
    long long s = 0;
    while(n>0){
        s += n%10;
        n/=10;
    }
    if(ngto(s)) return 1;
    return 0;
}
int checkcs(long long n){
    while(n>0){
        if(ngto(n%10)==0) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(checkcs(n) == 1 && ngto(n) ==1 && sum(n) == 1 && daonguoc(n) == 1) cout << "Yes\n";
        else cout << "No\n";
    }
}