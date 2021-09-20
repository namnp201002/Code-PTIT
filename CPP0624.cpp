#include<iostream>
#include<string.h>
using namespace std;
class SinhVien{
public:
	string Nganh = "";
	string MSV;
	string Ho_Ten;
	string Lop;
	string E_Mail;
	friend istream& operator >> (istream& input, SinhVien& sv);
	friend ostream& operator << (ostream& output, SinhVien& sv);
};
istream& operator >> (istream& input, SinhVien& sv){
	input >> sv.MSV;
	scanf("\n");
	getline(input, sv.Ho_Ten);
	input >> sv.Lop >> sv.E_Mail;
	for(int i = 3; i <= 6; i++){
		sv.Nganh += sv.MSV[i];
	}
	return input;
}
ostream& operator << (ostream& output, SinhVien& sv){
	output << sv.MSV << " " << sv.Ho_Ten << " " ;
	output << sv.Lop << " " << sv.E_Mail << endl;
	return output;
}
bool check(SinhVien &a){
	if(a.Nganh == "DCAT" || a.Nganh=="DCCN"){
		if(a.Lop[0] == 'E') return false;
	}
	return true;
}
int main(){
	int N;
	cin >> N;
	SinhVien arr[N+1];
	for(int i = 0; i < N; i++){
		cin >> arr[i];
	}
	int Q;
	cin >> Q;
	string s;
	scanf("\n");
	for(int i = 0; i < Q; i++){
		getline(cin, s);
		string Ma_Nganh = "DC";
		// Convert thanh chu viet hoa
		for(int j = 0; j < s.size(); j++){
			if(s[j] <= 'z' && s[j] >= 'a') s[j]-=32;
		}
		Ma_Nganh += s[0];
		// Tach lay ma nganh
		for(int j = 1; j < s.size() - 1; j++){
			if(s[j] == ' ' && s[j+1] != ' ') Ma_Nganh += s[j+1];
			if(Ma_Nganh.size() == 4) break;
		}
		//in ra danh sach
		cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
		for(int j = 0; j < N; j++){
			if(arr[j].Nganh.compare(Ma_Nganh) == 0 && check(arr[j])){
				cout << arr[j];
			}
		}
	}
	return 0;
}
