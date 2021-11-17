#include<iostream>

using namespace std;

int a[2] = {0, 1};
int s[100] = {0};
void Fopt(int n, int w[], int v[], int b, long &max){
	int sumWeight = 0;
	for(int j = 0; j < n; j++){
		sumWeight = sumWeight + s[j]*w[j];
	}
	if(sumWeight <= b){
		long maxValue = 0;
		for(int j = 0; j < n; j++){
			maxValue += s[j]*v[j];
		}
		if(maxValue > max) max = maxValue;
	}else return;
}
void findMaxValue(int index, int n, int b, int w[], int v[], long &max){
	for(int i = 0; i < 2; i++){
		s[index] = a[i];
		if(index == n - 1){
			Fopt(n, w, v, b, max);
		}else{
			findMaxValue(index + 1, n, b, w, v, max);
		}
	}
}
int main(){
	int n, b;
	cin >> n >> b;
	int w[100], v[100];
	for(int i = 0; i < n; i++){
		cin >> w[i] >> v[i];
	}
	long max = 0;
	findMaxValue(0, n, b, w, v, max);
	cout << max;
	return 0;
}