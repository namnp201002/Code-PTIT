#include<iostream>
#include<string>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long n;
		std::cin >> n;
		int sum = 0;
		while(n>0){
			sum += n%10;
			n/=10;
			if(n<=9 && sum>=10){
				n=sum+n;
				sum=0;
			}
		}
		std::cout << sum <<std::endl;
	}
	return 0;
}
