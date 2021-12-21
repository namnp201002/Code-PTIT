#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1;
		getline(cin,s1);
		string s2;
		getline(cin,s2);
		while(s1.size()<s2.size()){
			s1 = "0" + s1;
		}
		while(s2.size()<s1.size()){
			s2 = "0" + s2;
		}
		if( s1.compare(s2) > 0) swap(s1, s2);
		reverse(s1.begin(), s1.end());
		reverse(s2.begin(), s2.end());
		string s = "";
		int temp = 0;
		int n1 = s1.length(), n2=s2.length();
		for(int i=0; i <n1; i++){
			int sum = 0;
			if(s2[i]<s1[i]+temp){
				sum = s2[i] + 10 - s1[i] - temp;
				temp = 1;
				s.push_back(sum + '0');
			}else{
				sum = s2[i] - s1[i] - temp;
				s.push_back(sum + '0');
				temp = 0;
			}
		}
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
	return 0;
}
