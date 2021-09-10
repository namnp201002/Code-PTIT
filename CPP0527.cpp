#include<iostream>
#include<vector>
#include<algorithm>
struct Time{
	int Gio, Phut, Giay;
	long s;
};
bool DieuKien(Time a, Time b){
	return a.s < b.s;
}
int main(){
	int n;
	std::cin >> n;
	std::vector<Time> arr(n);
	for(int i=0; i<n; i++){
		std::cin >> arr[i].Gio >> arr[i].Phut >> arr[i].Giay;
		arr[i].s = arr[i].Gio*3600 + arr[i].Phut*60 + arr[i].Giay;
	}
	std::sort(arr.begin(), arr.end(), DieuKien);
	for(int i = 0; i < n; i++){
		std::cout << arr[i].Gio << " " << arr[i].Phut << " " << arr[i].Giay << std::endl;
	}
	return 0;
}
