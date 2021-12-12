#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N, K, B;
    cin >> N >> K >> B;
    int a[N+5] = {0};
    int x;
    for(int i = 1; i <= B; i++){
        cin >> x;
        a[x] = 1;
    }
    // int min = 100000;
    int sum = 0;
    for(int i = 1; i <= K; i++){
        sum += a[i];
    }
    int MIN = sum;
    for(int i = K+1; i <= N; i++){
        sum = sum+a[i]-a[i-K];
        MIN = min(MIN, sum);
    }
    cout << MIN;
    return 0;
}