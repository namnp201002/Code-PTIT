#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cin.ignore();
		char s[100];
		cin.getline(s, sizeof(s));
		for(int i=0; i<strlen(s); i++){
			if(s[i]>='A' && s[i]<='Z') s[i]+=32;
		}
		char *p = strtok(s, " ");
		char s1[10][30];
		int count =0;
		while(p!=NULL){
			p[0]-=32;
			strcpy(s1[count++], p);			
			p = strtok(NULL, " ");
		}
		if(n==1){
			cout << s1[count-1] << " ";
			for(int i=0; i<count-1; i++){
				std::cout << s1[i] << " ";
			}
		}else if(n==2){
			for(int i=1; i<count ; i++){
				cout << s1[i] << " ";
			}
			cout << s1[0];
		}
		cout << endl;
	}
	return 0;
}
