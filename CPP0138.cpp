#include<iostream>
int main(){
	int t;
	std::cin>>t;
	while(t--){
		int n;
		std::cin >> n;
		bool check[10000];
		for(int i=2; i<=10000; i++) check[i] = true;
		for(int i=2; i<10000; i++){
			if(check[i]==true){
				for(int j=i*2; j<=10000;j+=i){
					check[j] = false;
				}
			}
		}
		for(int i=2; i<=n; i++){
			if(check[i]==true && check[n-i]==true) {
				std::cout<<i<<" "<<n-i;
				break;
			}
		}   
		std::cout<<std::endl;                    		
	}
}
