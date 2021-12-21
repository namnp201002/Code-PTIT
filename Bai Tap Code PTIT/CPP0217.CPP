#include <bits/stdc++.h>
using namespace std;
#define FOR(i, l, r) for(ll i = l; i <= r; i++);
const int maxn = 10e4;
int a[maxn], n, k;
main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> k;
        for(int i = 0; i < n*n; i++)
            cin >> a[i];
        sort(a, a + (n * n));
        cout << a[k - 1] << '\n';
    }
}