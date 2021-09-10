#include<iostream>
#include<string.h>
#include<stdlib.h>
int main(){
	char m[] = "qwertyuiopasdfghjklzxcvbnm";
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		char s[100000];
		scanf("%s", s);
		char *p = strtok(s, m);
		long sum = 0;
		while(p!=NULL){
			sum += atol(p);
			p = strtok(NULL, m);
		}
		std::cout << sum << std::endl;
	}
	return 0;
}
