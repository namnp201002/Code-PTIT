#include<iostream>
struct ToaDo{
	int x, y, z;
};
int main(){
	int t;
	std::cin >> t;
	while(t--){
		ToaDo A, B, C , D;
		cin >> A.x >> A.y >> A.z;
		cin >> B.x >> B.y >> B.z;
		cin >> C.x >> C.y >> C.z;
		ToaDo AB, CD;
		AB.x = B.x - A.x;
		AB.y = B.y - A.y;
		AB.z = B.z - A.z;
	}
}
