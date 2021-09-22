#include<iostream>
#include<math.h>
int snt(long n){
	if(n<2) return 0;
	if(n<=3) return 1;
	if(n%2==0 || n%3==0) return 0;
	for(int i=5; i<=sqrt(n); i+=6){
		if(n%i==0 || n%(i+2)==0) return 0;
	} 
	return 1;
}
int main(){
	long n;
	std::cin >> n;
	if(snt(n)) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}
