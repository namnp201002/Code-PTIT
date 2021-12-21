#include<iostream>
#include<math.h>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int a[10000];
		int temp = 0;
		int n, k;
		std::cin >> n >> k;
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
		if(k-1<=temp-1){
			std::cout << a[k-1] << std::endl;
		}else std::cout<<"-1\n";
	}
	return 0;
}

