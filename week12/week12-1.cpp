///week12-1.cpp 想了解 Linked List 的 Node
///比較之前學過的 class vs. struct
#include <iostream>
#include <string>
using namespace std;
///struct Node {}; ///你打好大括號,就會產生下括號、分號
///class Cat {}; ///你打好大括號,就會產生下括號、分號
struct Node {
    int val; ///value值
};
class Cat{
public:
    string name;
};
int main()
{
    Cat cat1; ///大寫的形狀, 宣告 小寫的變數
    cat1.name = "Kitty";
    Node node;
    node.val = 1;
} ///執行時,沒 Compile Error 即可(程式只塞資料,什麼都不做
