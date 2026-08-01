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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;
        ListNode* merge = nullptr;
        while(list1 != nullptr && list2 != nullptr)
        {
            int x;
            if(list1->val <= list2->val)
            {
                x =list1->val;
                list1 = list1->next;
            }
            else
            {
                x = list2->val;
                list2 = list2->next;
            }
             ListNode* node = new ListNode(x);
            if(merge == nullptr)
                merge = node;
            else
            {
                ListNode *temp = merge;
                while(temp->next !=nullptr)
                    temp = temp->next;
                temp->next = node;  
                // cout<<temp->val<<" ";            
            }
        }
        while(list1 != nullptr)
        {
            ListNode* node = new ListNode(list1->val);
            ListNode* temp = merge;
            while(temp->next !=nullptr)
                temp = temp->next;
            temp->next = node;
            list1 = list1->next;
        }
        while(list2 != nullptr)
        {
            ListNode* node = new ListNode(list2->val);
            ListNode* temp = merge;
            while(temp->next !=nullptr)
                temp = temp->next;
            temp->next = node;
            list2 = list2->next;
        }
        return merge;
    }
};