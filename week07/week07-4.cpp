//week07-4.cpp 學習計畫 Built-in Function 第一題
//LeetCode 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while( ss >> word ){ //一直讀字讀到word 字串裡
            //什麼都不做
        }
        return word.length(); //最後,看字串的長度
    }
};