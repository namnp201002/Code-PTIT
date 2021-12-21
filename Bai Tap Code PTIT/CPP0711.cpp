#include<bits/stdc++.h>
using std::string;
void Binary(int n, int i){
	string s="";
	while(i>0){
		s+=(i%2+'0');
		i/=2;
	}
	while(s.length()<n){
		s+='0';
	}
	for(int i=s.length()-1; i>=0; i--){
		std::cout << s[i];
	}
	std::cout<<" ";
}
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin>>n;
		int k=pow(2, n);
		for(int i=0; i<k; i++){
			Binary(n, i);
		}
		std::cout<<std::endl;
	}
}
