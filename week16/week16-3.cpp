//week16-3.cpp 學習計畫 Math 最後1題
//LeetCode 50. Pow(x, n) 試著用for迴圈
class Solution {
public:
    double helper(double x,long long int n){ //函式呼叫函式
        if(n==0) return 1;
        if(n==1) return x;
        double now = helper(x, n/2);
        if(n%2==0) return now * now;
        else return now * now * x; //奇數多程1個x
    } 
    double myPow(double x,long long int n) {//要改成很長很長的整數
        double ans = 1;
        if(n<0){ //遇到負的會失敗, 所以要把n變成正的
            n = -n;
            x = 1/x; //-1次方,就是1/x
        }
        return helper(x,n); //請不要送出 只要3個Testcase通過
    }
};