#include<iostream>
#include<string.h>
#include<stdlib.h>
using std::string;
struct DanhSach{
	char Name[20];
	char Date[12];
	int ngay, thang, nam;
};
int main(){
	int n;
	std::cin >> n;
	struct DanhSach arr[n+1], Tre, Gia;
	int maxNgay=0, maxThang=0, maxNam=0;
	int minNgay=31, minThang=13, minNam=3000;
	for(int i=0; i<n; i++){
		scanf("%s", arr[i].Name);
		scanf("%s", arr[i].Date);
		char *p = strtok(arr[i].Date, "/");
		int count=0;
		while(p!=NULL){
			if(count == 0) arr[i].ngay=atoi(p); // atoi() chuyen chuoi sang so
			if(count == 1) arr[i].thang=atoi(p);
			if(count == 2) arr[i].nam=atoi(p);
			count ++;
			p=strtok(NULL, "/");
		}
		if(arr[i].nam>maxNam){
			Tre = arr[i];
			maxThang = arr[i].thang;
			maxNam = arr[i].nam;
			maxNgay = arr[i].ngay;
		}else if(arr[i].nam==maxNam){
			if(arr[i].thang>maxThang){
				Tre=arr[i];
				maxThang = arr[i].thang;
				maxNgay=arr[i].ngay;
				maxNam = arr[i].nam;
			}else if(arr[i].thang == maxThang){
				if(arr[i].ngay>maxNgay){
					Tre=arr[i];
					maxThang = arr[i].thang;
					maxNgay=arr[i].ngay;
					maxNam = arr[i].nam;
				}
			}
		}
		if(arr[i].nam < minNam){
			Gia = arr[i];
			minNgay = arr[i].ngay;
			minThang = arr[i].thang;
			minNam = arr[i].nam;
		}else if(arr[i].nam == minNam){
			if(arr[i].thang < minThang){
				Gia = arr[i];
				minNgay = arr[i].ngay;
				minThang = arr[i].thang;
				minNam = arr[i].nam;
			}else if(arr[i].thang == minThang){
				if(arr[i].ngay < minNgay){
					Gia = arr[i];
					minNgay = arr[i].ngay;
					minThang = arr[i].thang;
					minNam = arr[i].nam;
				}
			}
		}
	}
	std::cout << Tre.Name <<std::endl;
	std::cout << Gia.Name;
	return 0;
}
