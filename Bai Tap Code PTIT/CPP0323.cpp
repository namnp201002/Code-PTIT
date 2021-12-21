#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int T;
	cin>>T; 
	while(T--){
		string a; 
		long long b,j=0; 
		cin>>a>>b; 
		int s1[1000]; 
		int k=a.size(); 
		for(int i=0;i<k;i++){ 
			s1[i]=a[i]-'0'; 
		}
		for(int i=0;i<k;i++){ 
			j=(j*10+s1[i])%b; 
		} 
		cout<<j<<endl; 
	}
	return 0;
}
