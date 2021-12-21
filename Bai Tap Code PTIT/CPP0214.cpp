#include<iostream>
#include<deque>
void Ktra(long a[], long n, long k){
	std::deque<int> Q(k);
	for(int i=0; i<k; i++){
		while(!Q.empty() && a[i]>=a[Q.back()]){
			Q.pop_back();
		}
		Q.push_back(i);
	}
	for(int i=k; i<n; i++){
		std::cout << a[Q.front()]<< " ";
		while(!Q.empty() && i-k>=Q.front()){
			Q.pop_front();
		}
		while(!Q.empty() && a[i]>=a[Q.back()]){
			Q.pop_back();
		}
		Q.push_back(i);
	}
	std::cout << a[Q.front()];
}
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long n, k;
		std::cin >> n >> k;
		long a[n+5];
		for(long i=0; i<n; i++){
			std::cin >> a[i];
		}
		Ktra(a,n,k);
		std::cout << std::endl;
	}
	return 0;
}
