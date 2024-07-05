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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
       if (!head || !head->next || !head->next->next) {
        return {-1, -1}; 
    }

    ListNode* P = head->next;
    int prev = head->val;
    int cnt = 1;
    vector<int> v;

    while (P->next != NULL) {
        cnt++;
        
        if ((P->val > prev && P->val > P->next->val) || (P->val < prev && P->val < P->next->val)) {
            
            v.push_back(cnt);
        }
        
        prev = P->val;
        
        P = P->next;
    }

    if (v.size() < 2) {
        
        return {-1, -1};
    }

    int minDist = INT_MAX;
        
    for (int i = 1; i < v.size(); i++) {
        
        minDist = min(minDist, v[i] - v[i - 1]);
    }
        
    int maxDist = v.back() - v.front();

    return {minDist, maxDist};

        
    }
};