#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
long long tach(long long n){
    long long tong=0;
    while(n>0){
        tong+=n%10;
        n/=10;
    }
    if(tong>9)  tach(tong);
    else return tong;
}

void ham(){
    long long n;
    cin>>n;
    cout<<tach(n)<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--)    ham();
    return 0;
}
