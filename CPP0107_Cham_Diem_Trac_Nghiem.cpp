#include<iostream>
#include<string>
#include<iomanip>
using std::string;
int main(){
	char a[15]= {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	char b[15]= {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		string s;
		getline(std::cin, s);
		string s1 = s.substr (0,3);
		int count =0, dem=0;
		if(s1 == "101") {
			for(int i=4; i<s.size(); i+=2){
				if(s[i]==a[count]){
					dem++;
				}
				count ++;
			}
		}
		else if(s1 == "102") {
			for(int i=4; i<s.size(); i+=2){
				if(s[i]==b[count]){
					dem++;
				}
				count ++;
			}
		}
		double Score =(double) 10*dem/15;
		std::cout << std::setprecision(2) << std::fixed << Score << std::endl;
	}
	return 0;
}
