#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long long n;
		std::cin >> n;
		if(n==6 || n== 28 || n== 496 || n==8128 || n== 33550336 || n==8589869056 || n==137438691328
				|| n==2305843008139952128){
					std::cout << "1\n";
				}else std::cout << "0\n";
	}
	return 0;
}
