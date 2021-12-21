#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
	ifstream fileIn;
	fileIn.open("PTIT.in");
	string s;
	string data;
	while (!fileIn.eof())
	{
		getline(fileIn, s);
		data = data + s + '\n';
	}
	ofstream fileOut ("PTIT.out");
	fileOut << data;
	fileOut.close();
	fileIn.close();
	return 0;
}
