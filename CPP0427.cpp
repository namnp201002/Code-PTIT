#include<iostream>
#include<algorithm>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		for(int i=0; i<n-1; i++){
			if(a[i]==a[i+1] && a[i+1]!=0){
				a[i]*=2;
				a[i+1]=0;
			}	
		}
		int count = 0;
		for(int i=0; i<n; i++){
			if(a[i]!=0){
				a[count++] = a[i];
			}
		}
		for(int i=0; i<count ; i++){
			std::cout << a[i] << " ";
		}
		for(int i=0; i<n-count; i++){
			std::cout << "0 ";
		}
		std::cout << std::endl;
	}
}
