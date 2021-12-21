#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
class SinhVien{
public:
	string MSV;
	string Name;
	string Lop;
	string Email;
	friend istream& operator >> (istream& in, SinhVien& sv);
	friend ostream& operator << (ostream& out, SinhVien& sv);
};
istream& operator >> (istream& in, SinhVien& sv){
	in >> sv.MSV;
	scanf("\n");
	getline(in, sv.Name);
	in >> sv.Lop;
	in >> sv.Email;
	return in;
}
bool Compare(const SinhVien &a, const SinhVien &b){
	return a.MSV.compare(b.MSV) < 0;
}
int main(){
	SinhVien sv;
	vector<SinhVien> v;
	while(cin >> sv){
		v.push_back(sv);
	}
	sort(v.begin(), v.end(), Compare);
	for(int i = 0; i < v.size(); i++){
		cout << v[i].MSV << " " << v[i].Name << " ";
		cout << v[i].Lop << " " <<v[i].Email << endl; 
	}
	return 0;
}
