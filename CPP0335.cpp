#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
	int t;
	char m[] = "qwertyuiopasdfghjklzxcvbnm";
	cin >> t;
	cin.ignore();
	while(t--){
		long max = 0;
		char s[100000];
		scanf("%s", s);
		char *p = strtok(s, m);
		while(p != NULL){
			if(atoll(p)>max) max = atoll(p);
			p = strtok(NULL, m);
		}
		cout << max << endl;
	}
	return 0;
}
