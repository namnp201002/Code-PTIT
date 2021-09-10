#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	int MSV;
	char Name[35];
	char Lop[20], NgaySinh[15];
	float GPA;
	void input(){
		cin.getline(Name, sizeof(Name));
		scanf("%s", Lop);
		scanf("%s", NgaySinh);
		cin >> GPA;
	}
};
bool CheckSort(SinhVien a, SinhVien b){
	return a.GPA > b.GPA;
}
void ChuanHoaLop(char s[]){
	for(int i = 0; i<strlen(s); i++){
		if(s[i]>='a' && s[i]<='z') s[i]-=32;
	}
}
void ChuanHoaNgaySinh(char s[]){
	char *p = strtok(s, "/");
	int count  = 0;
	while(p!=NULL){
		if(strlen(p)==1){
			cout << "0" << p;
		}
		else cout << p;
		if(count==2) break;
		cout << "/";
		count ++;
		p = strtok(NULL, "/");
	}
}

void nhap(SinhVien ds[], int N){
	for(int i=0; i<N; i++){
		cin.ignore();
		ds[i].input();
		ds[i].MSV = i+1;
	}
	
}
void sapxep(SinhVien ds[], int N){
	sort(ds, ds + N, CheckSort);
}
void ChuanHoaHoTen(char s[]){
	for(int i=0; i<strlen(s); i++){
		if(s[i]>='A' && s[i]<='Z') s[i]+=32;
	}
	int count = 0;
	char *p = strtok(s, " ");
	while(p!=NULL){
		p[0]-=32;
		cout << p;
		cout << " ";
		p = strtok(NULL, " ");
	}
}
void in(SinhVien ds[], int N){
	for(int i=0; i<N; i++){
		ChuanHoaLop(ds[i].Lop);
		cout << "B20DCCN0";
		if(ds[i].MSV < 10) cout << "0" <<ds[i].MSV;
		else cout << ds[i].MSV;
		cout << " ";
		ChuanHoaHoTen(ds[i].Name);
		cout << ds[i].Lop;
		cout << " ";
		ChuanHoaNgaySinh(ds[i].NgaySinh);
		cout << " ";
		cout << fixed << setprecision(2) << ds[i].GPA << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}


