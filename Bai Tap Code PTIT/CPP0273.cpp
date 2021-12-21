#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int a[n+5];
		long sum1 = 0;
		for(int i = 0; i < n ; i++){
			std::cin >> a[i];
			sum1 += a[i];
		}
		
		int check = 0;
		long sum2 = 0;
		for(int i=0; i<n; i++){
			sum1-=a[i];
			if(sum2 == sum1){
				check++;
				std::cout << i+1 << std::endl;
				break;
			}
			sum2+=a[i];
		}
		if(check == 0) std::cout << "-1\n";
	}
	return 0;
}
