///week06-1.cpp std 出現好多次 stdio.h stdlib
#include <iostream>
#include <vector>
#include <algorithm> ///好用的演算法 ex. sort()
using namespace std;
int main()
{
    vector<int> a; ///動態陣列 a 裡面裝很多int
    a.push_back(20);
    a.push_back(30);
    a.push_back(50);
    for(int i=0;i<3;i++){
        cout << a[i] << "\n";
    }
    sort(a.begin(), a.end());
    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';
}