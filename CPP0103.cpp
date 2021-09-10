#include<iostream>
#include<iomanip>
int main(){
	int n;
	std::cin >> n;
	double s = 0;
	for(int i=1; i<=n; i++){
		s += (double)1/i;
	}
	std::cout << std::setprecision(4) << std::fixed << s ;
	return 0;
}
