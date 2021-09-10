#include<iostream>
void merge(int a[], int l, int m, int r){
	int n1=m-l+1;
	int n2=r-m;
	int L[n1], R[n2];
	for(int i=0; i<n1; i++) L[i] = a[l+i];
	for(int i=0; i<n2; i++) R[i] = a[m+1+i];
	int i=0, j=0, k=l;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			a[k++] = L[i];
			i++;
		}else {
			a[k++] = R[j];
			j++;
		}
	}
	while(n1>i){
		a[k++] = L[i];
		i++;
	}
	while(n2>j){
		a[k++] = R[j];
		j++;
	}
}
void mergeSort(int a[], int l, int r){
	if(l<r){
		int m = (l+r)/2;
		mergeSort(a, l, m);
		mergeSort(a, m+1, r);
		merge(a, l, m, r);
	}
}
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n, k;
		std::cin >> n >> k;
		int a[n+5];
		for(int i=0; i<n; i++){
			std::cin>>a[i];
		}
		mergeSort(a, 0, n-1);
		std::cout << a[k-1]<< std::endl;
	}
}
