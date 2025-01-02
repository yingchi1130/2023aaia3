//week17-4.cpp 學習計畫 Basic 第10題(倒數第2題)
//LeetCode 896. Monotonic Array
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int N = nums.size(); //有N個數字
        int big = 0, small = 0;
        for(int i=0;i<N-1;i++){
            int d = nums[i+1] - nums[i];
            if(d>0) big = 1;
            if(d<0) small = 1;
        }
        if(big==1 && small==1) return false;
        else return true;
    }
};