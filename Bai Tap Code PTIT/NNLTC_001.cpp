#include <iostream>
#include <vector>
#include <map>
using namespace std;
struct Data
{
    int a, b;
};
int main()
{
    int n;
    int count = 0;
    vector<Data> v;
    while (cin >> n)
    {
        if(count == 7) break;
        int check = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (n == v[i].a)
            {
                v[i].b++;
                check++;
            }
        }
        if (check == 0)
        {
            Data Temp;
            Temp.a = n;
            Temp.b = 1;
            v.push_back(Temp);
        }
        count ++;
    }
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i].a << " " << v[i].b << endl;
    }
}