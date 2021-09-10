#include<iostream>
#include<math.h>
int main(){
	bool check[1000000];
	for(int i=2; i<=1000000; i++) check[i] = true;
	for(int i=2; i<=1000000; i++){
		if(check[i]==true){
			for(int j=2*i; j<=1000000; j+=i) check[j]= false;
		}
	}
	int t;
	std::cin >> t;
	while(t--){
		long long L, R;
		std::cin >> L >> R;
		int count  = 0;
		for(int i=L; i<=sqrt(R); i++){
			if(check[i]==true && i*i <= R) count++;
		}
		std::cout << count << std::endl;
	}
	return 0;
}
