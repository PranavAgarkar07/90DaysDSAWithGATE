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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }

        // vector<int> a;
        stack<int> b;
        ListNode* temp=head;
        // ListNode* newList;
        while(temp!=nullptr){
            b.push(temp->val);
            temp=temp->next;
        }
        ListNode* head2 =nullptr;
        temp=head2;
        while(!b.empty()){
            ListNode* temp2= new ListNode(b.top());
            b.pop();
            if(head2==nullptr){
                head2=temp2;
                temp=head2;
                continue;
            }
            temp->next=temp2;
            temp=temp2;

        }
        return head2;
    }
};