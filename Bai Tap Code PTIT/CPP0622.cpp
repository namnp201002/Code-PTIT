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
ostream& operator << (ostream& out, SinhVien& sv){
	out << sv.MSV << " " << sv.Name << " ";
	out << sv.Lop << " " << sv.Email << endl;
	return out;
}
//bool Compare(const SinhVien &a, const SinhVien &b){
//	return a.MSV.compare(b.MSV) < 0;
//}
int main(){
	int N;
	cin >> N;
	SinhVien arr[N+1];
	for(int i = 0; i < N ; i++){
		cin >> arr[i];
	}
	int Q;
	cin >> Q;
	string Truy_Van;
	for(int i = 0; i < Q; i++){
		cin >> Truy_Van;
		cout << "DANH SACH SINH VIEN LOP " << Truy_Van << ":\n";
		for(int j = 0; j < N; j++){
			if(arr[j].Lop.compare(Truy_Van)==0){
				cout << arr[j];
			}
		}
	}
	return 0;
}
