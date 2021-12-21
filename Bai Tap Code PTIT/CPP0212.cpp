#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n, x;
		std::cin >> n >> x;
		int a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		long long result = 0;
		long long modul = 1e9+7;
		for(int i=0; i<n; i++){
			long long s = 1;
			for(int j=0; j<n-i-1; j++){
				s = (s*x)%modul;
			}
			result+=s*a[i];
			if(result>modul) result = result%modul;
		}
		
		std::cout << result <<std::endl;
	}
}
