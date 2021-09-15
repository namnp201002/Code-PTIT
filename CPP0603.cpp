#include<bits/stdc++.h>
#define a() a;
using namespace std;
class SinhVien{
	public:
		string MaSinhVien = "B20DCCN001";
		char HoTen[30];
		string Lop;
		float GPA;
		char NgaySinh[15];
		static string ChuanHoaHT(char s[]);
		static string ChuanHoaNS(char str[]);
		friend istream& operator >> (istream& input, SinhVien& sv);
		friend ostream& operator << (ostream& ouput, SinhVien& sv);
};
istream& operator >> (istream& input, SinhVien& sv){
	input.getline(sv.HoTen, sizeof(sv.HoTen));
	getline(input, sv.Lop);
	input >> sv.NgaySinh;
	input >> sv.GPA;
	return input;
}
ostream& operator << (ostream& output, SinhVien& sv){
	output << sv.MaSinhVien << " " << SinhVien::ChuanHoaHT(sv.HoTen) << sv.Lop << " ";
	output << SinhVien::ChuanHoaNS(sv.NgaySinh) << " ";
	output << fixed << setprecision(2) << sv.GPA;
	return output;
}
string SinhVien::ChuanHoaHT(char s[]){
	string a = "";
	for(int i = 0; i < strlen(s); i++){
		if(s[i]>='A' && s[i] <= 'Z') s[i]+=32;
	}
	char *p = strtok(s, " ");
	while(p!=NULL){
		p[0] -=32 ;
		a = a + p + " ";
		p = strtok(NULL, " ");
	}
	return a;
}
string SinhVien::ChuanHoaNS(char str[]){
	string b = "";
	char *q = strtok(str, "/");
	int count = 0;
	while(q!=NULL){
		++count ;
		if(strlen(q) == 1) b = b + "0" + q;
		else b += q;
		b+="/";
		q = strtok(NULL, "/");
		if(count == 2) break;
	}
	return b + q;
}


int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
