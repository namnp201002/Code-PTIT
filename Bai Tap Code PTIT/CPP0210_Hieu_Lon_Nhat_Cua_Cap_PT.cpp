#include<iostream>
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
		int check=0;
		for(int i=0; i<n-1; i++){
			if(a[i]<a[i+1]){
				check++;
				break;
			}
		}
		if(check!=0){
			int max=0;
			for(int i=1; i<n; i++){
				for(int j=0; j<i; j++){
					if(a[i]-a[j]>max){
						max = a[i]-a[j];
					}
				}
			}
			std::cout << max <<std::endl;
		}else std::cout << "-1\n";
	}
	return 0;
}
