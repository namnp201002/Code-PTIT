#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n + 3];
		for (int i = 1; i <= n; i++)
		{
			a[i] = i;
		}
		while (1)
		{
			for (int j = 1; j <= k; j++)
			{
				cout << a[j];
			}
			cout << " ";
			int i = 0;
			while (a[i + 1] <= n - k + i && i < k)
				i++;
			// cout << i << " ";
			if (i == 0)
				break;
			a[i]++;
			for (int j = i + 1; j <= k; j++)
			{
				a[j] = a[i] + j - i;
			}
			// for (int i = 1; i <= n; i++)
			// {
			// 	cout << a[i];
			// 	/* code */
			// }
			// cout << endl;
		}
		cout << endl;
	}
	return 0;
}
