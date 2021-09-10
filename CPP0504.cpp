#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string Name, Lop;
	char Birth[20];
	float GPA;
};
void nhap (struct SinhVien &A){
	getline(cin, A.Name);
	getline(cin, A.Lop);
	scanf("%s", A.Birth);
	cin >> A.GPA;
}
void in(struct SinhVien &A){
	cout << "B20DCCN001 " << A.Name << " " << A.Lop << " ";
	if(strlen(A.Birth)==10) cout << A.Birth;
	else {
		char *p = strtok(A.Birth, "/");
		int count =0;
		while(p!=NULL){
			count ++;
			if(strlen(p)<2){
				cout << "0" << p;
			}else cout << p;
			if(count == 3) break;
			else cout<<"/";
			p=strtok(NULL, "/");
		}
	}
	cout << " " << fixed << setprecision(2) << A.GPA;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
