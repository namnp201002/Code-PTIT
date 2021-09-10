#include<iostream>
int main(){
	int t;
	std::cin>>t;
	while(t--){
		int a, b, c;
		std::cin >> a>>b>>c;
		long result = 1;
		for(int i=1; i<=b; i++){
			result = ((result*a)%c)%(1000000000+7);
		}
		std::cout<<result <<std::endl;
	}
	return 0;
}
