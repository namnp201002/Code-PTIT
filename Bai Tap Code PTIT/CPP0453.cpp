#include<iostream>
#include<map>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n, k;
		std::cin >> n >> k;
		int a[n+5];
		std::map<int, int> m;
		std::map<int,int>::iterator it;
		for(int i=0; i<n; i++){
			std::cin >> a[i];
			m[a[i]]++;
		}
		int count =0;
		for(it = m.begin(); it!=m.end(); it++){
			count += it->second;
			if(count >= k){
				std::cout << it->first;
				break;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
