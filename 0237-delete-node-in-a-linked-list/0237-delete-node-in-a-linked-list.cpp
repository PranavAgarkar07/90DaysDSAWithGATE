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
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        ListNode dummy(0);
        dummy.next=node;
        ListNode* prev=&dummy;
        while(temp->next!=nullptr){
            temp->val=temp->next->val;
            temp=temp->next;
            prev=prev->next;
        }
        prev->next=nullptr;
    }
};