#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string MSV;
		string Ho_Ten;
		string Lop;
		string Ngay_Sinh;
		float GPA;
		SinhVien(){
			this->MSV = "";
			this->Ho_Ten = "";
			this->Lop = "";
			this->Ngay_Sinh = "";
			this->GPA = 0;
		}
		void Chuan_Hoa_Ho_Ten(string &s);
		void Chuan_Hoa_Ngay_Sinh(string &s);
		friend istream& operator >> (istream& in, SinhVien& sv);
		friend ostream& operator << (ostream& out, SinhVien& sv);
};
istream& operator >> (istream& in, SinhVien& sv){
	scanf("\n");
	getline(in, sv.Ho_Ten);
	getline(in, sv.Lop);
	getline(in, sv.Ngay_Sinh);
	in >> sv.GPA;
	return in;
}
ostream &operator << (ostream& out, SinhVien& sv){
	sv.Chuan_Hoa_Ho_Ten(sv.Ho_Ten);
	sv.Chuan_Hoa_Ngay_Sinh(sv.Ngay_Sinh);
	out << sv.MSV << " " << sv.Ho_Ten << sv.Lop << " ";
	out << sv.Ngay_Sinh << " ";
	out << fixed << setprecision(2) << sv.GPA << endl;
	return out;
}
void SinhVien::Chuan_Hoa_Ngay_Sinh(string &s){
	if (s[2] != '/')
        s.insert(0, "0");
    if (s[5] != '/')
        s.insert(3, "0");
}
void SinhVien::Chuan_Hoa_Ho_Ten(string &s){
	for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    stringstream ss(s);
    string token, s0;
    while (ss >> token)
    {
        token[0] -= 32;
        s0 += token;
        s0 += ' ';
    }
    s = s0;
}
bool checkSort(SinhVien &a, SinhVien &b){
	return a.GPA > b.GPA;
}
void sapxep(SinhVien ds[], int &N){
	for(int i = 0; i < N; i++){
		if(i + 1 < 10) {
			ds[i].MSV = ds[i].MSV + "B20DCCN00";
			ds[i].MSV += (i + 1 + 48);
		}else ds[i].MSV = ds[i].MSV + "B20DCCN0" + to_string(i + 1);
	}
	sort(ds, ds +  N, checkSort);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
