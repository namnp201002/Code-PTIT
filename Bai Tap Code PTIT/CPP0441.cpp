#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n, k;
		std::cin >> n >> k;
		int a[n+5];
		int check = 0;
		for(int i=1; i<=n; i++){
			std::cin >> a[i];
		}
		for(int i=1; i<=n; i++){
			if(a[i]==k){
				check++;
				break;
			}
		}
		if(check == 0) std::cout << "-1";
		else std::cout << "1";
		std::cout<<std::endl;
	}
	return 0;
}
