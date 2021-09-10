#include<iostream>
#include<string.h>
#include<iomanip>
struct SinhVien{
	char MSV[15];
	char Name[50];
	char Lop[15];
	float a, b, c;
};
int main(){
	int n;
	std::cin >> n;
	SinhVien arr[n+5];
	for(int i=0; i<n; i++){
		scanf("%s", arr[i].MSV);
		std::cin.ignore();
		std::cin.getline( arr[i].Name, sizeof(arr[i].Name));
		scanf("%s", arr[i].Lop);
		std::cin >> arr[i].a >> arr[i].b >> arr[i].c;
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(arr[i].MSV,arr[j].MSV)>0){
				SinhVien a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}
	for(int i=0; i<n; i++){
		std::cout << i+1<<" " << arr[i].MSV <<" "<<arr[i].Name << " ";
		std::cout << arr[i].Lop << " " <<std::fixed <<std::setprecision(1)<< arr[i].a << " " << arr[i].b <<" " << arr[i].c <<std::endl;
	}
	return 0;
}

