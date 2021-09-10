#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<math.h>
bool sortByFirst( const std::pair<int,int> &a, const std::pair<int,int> &b){
	return (a.first < b.first);
}
int main(){
	int t;
	std::cin >> t;
	while(t--){
		std::vector<std::pair<int,int> > v;
		int n, X;
		std::cin >> n >> X;
		int a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
			v.push_back( std::make_pair(abs(a[i]-X), a[i]));
		}
		std::stable_sort(v.begin(), v.end(),sortByFirst);
		for(int i=0; i<n; i++){
			std::cout <<v[i].second << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
