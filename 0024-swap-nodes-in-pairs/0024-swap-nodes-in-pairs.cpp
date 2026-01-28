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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=head;
        if(temp==nullptr){
            return head;
        }
        else if(temp->next==nullptr){
            return head;
        }
        else{
            while(temp!=nullptr && temp->next!=nullptr){
            int val1=temp->val;
            int val2=temp->next->val;
            temp->val=val2;
            temp->next->val=val1;
            temp=temp->next->next;
            }
        }
        
        return head;
    }
};