#include <stdio.h> 
int a[10]={5,20,38,50,38,20,8,5,0};
int main() {
	int n;
	scanf("%d",&n);
	while (n--) { 
		int z;
		scanf("%d",&z);
		printf("%d\n",a[z-1]); 
	}
	return 0;
}
