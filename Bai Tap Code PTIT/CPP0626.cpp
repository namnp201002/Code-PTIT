#include<iostream>
#include<algorithm>
#include<string.h>
#include<sstream>
using namespace std;
class GiangVien{
public:
	string HoTen;
	string BoMon;
	string MaBoMon;
	string MaGiangVien = "GV";
	static string Tach_MaBoBon(string &x);
	friend istream& operator >> (istream& input, GiangVien& gv);
	friend ostream& operator << (ostream& output, GiangVien& gv);
};
istream& operator >> (istream& input, GiangVien& gv){
	static int count = 1;
	getline(input, gv.HoTen);
	getline(input, gv.BoMon);
	if(count < 10) gv.MaGiangVien = gv.MaGiangVien + "0" + to_string(count);
	else gv.MaGiangVien += to_string(count);
	count++;
	gv.MaBoMon = GiangVien::Tach_MaBoBon(gv.BoMon);
	return input;
}
string GiangVien::Tach_MaBoBon(string &x){
	for(int i = 0; i < x.size(); i++){
		if(x[i] >='a' && x[i] <= 'z' ) x[i]-=32;
	}
	string a = "";
	a += x[0];
	for(int i = 1; i < x.size()-1; i++){
		if(x[i] == ' ' && x[i+1] != ' ' ){
			a += x[i+1];
		}
	}
	return a;
}
ostream& operator << (ostream& output, GiangVien& gv){
	output << gv.MaGiangVien << " " << gv.HoTen << " " << gv.MaBoMon << endl;
	return output;
}
string Tach(string &x){
	for(int i = 0; i < x.size(); i++){
		if(x[i] >='a' && x[i] <= 'z' ) x[i]-=32;
	}
	string a = "";
	a += x[0];
	for(int i = 1; i < x.size()-1; i++){
		if(x[i] == ' ' && x[i+1] != ' ' ){
			a += x[i+1];
		}
	}
	return a;
}
int main(){
	int N;
	cin >> N;
	scanf("\n");
	GiangVien arr[N+1];
	for(int i = 0; i < N; i++){
		cin >> arr[i];
	}
	int Q;
	cin >> Q;
	string str;
	scanf("\n");
	for(int i = 0; i < Q; i++){
		getline(cin, str);
		str = Tach(str);
		cout << "DANH SACH GIANG VIEN BO MON " << str << ":\n";
		for(int j = 0; j < N; j++){
			if(arr[j].MaBoMon.compare(str) == 0) cout <<  arr[j];
		}
	}
	return 0;
}
