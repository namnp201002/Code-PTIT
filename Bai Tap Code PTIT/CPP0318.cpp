#include<iostream>
#include<string.h>
#include<stdlib.h>
int main(){
	int t;
	std::cin >> t;
	while(t--){
		char a[20];
		scanf("%s", a);
		int checkTangDan = 0 , checkBangNhau = 0, checkBangNhau1 = 0, check68 = 0;
		for(int i = 5 ; i < strlen(a) ; i++ ){
			if( i == 8 ) continue;
			if( i > 5 ){
				if(a[i] <= a[i-1]) checkTangDan++;
			}
			if( i == 9 ){
				if( a[i] != a[i-2] ) checkBangNhau++;
			}else{
				if(a[i] != a[i-1] ) checkBangNhau++;
			}
			if( i > 5 && i <= 7 ){
				if(a[i] != a[i-1]) checkBangNhau1++;
			}
			if( i == 10 ){
				if(a[i] != a[i-1]) checkBangNhau1++;
			}
			if(a[i] != 54 && a[i] != 56) check68++;
		}
		if(checkTangDan == 0 || checkBangNhau == 0 || checkBangNhau1 == 0 || check68 == 0) std::cout << "YES\n";
		else std::cout << "NO\n";
	}
	return 0;
}
