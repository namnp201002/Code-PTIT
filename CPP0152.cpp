#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int m, n;
		std::cin >> m>>n;
		int check=0;
		for(int i=0; i<=n-1; i++){
			if((m*i)%n==1){
				check ++;
				std::cout<<i;
				break;
			}
		}
		if(check==0) std::cout<<"-1";
		std::cout<<"\n";
	}
}
