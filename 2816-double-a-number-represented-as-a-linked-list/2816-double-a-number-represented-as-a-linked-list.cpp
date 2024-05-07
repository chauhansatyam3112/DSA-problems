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
    ListNode* doubleIt(ListNode* head) {
        
            ListNode *curr=head, *prev=nullptr;
            
            while(curr!=nullptr)
            {
                    int newval=curr->val*2;
                    
                    if(newval<10)
                    {
                            curr->val=newval;
                    }
                    else{
                            curr->val=newval%10;
                            
                            if(prev==nullptr)
                            {
                                    ListNode* preval=new ListNode(1);
                                    
                                    head=preval;
                                    
                                    head->next=curr;
                                    
                            }
                            else{
                                    prev->val+=1;
                            }
                    }
                    prev=curr;
                    curr=curr->next;
            }
            
            return head;
    }
};