#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string Name, Birth;
	float a, b, c;
};
void nhap(struct ThiSinh &A){
	getline(cin, A.Name);
	getline(cin, A.Birth);
	cin >> A.a >> A.b >> A.c;
}
void in(struct ThiSinh &A){
	cout << A.Name << " " << A.Birth <<  " ";
	cout << fixed << setprecision(1) << (A.a+A.b+A.c);
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
