#include<iostream>
#include<string.h>
int main(){
	char s1[100];
	std::cin.getline(s1, sizeof(s1));
	char s2[100];
	std::cin.getline(s2, sizeof(s2));
	char *p = strtok(s1, " ");
	int i=0;
	char s[100][100];
	while(p!=NULL){
		strcpy(s[i++], p);
		p = strtok(NULL, " ");
	}
	for(int j=0; j<i; j++){
		if(strcmp(s[j], s2)!=0) std::cout<<s[j]<<" ";
	}
	return 0;
}
