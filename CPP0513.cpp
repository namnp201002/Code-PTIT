#include <iostream>
#include <string.h>
#include <iomanip>
#include <vector>
using namespace std;
struct SinhVien
{
	string Name;
	char Lop[20], NgaySinh[15];
	float GPA;
	void input()
	{
		getline(std::cin, Name);
		scanf("%s", Lop);
		scanf("%s", NgaySinh);
		cin >> GPA;
	}
};
void ChuanHoaNgaySinh(char s[])
{
	char *p = strtok(s, "/");
	int count = 0;
	while (p != NULL)
	{
		if (strlen(p) == 1)
		{
			cout << "0" << p;
		}
		else
			cout << p;
		if (count == 2)
			break;
		cout << "/";
		count++;
		p = strtok(NULL, "/");
	}
}
void MaSinhVien(int i)
{
	cout << "B20DCCN0";
	if (i + 1 < 10)
		cout << "0" << i + 1;
	else
		cout << i + 1;
}
void nhap(SinhVien ds[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cin.ignore();
		ds[i].input();
	}
}
void in(SinhVien ds[], int N)
{
	for (int i = 0; i < N; i++)
	{
		MaSinhVien(i);
		cout << " " << ds[i].Name << " " << ds[i].Lop;
		cout << " ";
		ChuanHoaNgaySinh(ds[i].NgaySinh);
		cout << " ";
		cout << fixed << setprecision(2) << ds[i].GPA << endl;
	}
}
int main()
{
	struct SinhVien ds[50];
	int N;
	cin >> N;
	nhap(ds, N);
	in(ds, N);
	return 0;
}
