#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string MaNhanVien;
	string Ten;
	int Ngay, Thang, Nam;
	char GioiTinh[5], NgaySinh[15], NgayKy[15];
	string DiaChi;
	char MS_Thue[15];
};
string ChuanHoa(int x){
	string a = to_string(x);
	while(a.size() < 5){
		a = "0" + a;
	}
	return a;
}
void nhap(NhanVien &ds){
	cin.ignore();
	getline(cin, ds.Ten);
	scanf("%s", ds.GioiTinh);
	scanf("%s", ds.NgaySinh);
	cin.ignore();
	getline(cin, ds.DiaChi);
	scanf("%s", ds.MS_Thue);
	scanf("%s", ds.NgayKy);
}
bool checkSort(NhanVien &a, NhanVien &b){
	if(a.Nam < b.Nam) return true;
	if(a.Nam == b.Nam && a.Thang < b.Thang) return true;
	if(a.Nam == b.Nam && a.Thang == b.Thang && a.Ngay < b.Ngay) return true;
	return false;
}
void sapxep(NhanVien ds[], int N){
	for(int i=0; i<N; i++){
		ds[i].MaNhanVien = ChuanHoa(i+1);
		char ns[15];
		strcpy(ns, ds[i].NgaySinh);
		char *p = strtok(ns, "/");
		int count = 0;
		while(p!=NULL){
			count++;
			if(count == 1) ds[i].Thang = atoi(p);
			if(count == 2) ds[i].Ngay = atoi(p);
			if(count == 3) ds[i].Nam = atoi(p);
			p = strtok(NULL, "/");
		}
	}
	sort(ds, ds+N, checkSort);
}
void inds(NhanVien ds[], int N){
	for(int i=0; i<N; i++){
		cout << ds[i].MaNhanVien << " " << ds[i].Ten << " " << ds[i].GioiTinh << " ";
		cout << ds[i].NgaySinh << " " << ds[i].DiaChi << " " << ds[i].MS_Thue << " ";
		cout << ds[i].NgayKy << endl;
	}		
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
