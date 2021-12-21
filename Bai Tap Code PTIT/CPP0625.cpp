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
	string Ten;
	string MaGiangVien = "GV";
	static string Tach_Ten(string a);
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
	gv.Ten = GiangVien::Tach_Ten(gv.HoTen);
	gv.MaBoMon = GiangVien::Tach_MaBoBon(gv.BoMon);
	return input;
}
string GiangVien::Tach_Ten(string a){
	string s = a;
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i]+=32;
	}
	stringstream ss(s);
	string token;
	while( ss >> token ){
	}
	return token;
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
bool compare(GiangVien &a, GiangVien &b){
	if(a.Ten.compare(b.Ten) < 0) return true;
	if(a.Ten.compare(b.Ten) == 0 && a.MaGiangVien.compare(b.MaGiangVien) < 0) return true;
	return false; 
}
void sapxep(GiangVien arr[], int N){
	sort(arr, arr+N, compare);
}
ostream& operator << (ostream& output, GiangVien& gv){
	output << gv.MaGiangVien << " " << gv.HoTen << " " << gv.MaBoMon << endl;
	return output;
}
int main(){
	int N;
	cin >> N;
	scanf("\n");
	GiangVien arr[N+1];
	for(int i = 0; i < N; i++){
		cin >> arr[i];
	}
	sapxep(arr, N);
	for(int i = 0; i < N; i++){
		cout << arr[i];
	}
	return 0;
}
