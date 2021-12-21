#include<iostream>
#include<set>
int main(){
	int n;
	std::cin >> n;
	int a[n+5];
	std::set<int> s;
	std::set<int>::iterator it;
	for(int i=0; i<n; i++){
		std::cin >> a[i];
		s.insert(a[i]);
	}
	for(it=s.begin(); it!=s.end(); it++){
		std::cout << *it << " ";
	}
	return 0;
}
