#include<iostream>

int check(int n){
	int chan=0, le=0;
	while(n>0){
		if((n%10)%2==0) chan++;
		else le++;
		n/=10;
	}
	if(chan==le) return 1;
	else return 0;
}
long mu(int n){
	long poww = 10;
	for(int i=1; i<n; i++){
		poww*=10;
	}
	return poww;
}
int main(){
	int n;
	std::cin >> n;
	int count = 0;
	for(long i=mu(n-1); i<mu(n); i++){
		if(check(i)){
			std::cout << i<< " ";
			count ++;
		}
		if(count==10){
			std::cout << std::endl;
			count=0;
		} 
	}
	return 0;
}
