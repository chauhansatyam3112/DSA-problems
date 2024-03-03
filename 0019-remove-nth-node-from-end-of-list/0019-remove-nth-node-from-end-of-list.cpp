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
    int solve(ListNode*head)
    {
        int len=0;
        
      
        while(head!=NULL)
        {
            head=head->next;
            len++;
        }
        
        return len;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int len=solve(head);
        
        if(len==n)
        {
            ListNode*temp=head->next;
            
            delete(head);
            
            return temp;
            
        }
        
        int p=len-n;
        
        ListNode*temp=head;
        
        ListNode*prev=NULL;
        
        while(p--)
        {
           prev=temp;
            temp=temp->next;
        }
        
        prev->next=temp->next;
        
        delete(temp);
        
        return head;
    }
};