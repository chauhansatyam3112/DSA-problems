/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head==NULL)return false;
        
        ListNode *slow=head;
        
        ListNode*Fast=head;
        
        while(Fast!=NULL && Fast->next!=NULL)
        {
            slow=slow->next;
            
            Fast=Fast->next->next;
            
            if(slow==Fast)return true;
        }
        
        return false;
    }
};