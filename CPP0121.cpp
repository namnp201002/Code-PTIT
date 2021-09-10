#include<iostream>
int UCLN(long a, long b){
    if(a==0 || b==0) return a+b;
    while(a!=b){
        if(a > b) a -= b;
        else b-= a;
    }
    return a;
}
int main(){
    int t;
    std::cin >> t;
    while(t--){
        long a, b;
        std::cin >> a >> b;
        long long BCNN = a * (b / UCLN(a, b));
        std::cout << BCNN << " " << UCLN(a, b) << std::endl;
    }
    return 0;
}
