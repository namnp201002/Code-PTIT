#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;
struct NhanVien{
	string Name, Adress;
	char NgaySinh[12];
	char GioiTinh[5];
	char NgayKy[12];
	char MS[12];
};
void nhap(struct NhanVien &NV){
	cin.ignore();
	getline(cin, NV.Name);
	scanf("%s", NV.GioiTinh);
	scanf("%s", NV.NgaySinh);
	cin.ignore();
	getline(cin, NV.Adress);
	scanf("%s", NV.MS);
	scanf("%s", NV.NgayKy);
}
void inds(struct NhanVien NV[], int &N){
	for(int i = 0; i < N; i++){
		string s="0000";
		std::ostringstream ss;
		ss << (i+1);
		string number = ss.str();
		if(number.size()==1){
			s = s + number;
		}else{
			s.erase(0, number.size()-1);
			s = s + number;
		}
		cout << s << " ";
		cout << NV[i].Name << " " << NV[i].GioiTinh << " " << NV[i].NgaySinh << " ";
		cout << NV[i].Adress << " " << NV[i].MS << " " << NV[i].NgayKy<< endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

