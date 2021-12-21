#include<iostream>
#include<string.h>
#include<map>
#include<vector>
#include<stdlib.h>
#include<algorithm>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::vector<std::string> v;
		std::vector<std::string> v1;
		std::map<std::string, int> m;
		char s1[500];
		std::cin.getline(s1, sizeof(s1));
		char s2[500];
		std::cin.getline(s2, sizeof(s2));
		char *p = strtok(s1, " ");
		while(p!=NULL){
			m[p]++;
			v.push_back(p);
			p = strtok(NULL, " ");
		}
		char *q = strtok(s2, " ");
		while(q!=NULL){
			m[q]++;
			v1.push_back(q);
			q = strtok(NULL, " ");
		}
		std::vector<int>::iterator j;
		for(std::map<std::string, int>::iterator it = m.begin(); it!= m.end(); it++){
			if(std::find(v.begin(), v.end(), it->first)!=v.end() && std::find(v1.begin(), v1.end(), it->first)==v1.end()) {
				std::cout << it->first << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
