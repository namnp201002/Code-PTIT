#include<iostream>
#include<vector>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		std::vector<long long> arr;
		std::vector<long long>::iterator it;
		int a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		arr.push_back(a[0]*a[1]);
		for(int i=1; i<n-1; i++){
			arr.push_back(a[i-1]*a[i+1]);
		}
		arr.push_back(a[n-1]*a[n-2]);
		for(it = arr.begin(); it!=arr.end(); it++){
			std::cout << *it << " ";
		}
		std::cout <<std::endl;
	}
	return 0;
}
