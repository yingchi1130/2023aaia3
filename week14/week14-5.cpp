//week14-5.cpp (YKL06.UVA10190) Divide, But Not Quite Conquer!
#include <iostream>
using namespace std;
int main()
{
	int a,b; //Step01: input
	while(cin >> a >> b){
		while(a>0){//Step03: Bo Pi Fa
			cout << a << " ";
			a = a / b;
		}
		cout << "Boring!\n"; 
	}//Step02: output
}