#include<iostream>
#include<string.h>
#include<stdlib.h>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		char a[20], b[20], c[20], d[20];
		scanf("%s", a);
		scanf("%s", b);
		strcpy(c, a);
		strcpy(d, b);
		for(int i=0; i<strlen(a); i++){
			if(a[i]=='6') a[i]--;
		}
		for(int i=0; i<strlen(b); i++){
			if(b[i]=='6') b[i]--;
		}
		std::cout << atoll(a) + atoll(b) << " ";
		for(int i=0; i<strlen(c); i++){
			if(c[i]=='5') c[i]++;
		}
		for(int i=0; i<strlen(d); i++){
			if(d[i]=='5') d[i]++;
		}
		std::cout << atoll(c) + atoll(d) << std::endl;
	}
	return 0;
}
