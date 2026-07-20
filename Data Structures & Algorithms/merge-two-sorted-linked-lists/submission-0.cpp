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
            ListNode* dummy = new ListNode(-1);
            ListNode* temp = dummy;
            ListNode* t1 = list1;
            ListNode* t2 = list2;
            while(t1!=NULL && t2!=NULL){
                if(t1->val <= t2->val) {
                    dummy->next = t1;
                    dummy = t1;
                    t1 = t1->next;
                }
                else {
                    dummy->next = t2;
                    dummy = t2;
                    t2 = t2->next;
                }
            } 
            if(t1) dummy->next = t1;
            else dummy->next = t2;
            return temp->next;   
        }
};
