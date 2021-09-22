#include<iostream>
#include<math.h>
// 2 3 4 6 9 12 18 36
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long n;
		std::cin >> n;
		int count = 0;
		for(int i = 2; i<sqrt(n); i++){
			if(n%i==0){
				if(i%2==0) count ++;
				if((n/i)%2==0) count++;
			}
		}
		if(n%2==0) count ++;
		if((int)sqrt(n)==(float)sqrt(n) && (int)sqrt(n)%2==0) count++; 
		std::cout << count <<std::endl;
	}
	return 0;
}
