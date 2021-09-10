#include<iostream>

int main(){
	bool check[1000000];
	int t;
	std::cin >> t;
	for(int i=2; i<=1000000; i++) check[i]=true;
	for(int i=2; i<=1000000; i++){
		if(check[i]==true){
			for(int j=2*i; j<=1000000; j+=i) check[j] = false;
		}
	}
	
	while(t--){
		int n;
		std::cin >> n;
		std::cout << "1 ";
		for(int i=2; i<=n; i++){
			if(check[i]) {
				std::cout << i << " ";
			}else if(i%2==0) std::cout << "2 ";
			else{
				int j=2;
				while(i%j!=0){
					j++;
					if(check[j] && i%j==0) {
						std::cout << j << " ";
						break;
					}		
				}
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
