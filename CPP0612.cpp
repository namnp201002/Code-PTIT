#include<iostream>
#include<string.h>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int c = 0;
class SinhVien{
	public:
		char HoTen[30];
		string MSV;
		string Lop;
		char NgaySinh[10];
		float GPA;
		SinhVien(){
			this->MSV = "";
			this->Lop = "";
			this->GPA = 0;
		}
		static string ChuanHoaNS(char s[]);
		static string ChuanHoaHT(char s[]);
		friend istream& operator >> (istream& input, SinhVien& ds){
			input.ignore();
			input.getline(ds.HoTen, sizeof(ds.HoTen));
			getline(input, ds.Lop);
			input >> ds.NgaySinh;
			input >> ds.GPA;
			return input;
		}
		friend ostream& operator << (ostream& output, SinhVien& ds){
			++c;
			if(c < 10) output << "B20DCCN00" << c;
			else output << "B20DCCN0" << c;
			output << " " << ChuanHoaHT(ds.HoTen);
			output << ds.Lop << " " << ChuanHoaNS(ds.NgaySinh) << " ";
			output << fixed << setprecision(2) << ds.GPA <<  endl;
			return output;
		}
		
};
string SinhVien::ChuanHoaHT(char s[]){
	string a = "";
	for(int i = 0; i < strlen(s); i++) if( s[i] >= 'A' && s[i] <= 'Z') s[i]+=32;
	char *q = strtok(s, " ");
	while(q!=NULL){
		q[0]-=32;
		a += q;
		a += " ";
		q = strtok(NULL, " ");
	}
	return a;
}
string SinhVien::ChuanHoaNS(char s[]){
	char *p = strtok(s, "/");
	string a = "";
	int count = 0;
	while(p!=NULL){
		++count;
		if(strlen(p) == 1){
			a = a + "0" + p;
		}else a += p;
		p = strtok(NULL, "/");
		a += "/";
		if(count == 2) break;
	}
	a+=p;
	return a;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
