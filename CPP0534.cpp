#include<iostream>
#include<string.h>
#include<map>
#include<algorithm>
struct PhanTu{
	std::string ChuoiSo;
	int stt;
};
int TN(char s[]){
	for(int i=0; i<=strlen(s)/2; i++){
		if(s[i]!=s[strlen(s)-1-i]) return 0;
	}
	return 1;
}
int main(){
	char s[100000];
	std::map<std::string, int> m;
	std::map<std::string, int>::iterator i;
	while(scanf("%s", s) !=-1){
		if(strlen(s)>1 && TN(s) ) {
			m[s]++;
		}
	}
	struct PhanTu arr[10000];
	int count=0;
	for(i = m.begin(); i!= m.end(); i++){
		arr[count].ChuoiSo = i->first;
		arr[count].stt = i->second;
		count++;
	}
	for(int i=0; i<count-1; i++){
		for(int j=i+1; j<count; j++){
			if(arr[i].ChuoiSo.size()<arr[j].ChuoiSo.size()){
				struct PhanTu a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}else if(arr[i].ChuoiSo.size()==arr[j].ChuoiSo.size()){
				int check = 0;
				for(int k=0; k<arr[i].ChuoiSo.size(); k++){
					if(arr[i].ChuoiSo[k]<arr[j].ChuoiSo[k]){
						check=1;
						break;
					}
				}
				if(check!=0){
					struct PhanTu a = arr[i];
					arr[i] = arr[j];
					arr[j] = a;
				}
			}
		}
	}
	for(int i=0; i<count ; i++){
		std::cout << arr[i].ChuoiSo << " " << arr[i].stt <<std::endl;
	}
	return 0;
}
