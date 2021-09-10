#include<bits/stdc++.h>
#include<tr1/unordered_map>
using namespace std::tr1;
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		std::cin.ignore();
		std::string s;
		getline(std::cin, s);
		unordered_map<int , int> m;
		for(int i=0; i<n; i++){
			if(s[i]=='0') continue;
			else if(s[i]=='1') continue;
			else if(s[i]=='2') m[2]++;
			else if(s[i]=='3'){
				m[3]++; m[2]++;
			}
			else if(s[i]=='4') {
				m[3]++;
				m[2]+=3;
			}
			else if(s[i]=='5') {
				m[5]++; m[3]++; m[2]+=3;
			}
			else if(s[i]=='6'){
				m[5]++; m[3]+=2; m[2]+=4;
			}else if(s[i]=='7') {
				m[7]++; m[5]++; m[3]+=2; m[2]+=4;
			}
			else if(s[i]=='8') {
				m[7]++; m[5]++; m[3]+=2; m[2]+=7;
			}
			else if(s[i]=='9') {
				m[7]++; m[5]++; m[3]+=3; m[2]+=7;
			}
		}
		if(m[7] != 0) {
			m[3]-=2*m[7];
			m[2]-=4*m[7];
			m[5]-=1*m[7];
		}
		for(int i=1; i<=m[7]; i++){
			std::cout << "7";
		}
		if(m[5]!=0){
			m[3]-=1*m[5]; m[2]-=3*m[5];
		}
		for(int i =1; i<=m[5]; i++){
			std::cout << "5";
		}
		if(m[3]!=0){
			m[2]-=m[3];
		}
		for(int i=1; i<=m[3]; i++){
			std::cout << "3";
		}
		for(int i=1; i<=m[2]; i++){
			std::cout << "2";
		}
		std::cout << std::endl;
	}
	return 0;
}
