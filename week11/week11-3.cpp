///week11-3.cpp 想看看 Hash Map 的對照表強處
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{///大二上資結演算法教的 Hash Map 雜奏表
    unordered_map<string,int> m; ///又小又快, 右邊放int整數
    m["蔡育倫"] = 12750300;
    m["張偉宸"] = 12750794;

    cout << "蔡育倫的學號是:" << m["蔡育倫"] << endl;
    cout << "張偉宸的學號是:" << m["張偉宸"] << endl;
}
