#include<iostream>
#include<string>
#include<algorithm>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::string str="";
		std::string s1;
		getline(std::cin , s1);
		std::string s2;
		getline(std::cin , s2);
		if(s2.size() < s1.size()) std::swap(s1, s2);
		int n1=s1.size(), n2=s2.size();
		int diff = n2 - n1;
		int temp=0;
		for(int i=n1-1; i>=0; i--){
			int sum = (s1[i]-'0') + (s2[i+diff]-'0') + temp;
			str.push_back(sum%10 +'0');
			temp=sum/10;
		}
		for(int i=n2-n1-1; i>=0; i--){
			int sum = s2[i]-'0' + temp ;
			str.push_back(sum%10 + '0');
			temp=sum/10;
		}
		if(temp){
			str.push_back(temp + '0');
		}
		std::reverse(str.begin(), str.end());
		std::cout << str << std::endl;
	}
	return 0;
}
