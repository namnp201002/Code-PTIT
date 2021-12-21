#include<iostream>
#include<map>
#include<string>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::string s;
		getline(std::cin, s);
		std::map<char, int> m;
		for(int i=0; i<s.size(); i++){
			m[s[i]]++;
		}
		int count =0;
		for(int i=0; i<s.size(); i++){
			if(m[s[i]]>1){
				count += ((m[s[i]]*(m[s[i]]+1)/2)-m[s[i]]);
				m[s[i]]=0;
			}
		}
		std::cout << s.size() + count << std::endl;
	}
}
