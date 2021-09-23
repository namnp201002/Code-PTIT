#include<iostream>
#include<algorithm>
#include<math.h>

long long BCNN(long long a,long long b,long long c){
	long long ans = a*b/std::__gcd(a,b);
	return ans*c/std::__gcd(ans,c);
}
long long check(int n, int a, int b, int c){
	long long BC = BCNN(a,b,c);
	long long x = pow(10, n-1);
	if(x%BC==0) return x;
	x+= BC - (x%BC);
	if(x < pow(10,n)) return x;
	else return 0;
}
int main(){
	int t;
	std::cin >> t;
	while(t--){
		long long x, y, z, n;
		std::cin >> x >> y >> z >> n;
		if(check(n,x,y,z)) std::cout << check(n,x,y,z) <<std::endl;
		else std::cout << "-1" <<std::endl;
	}
	return 0;
}
