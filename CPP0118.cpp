#include<iostream>
#include<math.h>
#include<map>

int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		std::map <int,int> m;
		while(n%2==0){
			m[2]++;
			n/=2;
		}
		for(int i=3; i<=sqrt(n); i+=2){
			while(n%i==0){
				m[i]++;
				n/=i;
			}
		}
		if(n>2) m[n]++;
		if(m.size()==3){
			int check = 0;
			for(std::map<int,int>::iterator it = m.begin(); it!=m.end(); it++){
				if(it->second > 1) {
					check++;
					break;
				}
			}
			if(check==0) std::cout << "1\n";
			else std::cout << "0\n";
		}else std::cout << "0\n";
	}
	return 0;
}
