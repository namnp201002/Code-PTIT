#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int M, N, A, B;
		std::cin >> M >> N >> A >> B;
		int count = 0;
		for(int i=M; i<=N; i++){
			if(i%A==0 || i%B==0) count++;
		}
		std::cout << count <<std::endl;
	}
	return 0;
}
