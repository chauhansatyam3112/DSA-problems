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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
         if(!head)
            return head;
        
        ListNode* t1=head,*t2=head;
        
        for(int i=1;i<k;i++)
            
            t2=t2->next;
        
        ListNode* t3=t2;
        while(t2 && t2->next)
        {
            t1=t1->next;
            t2=t2->next;
        }
        auto t=t1->val;
        t1->val=t3->val;
        t3->val=t;
        return head;
    }
};