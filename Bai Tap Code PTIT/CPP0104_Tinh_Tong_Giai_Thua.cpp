#include<iostream>
int main(){
	int n;
	std::cin >> n;
	long long sum = 0, f=1;
	for(int i=1; i<=n; i++){
		f = f*i;
		sum += f;
	}
	std::cout << sum ;
	return 0;
}
