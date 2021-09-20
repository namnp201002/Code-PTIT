#include<iostream>
#include<string.h>
using namespace std;
class SinhVien{
public:
	string Khoa;
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
	sv.Khoa = "20";
	for(int i = 0; i < sv.Lop.size(); i++){
		if(sv.Lop[i] >= '0' && sv.Lop[i] <= '9'){
			sv.Khoa += sv.Lop[i];
		}
		if(sv.Khoa.size() == 4) break;
	}
	return in;
}
ostream& operator << (ostream& out, SinhVien& sv){
	out << sv.MSV << " " << sv.Name << " ";
	out << sv.Lop << " " << sv.Email << endl;
	return out;
}
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
		cout << "DANH SACH SINH VIEN KHOA " << Truy_Van << ":\n";
		for(int j = 0; j < N; j++){
			if(arr[j].Khoa.compare(Truy_Van)==0){
				cout << arr[j];
			}
		}
	}
	return 0;
}
