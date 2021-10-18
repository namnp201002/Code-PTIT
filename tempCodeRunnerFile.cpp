#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string Text = "A";
    char Charater = 'A';
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i < n; i++)
        {
            cout << Text << endl;
            Charater += 1;
            Text += Text;
            Text.insert(Text.begin() + (int)Text.size() / 2, Charater);
        }
        cout << Text << endl;
        Text = "A";
        Charater = 'A';
    }
    return 0;
}