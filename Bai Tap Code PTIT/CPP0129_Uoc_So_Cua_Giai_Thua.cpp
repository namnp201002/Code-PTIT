#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n, p;
		std::cin >> n >> p;
		int count = 0;
		for(int i = 2; i <= n ; i++){
			if(i%p==0){
				int j = i;
				while(j%p==0) {
					count ++;
					j/=p;
				}
			}
		}
		std::cout << count <<std::endl;
	}
	return 0;
}
