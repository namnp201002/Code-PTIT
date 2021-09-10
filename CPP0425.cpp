#include<iostream>
#include<algorithm>
#include<stack>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int a[n+5], b[n], c[n];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		std::sort(a, a+n);
		int count1=0, count2=0;
		if(n%2==0){
			for(int i=0; i<n/2; i++) b[count1++]=a[i];
			for(int i=n/2; i<n; i++) c[count2++] = a[i];
			for(int i=0; i<count1; i++){
				std::cout << b[i] << " " << c[i] << " ";
			}
		}else{
			for(int i=0; i<=n/2; i++) b[count1++]=a[i];
			for(int i=n/2+1; i<n; i++) c[count2++] = a[i];
			for(int i=0; i<count2; i++){
				std::cout << b[i] << " " << c[i] << " ";
			}
			std::cout << b[count1-1];
		}
		std::cout << std::endl;
	}
}
