#include <iostream>
#include <algorithm>
using namespace std;
void solve(int a[], int n)
{
    int k;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] < a[i - 1])
        {
            k = i - 1;
            break;
        }
    }
    int amax = 0, max;
    for (int i = k + 1; i < n; i++)
    {
        if (amax < a[i] && a[i] < a[k])
        {
            amax = a[i];
            max = i;
        }
    }
    swap(a[k], a[max]);
    int l = k + 1, r = n - 1;
    while (l < r)
    {
        swap(a[l], a[r]);
        l++;
        r--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int check = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
                check++;
        }
        if(check == n){
            for(int i = n - 1; i >=0; i--){
                cout << a[i] << " ";
            }
            cout << endl;
        }else{
            solve(a, n);
        }
    }
    return 0;
}