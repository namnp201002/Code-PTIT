#include<iostream>
int main(){
	int t;
	std::cin >> t;
	int F[25];
	int check[100000] = {0};
	F[1]=0, F[2]=1;
	check[0]=1, check[1]=1;
	for(int i=3; i<25; i++){
		F[i]= F[i-1] + F[i-2];
		check[F[i]] = 1;
	}
	while(t--){
		int n;
		std::cin >> n;
		int a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
			if(check[a[i]]==1) std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
