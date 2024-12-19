//week15-5.cpp 學習計畫 Linkes List 第4題 要用上週第3題(加起來)、上上週第2題(倒過來)
//LeetCode 445. Add Two Numbers II
class Solution {
public:
    ListNode* myReverse(ListNode* l1){
        vector<int> a; //伸縮自如的陣列
        while(l1 != nullptr){ //只要還有node
            a.push_back( l1->val );
            l1 = l1->next; //換下一筆
        } //想先做倒過來
        ListNode* ans = new ListNode(); //新準備好 ans node
        ListNode* now = ans; //現在處理 node
        int N = a.size();
        for(int i=N-1;i>=0;i--){ //倒過來的for迴圈
            now->next = new ListNode(a[i]); //新產生1個node
            now = now->next; //換下一個
        }
        return ans->next; //原來ans是空的,他的下一個,才有值
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = myReverse(l1);
        l2 = myReverse(l2);
        ListNode* ans = new ListNode();
        ListNode* now = ans;
        int carry = 0; //進位
        while(l1 != nullptr || l2 != nullptr){ 
            if(l1==nullptr){
                int here = l2->val + carry;
                carry = here / 10;
                now->next = new ListNode( here%10 ); 
                now = now->next; 
                //l1 = l1->next; 
                l2 = l2->next;
            }else if(l2==nullptr){
                int here = l1->val + carry;
                carry = here / 10;
                now->next = new ListNode( here%10 ); 
                now = now->next; 
                l1 = l1->next; 
                //l2 = l2->next;
            }else{
                int here = l1->val + l2->val + carry;
                carry = here / 10;
                now->next = new ListNode( here%10 ); 
                now = now->next; 
                l1 = l1->next;
                l2 = l2->next;
            }
        }
        if(carry>0) now->next = new ListNode(carry);
        return myReverse(ans->next);
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
