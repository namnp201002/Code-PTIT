#include<iostream>
int main(){
	int t;
	std::cin >> t;
	bool check[100000];
	for(int i=2; i<=100000; i++) check[i]=true;
	for(int i=2; i<=100000; i++){
		if(check[i]==true){
			for(int j=2*i; j<=100000; j+=i) check[j]=false;
		}
	}
	while(t--){
		int L, R;
		std::cin >> L >> R;
		int count =0;
		for(int i=L; i<=R; i++){
			if(check[i]) count ++;
		}
		std::cout << count << std::endl;
	}
	return 0;
}
