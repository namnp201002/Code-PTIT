#include<bits/stdc++.h>

using namespace std;

main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5][n+5];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        int sumcol[n+5], sumrow[n+5];
        for(int i = 0; i < n; i++){
            sumcol[i] = 0;
            sumrow[i] = 0;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                sumrow[i] += a[i][j];
                sumcol[j] += a[i][j];
            }
        }
        int maxSum = 0;
        for(int i = 0; i < n; i++){
            maxSum = max(sumrow[i], maxSum);
            maxSum = max(sumcol[i], maxSum);
        }
        int i =0, j = 0;
        int count = 0;
        while(i < n && j < n){
            int step = min(maxSum - sumrow[i], maxSum - sumcol[j]);
            a[i][j] += step;
            sumcol[j] += step;
            sumrow[i] += step;
            count += step;
            if(sumrow[i] == maxSum) i++;
            if(sumcol[j] == maxSum) j++;
        }
        cout << count << endl;
    }
    return 0;
}