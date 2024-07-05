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
        vector<int> cp;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        int pos= 0;
        
        while (curr != nullptr && curr->next != nullptr) {
            if (prev != nullptr && curr->next != nullptr) {
                if ((curr->val > prev->val && curr->val > curr->next->val) || 
                    (curr->val < prev->val && curr->val < curr->next->val)) {
                    cp.push_back(pos);
                }
            }
            prev = curr;
            curr = curr->next;
            pos++;
        }
        
        if (cp.size() < 2) 
            return {-1, -1};
        
        int i,mi =INT_MAX,ma = cp.back()-cp.front();
        for (i=1;i<cp.size();i++) 
            mi = min(mi,cp[i]- cp[i-1]);
        
        return {mi, ma};
    }
};