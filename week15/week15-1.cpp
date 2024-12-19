//week15-1.cpp UVa12250 not OK
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string hello;
	int t=1; //Step03: Test Case
	while(cin >> hello){
		if(hello == "#") break; //Step01: Input
		
		cout << "Case " << t << ": ENGLISH\n";
		t++;
	}//Step02: Ouput
}