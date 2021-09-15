#include<iostream>
#include<string.h>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int c = 0;
class SinhVien{
	public:
		string HoTen;
		string MSV;
		string Lop;
		char NgaySinh[10];
		float GPA;
		SinhVien(){
			this->HoTen = "";
			this->MSV = "";
			this->Lop = "";
			this->GPA = 0;
		}
		static string ChuanHoaNS(char s[]);
		friend istream& operator >> (istream& input, SinhVien& ds){
			input.ignore();
			getline(input, ds.HoTen);
			getline(input, ds.Lop);
			input >> ds.NgaySinh;
			input >> ds.GPA;
			return input;
		}
		friend ostream& operator << (ostream& output, SinhVien& ds){
			++c;
			if(c < 10) output << "B20DCCN00" << c;
			else output << "B20DCCN0" << c;
			output << " " << ds.HoTen << " ";
			output << ds.Lop << " " << ChuanHoaNS(ds.NgaySinh) << " ";
			output << fixed << setprecision(2) << ds.GPA <<  endl;
			return output;
		}
		
};
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
