#include<iostream>
#include<math.h>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int dem=0;
		while(n%2==0){
			dem++;
			n/=2;
			if(n%2!=0) std::cout << "2 " << dem << " ";
		}
		for(int i=3; i <= sqrt(n); i+=2){
			int dem=0;
			while(n%i==0){
				dem++;
				n/=i;
				if(n%i!=0) std::cout<< i << " " << dem << " ";
			}
		}
		if(n>2) std::cout<<n<<" 1";
		std::cout << std::endl;
	}
	return 0;
}
