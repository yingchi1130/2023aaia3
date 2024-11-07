//week09-4.cpp 學習計畫 Math 第2題 扣掉最大、最小，再平均
//1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
      int max = salary[0]; //要找最大值,先拿最前面的那個人,當預設值
      int min = salary[0]; //要找最小值,先拿最前面的那個人,當預設值
      double total = 0;
      for(int i=0;i<salary.size();i++){
        if(salary[i]>max) max = salary[i]; //比最大還大,最大值換人
        if(salary[i]<min) min = salary[i]; //比最小值還小,最小值換人
        total += salary[i];
      }
      return (total - max - min) / (salary.size()-2);
    }
};