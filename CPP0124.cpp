#include<iostream>
#include<math.h>
#include<map>
using std::map;
int main(){
	long n;
	std::cin >> n;
	map<int, int> m;
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
	for(map<int,int>::iterator it=m.begin(); it!=m.end(); it++){
		std::cout << it->first << " " << it->second <<std::endl;
	}
	return 0;
}
