#include<bits/stdc++.h>
using namespace std;
int check(char s[]){
    for (size_t i = 0; i < strlen(s); i++)
    {
        if(s[i] < '0' || s[i] > '9')
            return 0;
    }
    return 1;
}
int main(){
    ifstream in("DATA.in");
    long long sum=0;
    char s[1000];
    while(in >> s){
        if(check(s)){
            if(atoi(s) <= INT_MAX && strlen(s) <= 10){
                sum += atoi(s);
            }
        }else continue;
    }
    cout << sum;
    return 0;
}