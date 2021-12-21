#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j;
		cin>>n;
		int a[n+5];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int s1=0,s2=0;
		int min=INT_MAX;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(abs(a[i]+a[j]) < min){
					min = abs(a[i]+a[j]);
					s1 = a[i];
					s2 = a[j];
				}
			}
		}
		cout<<s1+s2<<endl;
	}
}

