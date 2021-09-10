#include<iostream>
#include<climits>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long n;
		std::cin >> n;
		long a[n+5];
		long min1 = LONG_MAX, min2 = LONG_MAX;
		for(long i=0; i<n; i++){
			std::cin >> a[i];
			if(a[i]<min1){
				min1 = a[i];
			}
		}
		for(int i=0; i<n; i++){
			if(a[i]==min1){
				a[i]=0;
			}
		}
		int check=0;
		for(int i=0; i<n; i++){
			if(a[i]==0) continue;
			if(a[i]<min2){
				min2 = a[i];
				check++;
			}
		}
		if(check==0){
			std::cout << "-1\n";
		}else{
			std::cout << min1 << " " << min2 << std::endl;
		}
	}
	return 0;
}
