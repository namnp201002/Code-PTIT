#include<iostream>
using namespace std;
int main(){
    int m, n; cin >> m >> n;
    int count = 0;
    int a, b; cin >> a>>b;
    for(int i = m; i <= n; i++){
        if(i%a == 0 || i%b == 0) count ++;
    }
    cout << count;
}