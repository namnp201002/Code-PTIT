#include<iostream>
#include<string.h>
#include<iomanip>
#include<vector>
#include<algorithm>
struct MatHang{
	std::string Ten, Nhom;
	float Mua, Ban;
	int Stt;
	float LoiNhuan;
	void output(){
		std::cout << Stt << " " << Ten << " " << Nhom << " ";
		std::cout << std::fixed << std::setprecision(2) << LoiNhuan << std::endl;
	}
};
bool checkSort(MatHang a, MatHang b){
	return a.LoiNhuan > b.LoiNhuan;
}
int main(){
	int n;
	std::cin >> n;
	std::vector<MatHang> arr(n);
	for(int i=0; i<n; i++){
		std::cin.ignore();
		getline(std::cin, arr[i].Ten);
		getline(std::cin, arr[i].Nhom);
		std::cin >> arr[i].Mua >> arr[i].Ban;
		arr[i].Stt = i+1;
		arr[i].LoiNhuan = arr[i].Ban - arr[i].Mua;
	}
	std::sort(arr.begin(), arr.end(), checkSort);
	for(int i =0; i<n; i++){
		arr[i].output();
	}
	return 0;
}
