#include<iostream>
#include<math.h>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long long a[10000];
		int temp = 0;
		long long n;
		std::cin >> n;
		while(n%2==0){
			a[temp] = 2;
			temp++;
			n/=2;
		}
		for(int i=3; i<=sqrt(n); i+=2){
			while(n%i==0){
				a[temp] = i;
				temp++;
				n/=i;
			}
		}
		if(n>2){
			a[temp] = n;
			temp++;
		}
		std::cout << a[temp-1] << std::endl;
	}
	return 0;
}
