//week16-2b.cpp 學習計畫 Math 最後1題
//LeetCode 50. Pow(x, n) 試著用for迴圈
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n<0){ //遇到負的會失敗, 所以要把n變成正的
            n = -n;
            x = 1/x; //-1次方,就是1/x
        }
        for(int i=0; i<n; i++){ //不幸的是 會失敗 遇到負的n 會失敗
            ans *= x;
        }
        return ans; //請不要送出 只要3個Testcase通過
    }
};