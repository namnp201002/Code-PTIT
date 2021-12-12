#include <bits/stdc++.h>
using namespace std;
int check(int a[], int b[], int m, int n)
{
    int sum = 0;
    int t = 0;
    for (int i = 0; i < m; i++)
    {
        t += a[i];
        int k = 0;
        for (int j = i + 1; j < n; j++)
        {
            k += b[j];
        }
        if (k + t > sum)
            sum = k + t;
    }
    return sum;
}
void nhap(int a[], int m)
{
    for (int i = 0; i < m; i++)
        cin >> a[i];
}
int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int m, n;
        cin >> m >> n;
        int a[m];
        int b[n];
        nhap(a, m);
        nhap(b, n);
        int max = check(a, b, m, n);
        int t = check(b, a, n, m);
        if (max < t)
            max = t;
        cout << max << endl;
    }
}