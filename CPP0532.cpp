#include<iostream>
#include<math.h>
#include<iomanip>
struct OXY{
	int x, y;
};
double DienTich(int x1, int y1, int x2, int y2, int x3, int y3){
	double a = (double)sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	double b = (double)sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
	double c = (double)sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
	return sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;
}
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		struct OXY ToaDo[n+1];
		for(int i=0; i<n; i++){
			std::cin >> ToaDo[i].x >> ToaDo[i].y;
		}
		double Sum = 0;
		for(int i=1; i<n-1; i++){
			Sum+=DienTich(ToaDo[0].x, ToaDo[0].y, ToaDo[i].x, ToaDo[i].y, ToaDo[i+1].x, ToaDo[i+1].y);
		}
		std::cout << std::fixed << std::setprecision(3) << Sum << std::endl;
	}
	return 0;
}
