///week06-1.cpp std �X�{�n�h�� stdio.h stdlib
#include <iostream>
#include <vector>
#include <algorithm> ///�n�Ϊ��t��k ex. sort()
using namespace std;
int main()
{
    vector<int> a; ///�ʺA�}�C a �̭��˫ܦhint
    a.push_back(20);
    a.push_back(30);
    a.push_back(50);
    for(int i=0;i<3;i++){
        cout << a[i] << "\n";
    }
    sort(a.begin(), a.end());
    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';
}