#include<iostream>
#include<map>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int arr[n+5];
		std::map<int, int> m;
		for(int i=0; i<n; i++){
			std::cin >> arr[i];
			m[arr[i]]++;
		}
		int count = 0;
		for(int i=0; i<n ; i++){
			if(m[arr[i]]>1) count ++;
		}
		std::cout << count << std::endl;
	}
	return 0;
}
