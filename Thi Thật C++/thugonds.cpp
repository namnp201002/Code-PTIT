#include<bits/stdc++.h>
using namespace std;
int thugon(int n,int x){
    stack<int> st;
    st.push(x);
    n--;
    while(n--){
        cin >> x;
        if(!st.empty() && (x+st.top())%2==0) st.pop();
        else st.push(x);
    }
    return st.size();
}
//struct array_mark{
//	int x;
//	int mark = 0;
//};
//void thugon(int n){
//	array_mark arr[n+5];
//	for(int i = 0; i < n; i++){
//		cin >> arr[i].x;
//	}
//	for(int i = 0; i < n-1; i++){
//		if((arr[i].x + arr[i+1].x)%2==0){
//			arr[i].mark = 1;
//			arr[i + 1].mark = 1;
//			i++;
//		}
//	}
//	int count = 0;
//	for(int i = 0; i < n; i++){
//		if(arr[i].mark == 0) count ++;
//	}
//	cout << count;
//}
int main(){
    int n, x;
    cin >> n >> x;
	cout << thugon(n, x);
    return 0;
}
