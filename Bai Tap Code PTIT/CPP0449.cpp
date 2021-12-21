#include<iostream>
#include <tr1/unordered_set>
using namespace std::tr1;
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n, x;
		std::cin >> n >> x;
		int a[n+1];
		unordered_set<int> s;
		for(int i=0; i<n; i++){
			std::cin >> a[i];
			s.insert(a[i]);
		}
		int check=0;
		for(int i=0; i<n; i++){
			int temp = a[i] + x;
			if(s.find(temp)!= s.end()){
				check++;
				break;
			}
		}
		if(check==0) std::cout << "-1\n";
		else std::cout << "1\n";
	}
	return 0;
}
