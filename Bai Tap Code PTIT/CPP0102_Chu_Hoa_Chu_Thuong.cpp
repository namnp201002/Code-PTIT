#include<iostream>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		std::cin.ignore();
		char x;
		std::cin >> x;
		if(x>='A' && x <= 'Z'){
			x+=32;
		}else if(x>='a' && x<='z') x-=32;
		std::cout << x << std::endl;
	}
	return 0;
}
