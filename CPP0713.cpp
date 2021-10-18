#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        // while (1)
        // {
            
            // cout << " ";
            int i = n - 1;
            while (i > 0 && a[i] > a[i + 1])
                i--;
            // if (i == 0)
            //     break;
            int k = n;
            while (a[k] < a[i])
                k--;
            swap(a[i], a[k]);
            int l = i + 1, r = n;
            while (l < r)
            {
                swap(a[l], a[r]);
                l++;
                r--;
            }
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
        // }
        cout << endl;
    }
    return 0;
}