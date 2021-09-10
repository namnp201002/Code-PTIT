#include<iostream>
#include<math.h>
#include<iomanip>
#define PI 3.141592653589793238
int main(){
	int t;
	std::cin >> t;
	while(t--){
		double x1, y1, x2, y2, x3, y3;
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double a = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
		double b = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
		double c = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
		if(a+b>c && b+c>a && c+a>b){
			double s = sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
			double R = a*b*c/(4*s);
			double D = R*R*PI;
			std::cout << std::fixed << std::setprecision(3) << D << std::endl;
		}else{
			std::cout << "INVALID\n";
		}
	}
	return 0;
}
