#include<iostream>
#include<cstring>
using namespace std;
char a[10]={'A','B','C','D','E','F','G','H','I','J'};
char b[10]={'K','L','M','N','O','P','Q','R','S','T'};
int number(char s){
	if(s>='0'&&s<='9'){
		return 1;
	}
	else{
		return 0;
	}
}
int check1(string s, string t){
	string res;
	for(int i=0;i<t.size();i++){
		if(number(t[i])){
			continue;
		}
		else{
			res+=t[i];
		}
	}
	if(s.size()!=res.size()) return 0;
	for(int i=0;i<s.size();i++){
		int tmp=s[i]-'0';
		if(a[tmp]!=res[i]&&b[tmp]!=res[i]){
			return 0;
		}
		return 1;
	}
}
	
int main(){
	int t;
	cin>>t;
	string s,test;
	while(t!=0){
		cin>>s>>test;
		if(check1(s,test)==1){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
		t--;
	}
	
}
