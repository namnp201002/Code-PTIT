// #include<bits/stdc++.h>
// using namespace std;
// int vs[100], a[100], hoanvi;
// void HvDq(int m) {
//     if (m > hoanvi){
//         for (int i = 1; i <= hoanvi; i++) cout << a[i] << " ";
//         cout << endl;
//         return;
//     }
//     for (int i = 1; i <= hoanvi; i++){
//         if (vs[i] == 0){
//             a[m] = i;
//             vs[i] = 1;
//             HvDq(m+1);
//             vs[i] = 0;
//         }
//     }
// }
// void  Nphan(int m, int n){
//     if(m > n){
//         for(int i = 1; i <=n; i++){
//             cout << a[i];
//         }
//         cout << endl;
//         return;
//     }
//     for(int i = 0; i<=1; i++){
//         a[m] = i;
//         Nphan(m+1, n);
//     }
// }
// void NhiPhan(int n){
//     int a[n];
//     for(int i = 1; i <= n; i++){
//         a[i] = 0;
//     }
//     while(1){
//         for(int i = 1; i <= n; i++) cout << a[i];
//         cout << " ";
//         int i = n;
//         while(a[i] == 1){
//             a[i] = 0;
//             i--;
//         }
//         a[i] = 1;
//         if(i==0) break;
//     }
// }
// void HoanVi(int n){
//     int a[n+5];
//     for(int i = 1; i <= n; i++){
//         a[i] = i;
//     }
//     while(1){
//         for(int i = 1; i <=n; i++){
//             cout << a[i];
//         }
//         int j = 1, index = 0;
//         while(j < n){
//             if(a[j] < a[j+1]) index = j;
//             j++;
//         }
//         if(index == 0) break;
//         int k = n;
//         while(a[k] < a[index]) k--;
//         swap(a[index], a[k]);
//         int r=n, l=index+1;
//         while(l<r){
//             swap(a[l], a[r]);
//             l++; r--;
//         }
//         cout << endl;
//     }
// }
// string chuan_hoa_ngay(string s){
//     if(s[2] != '/') s.insert(0, "0");  //02/1/2002
//     if(s[5] != '/') s.insert(3, "0");
//     return s;
// }
// string Chuan_Hoa_Ho_Ten(string &s){
// 	for (int i = 0; i < s.size(); i++)
//         if (s[i] >= 'A' && s[i] <= 'Z')
//             s[i] += 32;
//     stringstream ss(s);
//     string token, s0;
//     while (ss >> token)
//     {
//         token[0] -= 32;
//         s0 += token;
//         s0 += '-';
//     }
//     s0.pop_back();
//     return s0;
// }
// void tam_giac_vuong(int n){
//     int a[n+5];
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//         a[i] = a[i]*a[i];
//     }
//     sort(a, a+n);
//     int check = 0;
//     for(int i = n-1; i >=2; i--){
//         int l = 0, r = i-1;
//         while(l<r){
//             if(a[r] + a[l] == a[i]){
//                 cout << "YES\n";
//                 check++;
//                 break;
//             }else if(a[r] + a[l] > a[i]) r--;
//             else l++;
//         }
//     }
//     if(check == 0) cout << "NO\n";
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n; cin >> n;
//         tam_giac_vuong(n);
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
string smallestNumber(int m, int s)
{
    if (s > 9 * m || (m > 1 && s == 0))
    {
        return "-1";
    }
    s -= 1;
    vector<int> v(m);
    string res = "";
    for (int i = m - 1; i > 0; i--)
    {
        if (s > 9)
        {
            v[i] = 9;
            s -= 9;
        }
        else
        {
            v[i] = s;
            s = 0;
        }
    }
    v[0] = s + 1;
    for (int i = 0; i < m; i++)
    {
        res.push_back(v[i] + '0');
    }
    return res;
}
string largestNumber(int m, int s)
{
    if (s > 9 * m || (m > 1 && s == 0))
    {
        return "-1";
    }
    vector<int> v(m);
    string res = "";
    for (int i = 0; i < m; i++)
    {
        if (s > 9)
        {
            v[i] = 9;
            s -= 9;
        }
        else
        {
            v[i] = s;
            s = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        res.push_back(v[i] + '0');
    }
    return res;
}
int main()
{
    int m, s;
    cin >> m >> s;
    cout << smallestNumber(m, s) << " " << largestNumber(m, s);
}
