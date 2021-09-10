#include<iostream>
#include<string.h>
int main(){
	int t;
	std::cin >> t;
	std::cin.ignore();
	while(t--){
		std::string s;
		getline(std::cin, s);
		if(s[0]=='0') std::cout << "INVALID\n";
		else{
			int so0=0, so1=0, so2=0, so3=0, so4=0, so5=0, so6=0, so7=0, so8=0, so9=0;
			int check = 0;
			for(int i=0; i<s.size(); i++){
				if(s[i]<'0' || s[i]>'9'){
					check ++;
					break;
				}
				if(s[i]=='1') so1++;
				else if(s[i]=='2') so2++;
				else if(s[i]=='3') so3++;
				else if(s[i]=='4') so4++;
				else if(s[i]=='5') so5++;
				else if(s[i]=='6') so6++;
				else if(s[i]=='7') so7++;
				else if(s[i]=='8') so8++;
				else if(s[i]=='9') so9++;
				else if(s[i]=='0') so0++;
			}
			if(check != 0) std::cout << "INVALID\n";
			else{
				if(so0>0 && so1>0 &&so2>0 &&so3>0 &&so4>0 &&so5>0 &&so6>0 &&so7>0 &&so8>0 &&so9>0){
					std::cout << "YES\n";
				}else std::cout <<"NO\n";
			}
		}
	}
	return 0;
}
