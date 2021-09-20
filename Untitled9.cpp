#include<iostream>
using namespace std;
class SinhVien{
	public:
		string Name;
		string Date;
		SinhVien(){
			this->Name = Name;
			this->Date = Date;	
		};
};
void nhap(SinhVien &a){
	getline(cin, a.Name);
	getline(cin, a.Date);
}
void in(SinhVien a){
	cout << a.Name << endl << a.Date;
}
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
