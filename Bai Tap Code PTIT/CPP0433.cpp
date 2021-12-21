#include<bits/stdc++.h>
bool checkSort(const std::pair<int,int> &a,const std::pair<int,int> &b){
	return a.second > b.second;
}
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int a[n+5];
		std::map<int,int> m;
		std::map<int,int>::iterator it;
		std::vector<std::pair<int,int> > v;
		for(int i=0; i<n; i++){
			std::cin >> a[i];
			m[a[i]]++;
		}
		for(it = m.begin() ; it!= m.end(); it++){
			v.push_back(std::make_pair(it->first, it->second));
		}
		std::stable_sort(v.begin(), v.end(), checkSort);
		for(int i=0; i<v.size(); i++){
			for(int j=0; j< m[v[i].first]; j++) std::cout << v[i].first << " ";
		}
		std::cout << std::endl;
	}
}
