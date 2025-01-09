//week18-1a.cpp
//LeetCode 2185. Counting Words With a Given Prefix
//挑戰題
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        //for(int i=0; i<words.size; i++){
        // words[i]
        for(string word : words){
            int bad=0;
            for(int i=0;pref[i]!=0;i++){
                if(pref[i] != word[i]){ 
                    bad=1;
                    break;
                }
            }
            if(bad==0) ans++;
        }
        return ans;
    }
};