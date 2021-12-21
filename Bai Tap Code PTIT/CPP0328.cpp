#include<iostream>
#include<string.h>
using namespace std;
int kiem_tra(string s, int n){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        int temp = 0;
        for(int j = i; j < s.length(); j++){
            temp = temp*10 + s[j] - '0';
            temp %= n;
            if(temp == 0) count ++;
        }
    }
    return count;
}
main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << kiem_tra(s, 8) - kiem_tra(s, 24) << endl;
    }
}