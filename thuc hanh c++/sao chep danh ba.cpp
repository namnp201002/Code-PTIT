#include<bits/stdc++.h>
using namespace std;

struct DanhBa {
	string ten;
	string name;
	string ngay;
	string sdt;
};

bool cmp(DanhBa a, DanhBa b) {
	if(a.ten!=b.ten) {
		return a.ten<b.ten;
	} else {
		return a.name<b.name;
	}
}

int main() {
	ifstream fin;
	fin.open("SOTAY.txt");
	string s, ngay;
	DanhBa d[1000];
	int i=0;
	while(getline(fin, s)) {
		if(s[7]=='/') {
			ngay = s;
			ngay=ngay.substr(6, 15);
		} else {
			d[i].name=s;
			getline(fin, d[i].sdt);
			d[i].ngay=ngay;
			stringstream s(d[i].name);
			while(s>>d[i].ten) {
				continue;
			}
			i++;
		}
	}
	fin.close();
	sort(d,d+i,cmp);
	
	ofstream fout;
	fout.open("DIENTHOAI.txt");
	for(int j=0; j<i; j++){
		fout << d[j].name <<": "<< d[j].sdt <<" "<< d[j].ngay << endl;
	}
	fout.close();
}
/*
Ngay 15/11/2021
Nguyen Van A
0914141581
Nguyen Van B
0921241515
Ngay 16/11/2021
Tran Van C
0935141141
*/
