#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n, Q;
		std::cin >> n >> Q;
		int a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		int b[Q][2];
		for(int i=0; i<Q ; i++){
			for(int j=0; j<2; j++){
				std::cin >> b[i][j];
			}
		}
		for(int i=0; i<Q; i++){
			long sum = 0;
			for(int j=b[i][0]-1; j<b[i][1]; j++){
				sum+=a[j];
			}
			std::cout << sum << std::endl;
		}
	}
	return 0;
}
