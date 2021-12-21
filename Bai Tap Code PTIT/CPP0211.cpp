#include<iostream>
struct Mang{
	int Tong;
};
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long n;
		std::cin >> n;
		long a[n+5];
		for(long i=0; i<n; i++){
			std::cin >> a[i];
		}
		long max1 = 0, max2 = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<i; j++){
				if((a[i]-a[j])>=max1 && (i-j)>=max2){
					max2=i-j;
				}
			}
		}
		std::cout << max2 << std::endl;
	}
	return 0;
}
