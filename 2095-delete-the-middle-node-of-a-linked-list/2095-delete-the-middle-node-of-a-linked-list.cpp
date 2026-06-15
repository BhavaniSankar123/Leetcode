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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next==nullptr) return nullptr;
        int c=0;
        ListNode* temp = head;
        while (temp!= nullptr) {
            temp = temp->next;
            c++; 
        }
        ListNode* temp1 = head;
        for(int i=1;i<c/2;i++)
        temp1 = temp1->next;
        ListNode *prev,*cur;
        prev = temp1;
        if(temp1!=nullptr)
        cur = prev->next;
        if(cur!=nullptr)
            prev->next = cur->next;
        return head;
    }
};