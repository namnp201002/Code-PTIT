#include<iostream>
#include<string.h>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		char s[10000];
		std::cin.getline(s, sizeof(s));
		char *p = strtok(s, " \t\n");
		int count = 0;
		while(p!=NULL){
			count ++;
			p = strtok(NULL, " \t\n");
		}
		std::cout << count << std::endl;
	}
	return 0;
}
