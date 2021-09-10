#include<iostream>
int main(){
	bool check[100000];
	for(int i=2; i<=100000; i++){
		check[i]=true;
	}
	for(int i=2; i<=100000; i++){
		if(check[i]== true){
			for(int j=2*i; j<=100000; j+=i){
				check[j]=false;
			}
		}
	}
	int a, b;
	std::cin >> a >> b;
	int max,min;
	if(a>b){
		max=a;
		min=b;
	}else{
		max=b; 
		min =a;
	}
	for(int i=min; i<=max ; i++){
		if(check[i]==true) std::cout<<i<<" ";
	}
	return 0;
}
