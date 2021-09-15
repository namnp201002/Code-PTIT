#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	int m;
	cin >> m;
	int b[m][m];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j ++){
			cin >> b[i][j];
		}
	}
	if(m!=n){
		for(int i = 0; i < n; i+=m){
			for(int j = 0; j < n; j+=m){
				int y = 0;
				for(int k = i; k < i+m ; k++){
					int x = 0;
					for(int l = j; l< j+m; l++){
						a[k][l] *= b[y][x];
						x++;
					}
					y++;
				}
			}
		}
	}else{
		for(int i = 0; i<n; i++){
			for(int j = 0; j<n; j++){
				a[i][j] *= b[i][j];
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout <<  a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
