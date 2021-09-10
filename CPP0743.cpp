#include<iostream>
#include<stack>
#include<string>
using std::string;
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		string s;
		getline(std::cin, s);
		std::stack<string> st;
		int pos = 0;
		while ((pos = s.find(' ')) != string::npos) {
		    string token = s.substr(0, pos);
		    st.push(token);
		    s.erase(0, pos + 1);
		}
		st.push(s);
		while(!st.empty()){
			std::cout << st.top() << " ";
			st.pop();
		}
		std::cout << std::endl;
	}
	return 0;
}
