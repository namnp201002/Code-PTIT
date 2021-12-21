#include<iostream>
int main(){
	int t;
	std::cin >> t;
	bool check[1000000];
	for(int i=2; i<=1000000; i++) check[i] = true;
	for(int i=2; i<=1000000; i++){
		if(check[i]==true){
			for(int j=2*i; j<=1000000; j+=i){
				check[j]=false;
			}
		}
	}
	while(t--){
		int n;
		std::cin >> n;
		int mark=0;
		for(int i=2; i<=n; i++){
			if(check[i]==true && check[n-i]==true){
				std::cout << i <<" "<< n-i;
				mark++;
				break;
			}
		}
		if(mark==0) std::cout << "-1";
		std::cout << std::endl;
	}
	return 0;
}
