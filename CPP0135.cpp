#include<iostream>
bool check[10000];
int main(){
	int t;
	std::cin >> t;
	for(int i=2; i<=10000; i++){
		check[i] = true;
	}
	for(int i=2; i<=10000; i++){
		if(check[i]==true){
			for(int j=i*2; j<=10000; j+=i){
				check[j]=false;
			}
		}
	}
	while(t--){
		int n;
		std::cin >> n;
		for(int i=2; i<=n; i++){
			long long c =i*i;
			if(check[i]==true && c<=n) std::cout << c << " ";
			else if(c>n) break;
		}
		std::cout<<std::endl;
	}
	return 0;
}
