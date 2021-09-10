#include<iostream>
int firstMissingPositive(int arr[], int n){
    int ptr = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            ptr = 1;
            break;
        }
    }
    if (ptr == 0)
        return 1;
    for (int i = 0; i < n; i++)
        if (arr[i] <= 0 || arr[i] > n)
            arr[i] = 1;
    for (int i = 0; i < n; i++)
        arr[(arr[i] - 1) % n] += n;
    for (int i = 0; i < n; i++)
        if (arr[i] <= n)
            return i + 1;
    return n + 1;
}
int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int a[n+5];
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		std::cout << firstMissingPositive(a, n) << std::endl;
	}
	return 0;
}
