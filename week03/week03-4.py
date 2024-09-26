# week03-4.py
# LeetCode 28. Find the Index of the First Occurrence in a String
#學習計畫地3題 大海撈針 在haystack裡找needle
#在Python 只要一行 a.find(b) 在字串a裡找字串b
class Solution:
    def strStr(self, a: str, b: str) -> int:
        return a.find(b)
        