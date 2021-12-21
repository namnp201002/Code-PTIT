#include<bits/stdc++.h>
#include <tr1/unordered_map>
using namespace std::tr1;
int main(){
	int t;
	std::cin >>t;
	while(t--){
		unordered_map<int, int> m;
		int n, sum;
		std::cin >> n >> sum;
		int a[n+5];
		
		for(int i=0; i<n; i++){
			std::cin >> a[i];
			m[a[i]]++;
		}
		int count=0;
		for(int i=0; i<n; i++){
			count += m[sum - a[i]];
			if(sum-a[i]==a[i]){
				count--;
			}
		}
		std::cout << count/2 <<std::endl;
	}
	return 0;
}
