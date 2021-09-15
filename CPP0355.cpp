#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	vector<char> v;
	while(cin >> s){
		if(s == "_") break;
		for(int i=0; i<s.size(); i++){
			if (s[i]>='A' && s[i]<='Z') s[i]+=32;
		}
		if(s.size()==1 && (s[0] == '?' || s[0] == '.' || s[0] == '!' || s[0] == ',' || s[0] == ':') ){
			if(s[0] == '?' || s[0] == '.' || s[0] == '!'){
				v.push_back('\n');
			}else v.push_back(s[0]);
		}else {
			for(int i = 0; i<s.size(); i++){
				if(s[i] == '.' || s[i] == '!' || s[i] == '?'){
					v.push_back('\n');
				}else if(s[i] == ':' || s[i] == ','){
					v.push_back('%');
					v.push_back(s[i]);
				}else v.push_back(s[i]);
			}
		}
		v.push_back('%');
	}
	v[0]-=32;
	for(int i = 0; i < v.size(); i++){
		if(v[i] == '%' ){
			if(v[i-1] == '\n' && i>0)  {
				v[i+1] -= 32;
			}else if((v[i+1] == ',' || v[i+1] == ':') && i>0 && i<v.size()-1){
				cout << v[i+1] << " ";
				i+=2;
			}else{
				cout << " ";
			}
		}else cout << v[i];
	}
	return 0;
}
