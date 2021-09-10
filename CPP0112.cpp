#include<iostream>
#include<iomanip>
#include<math.h>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		double a, b, c, d;
		std::cin >> a >> b >> c >> d;
		double kc = sqrt((a-c)*(a-c) + (b-d)*(b-d));
		std::cout << std::setprecision(4) << std::fixed << kc <<std::endl;
	}
	return 0;
}
