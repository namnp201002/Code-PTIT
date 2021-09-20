#include<stdio.h>
int main(){
	float a = 72;
	float k = 0.023, s = 1.5;
	float x = a*s;
	int count = 0;
	while(a < x){
		a = a*k + a;
		count++;
	}
	printf("Den nam %d thi so dan nuoc ta tang gap 1.5 lan so voi nam 1993", 1993 + count);
}
