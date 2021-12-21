#include<iostream>
#include<map>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		std::map<int,int> m;
		std::map<int,int>::iterator it;
		int n, k;
		std::cin >> n >> k;
		int a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
			m[a[i]]++;
		}
		if(m.find(k)==m.end()){
			std::cout << "-1" << std::endl;
		}else{
			std::cout << m[k] <<std::endl;
		}
	}
	return 0;
}
