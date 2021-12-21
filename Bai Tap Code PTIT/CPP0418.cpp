#include<iostream>
#include<map>
#include<set>

int main(){
	int t;
	std::cin >> t;
	while(t--){
		int m, n;
		std::cin >> m >> n;
		int a[m+5], b[n+5];
		std::set<int> s;
		std::set<int>::iterator x;
		std::map<int,int> p;
		std::map<int,int>::iterator y;
		for(int i=0; i<m; i++){
			std::cin >> a[i];
			s.insert(a[i]);
			p[a[i]]++;
		}
		for(int i=0; i<n; i++){
			std::cin >> b[i];
			s.insert(b[i]);
			p[b[i]]++;
		}
		for( x = s.begin(); x!=s.end(); x++){
			std::cout << *x << " ";
		}
		std::cout << std::endl;
		for(y = p.begin(); y != p.end(); y++){
			if(y->second >1) std::cout << y->first << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
