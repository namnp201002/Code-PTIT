#include<iostream>
#include<math.h>
int SumNT(int n){
	int sum = 0 ;
	while(n%2==0){
		sum += 2;
		n/=2;
	}
	for(int i=3; i<=sqrt(n); i+=2){
		while(n%i==0){
			int j = i;
			while(j>0){
				sum += j%10;
				j/=10;
			}
			n/=i;
			
		}
	}
	if(n>2){
		while(n>0){
			sum+= n%10;
			n/=10;
		}
	}
	return sum;
}
int TongCS(int n){
	int sum = 0;
	while(n>0){
		sum += n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int t;
	std::cin >> t;
	bool check[100000];
	for(int i=2; i<=100000; i++) check[i]=true;
	for(int i=2; i<=100000; i++){
		if(check[i]==true){
			for(int j=2*i; j<=100000; j+=i) check[j] = false;
		}
	}
	while(t--){
		int n;
		std::cin >> n;
		if(check[n]==false && SumNT(n)==TongCS(n) )	std::cout << "YES\n";
		else std::cout << "NO\n";
	}
	return 0;
}
